LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cont_1cent IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        fim_quarto: IN std_logic;
        EA: IN std_logic_vector(1 DOWNTO 0);
        passou_1cent: IN std_logic;
        carga: IN std_logic;
        centesimos: OUT std_logic_vector(6 DOWNTO 0);
        passou_1seg: OUT std_logic
    );
END ENTITY cont_1cent;

ARCHITECTURE behavior OF cont_1cent IS
    SIGNAL conta_cent: integer RANGE 0 TO 99 := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            conta_cent <= 0;
            passou_1seg <= '0';
        ELSIF rising_edge(clock) THEN
            IF EA = "10" THEN
                IF passou_1cent = '1' AND fim_quarto = '0' THEN
                    IF conta_cent = 0 THEN
                        conta_cent <= 99;
                        passou_1seg <= '1';
                    ELSE
                        conta_cent <= conta_cent - 1;
                        passou_1seg <= '0';
                    END IF;
                ELSIF fim_quarto = '1' THEN
                    conta_cent <= 0;
                    passou_1seg <= '0';
                END IF;
            ELSE
                conta_cent <= 0;
                passou_1seg <= '0';
            END IF;
        END IF;
    END PROCESS;
    centesimos <= std_logic_vector(to_unsigned(conta_cent, 7));
END behavior;