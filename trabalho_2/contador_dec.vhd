LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY contador_dec IS
    PORT(
        clock, reset, carga, conta, ck1seg: IN std_logic;
        chaves: IN std_logic_vector(6 DOWNTO 0);
        seg_out: OUT std_logic_vector(7 DOWNTO 0);
        min_out: OUT std_logic_vector(7 DOWNTO 0)
    );
END ENTITY contador_dec;

ARCHITECTURE behavior OF contador_dec IS
    SIGNAL cont_seg: integer RANGE 0 TO 59 := 0;
    SIGNAL cont_min: integer RANGE 0 TO 99 := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            cont_seg <= 0;
            cont_min <= 0;
        ELSIF rising_edge(clock) THEN
            IF carga = '1' THEN
                cont_seg <= 0;
                cont_min <= to_integer(unsigned(chaves));
            ELSIF conta = '1' AND ck1seg = '1' THEN
                IF cont_seg = 0 THEN
                    cont_seg <= 59;
                    IF cont_min > 0 THEN
                        cont_min <= cont_min - 1;
                    END IF;
                ELSE
                    cont_seg <= cont_seg - 1;
                END IF;
            END IF;
        END IF;
    END PROCESS;
    seg_out <= std_logic_vector(to_unsigned(cont_seg, 8));
    min_out <= std_logic_vector(to_unsigned(cont_min, 8));
END behavior;