LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cont_min IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        EA: IN std_logic_vector(1 DOWNTO 0);
        passou_1min: IN std_logic;
        modo_novoquarto: IN std_logic;
        modo_nba: IN std_logic;
        carga: IN std_logic;
        c_min: IN std_logic_vector(3 DOWNTO 0);
        minutos: OUT std_logic_vector(3 DOWNTO 0);
        fim_quarto: IN std_logic;
        fim_jogo: IN std_logic
    );
END ENTITY cont_min;

ARCHITECTURE behavior OF cont_min IS
    SIGNAL conta_min: integer RANGE 0 TO 12 := 12;
BEGIN
    PROCESS(clock, reset, modo_nba)
    BEGIN
        IF reset = '1' THEN
            IF modo_nba = '1' THEN
                conta_min <= 12;
            ELSE
                conta_min <= 10;
            END IF;
        ELSIF rising_edge(clock) THEN
            IF fim_jogo = '0' THEN
                IF carga = '1' AND (EA = "01" OR EA = "11") THEN
                    IF to_integer(unsigned(c_min)) > 12 THEN
                        conta_min <= 12;
                    ELSE
                        conta_min <= to_integer(unsigned(c_min));
                    END IF;
                ELSIF EA = "11" THEN
                    IF modo_novoquarto = '1' THEN
                        IF modo_nba = '1' THEN
                            conta_min <= 12;
                        ELSE
                            conta_min <= 10;
                        END IF;
                    END IF;
                ELSIF EA = "10" THEN
                    IF passou_1min = '1' AND fim_quarto = '0' THEN
                        IF conta_min > 0 THEN
                            conta_min <= conta_min - 1;
                        END IF;
                    END IF;
                END IF;
            END IF;
        END IF;
    END PROCESS;
    minutos <= std_logic_vector(to_unsigned(conta_min, 4));
END behavior;