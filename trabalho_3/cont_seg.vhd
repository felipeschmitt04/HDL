LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cont_seg IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        fim_quarto: IN std_logic;
        EA: IN std_logic_vector(1 DOWNTO 0);
        passou_1seg: IN std_logic;
        carga: IN std_logic;
        c_seg: IN std_logic_vector(1 DOWNTO 0);
        segundos: OUT std_logic_vector(5 DOWNTO 0);
        passou_1min: OUT std_logic
    );
END ENTITY cont_seg;

ARCHITECTURE behavior OF cont_seg IS
    SIGNAL conta_seg: integer RANGE 0 TO 59 := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            conta_seg <= 0;
            passou_1min <= '0';
        ELSIF rising_edge(clock) THEN
            IF EA = "10" THEN
                IF passou_1seg = '1' AND fim_quarto = '0' THEN
                    IF conta_seg = 0 THEN
                        conta_seg <= 59;
                        passou_1min <= '1';
                    ELSE
                        conta_seg <= conta_seg - 1;
                        passou_1min <= '0';
                    END IF;
                ELSIF fim_quarto = '1' THEN
                    conta_seg <= 0;
                    passou_1min <= '0';
                END IF;
            ELSIF EA = "11" THEN
                IF carga = "1" THEN
                    IF c_seg = "00" THEN
                        conta_seg <= 0;
                    ELSIF c_seg = "01" THEN
                        conta_seg <= 15;
                    ELSIF conta_seg = "10" THEN
                        conta_seg <= 30;
                    ELSIF conta_seg = "11" THEN
                        conta_seg <= 45;
                    END IF;
                ELSIF modo_novoquarto = "1" THEN
                    conta_seg <= 0;
                    passou_1min <= '0';
                END IF;
            ELSE
                conta_seg <= 0;
                passou_1min <= '0';
            END IF;
        END IF;
    END PROCESS;
    segundos <= std_logic_vector(to_unsigned(conta_seg, 6));
END behavior;