LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY divisor_clock IS
    GENERIC(
        CLOCK_FREQ: integer := 500000
    );
    PORT(
        clock, reset: IN std_logic;
        passou_1cen: OUT std_logic
    );
END ENTITY divisor_clock;

ARCHITECTURE behavior OF divisor_clock IS
    SIGNAL contador: integer RANGE 0 TO CLOCK_FREQ := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            contador <= 0;
            passou_1cen <= '0';
        ELSIF rising_edge(clock) THEN
            IF contador = (CLOCK_FREQ - 1) THEN
                contador <= 0;
                passou_1cen <= '1';
            ELSE
                contador <= contador + 1;
                passou_1cen <= '0';
            END IF;
        END IF;
    END PROCESS;
END behavior;