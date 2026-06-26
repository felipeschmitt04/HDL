LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY tb_divisor_clock IS
END ENTITY tb_divisor_clock;

ARCHITECTURE behavior OF tb_divisor_clock IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL passou_1cent: std_logic;
BEGIN
    UUT: ENTITY work.divisor_clock
        GENERIC MAP(
            CLOCK_FREQ => 4
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            passou_1cent => passou_1cent
        );
    clock_process: PROCESS
    BEGIN
        clock <= '0';
        WAIT FOR 10 ns;
        clock <= '1';
        WAIT FOR 10 ns;
    END PROCESS;
    reset_process: PROCESS
    BEGIN
        reset <= '1';
        WAIT FOR 40 ns; 
        reset <= '0';
        WAIT; 
    END PROCESS;
END behavior;