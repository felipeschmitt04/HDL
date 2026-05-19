LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY divisor_clock IS
    GENERIC(
        CLOCK_FREQ: integer := 50000000
    );
    PORT(
        clock, reset: IN std_logic;
        ck1seg: OUT std_logic
    );
END ENTITY divisor_clock;

ARCHITECTURE behavior OF divisor_clock IS
    SIGNAL contador: integer RANGE 0 TO CLOCK_FREQ := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            contador <= 0;
            ck1seg <= '0';
        ELSIF rising_edge(clock) THEN
            IF contador = (CLOCK_FREQ - 1) THEN
                contador <= 0;
                ck1seg <= '1';
            ELSE
                contador <= contador + 1;
                ck1seg <= '0';
            END IF;
        END IF;
    END PROCESS;
END behavior;