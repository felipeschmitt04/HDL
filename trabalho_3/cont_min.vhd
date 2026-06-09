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
        modo_nba: std_logic;
        carga: IN std_logic;
        c_min: IN std_logic_vector(3 DOWNTO 0);
        minutos: OUT std_logic_vector(3 DOWNTO 0);
        fim_quarto: OUT std_logic;
    );
END ENTITY cont_min;

ARCHITECTURE behavior OF cont_min IS
    SIGNAL conta_min: integer RANGE 0 TO 12 := 12;
    SIGNAL tempo_modo: integer RANGE 0 TO 12 := 12;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            IF modo_nba = '1' THEN
                tempo_modo <= 12;
            ELSE
                tempo_modo <= 10;
            END IF;
            conta_min <= tempo_modo;
            fim_quarto <= '0';
        ELSIF rising_edge(clock) THEN
            IF EA = "10" THEN
                IF passou_1min = '1' AND fim_quarto = '0' THEN
                    IF conta_min = 0 THEN
                        fim_quarto <= '1';
                    ELSE
                        conta_min <= conta_min - 1;
                        fim_quarto <= '0';
                    END IF;
            ELSIF EA = "11" THEN
                IF carga = '1' THEN
                    conta_min <= to_integer(unsigned(c_min));
                ELSIF modo_novoquarto = '1' THEN
                    conta_min <= tempo_modo;
                    fim_quarto <= '0';
                END IF;
            ELSE
                conta_min <= tempo_modo;
                fim_quarto <= '0';
            END IF;
        END IF;
    END PROCESS;
    minutos <= std_logic_vector(to_unsigned(conta_min, 4));
END behavior;