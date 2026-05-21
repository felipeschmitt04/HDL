LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY tb_fsm IS
END ENTITY tb_fsm;

ARCHITECTURE behavior OF tb_fsm IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL carga_btn: std_logic := '0';
    SIGNAL conta_btn: std_logic := '0';
    SIGNAL fim_cont: std_logic := '0';
    SIGNAL carga_out: std_logic;
    SIGNAL conta_out: std_logic;
    SIGNAL led_parado: std_logic;
BEGIN
    UUT: ENTITY work.fsm_cron
        PORT MAP(
            clock => clock,
            reset => reset,
            carga_btn => carga_btn,
            conta_btn => conta_btn,
            fim_cont => fim_cont,
            carga_out => carga_out,
            conta_out => conta_out,
            led_parado => led_parado
        );
    clock_process: PROCESS
    BEGIN
        clock <= '0';
        WAIT FOR 10 ns;
        clock <= '1';
        WAIT FOR 10 ns;
    END PROCESS;
    fsm_process: PROCESS
    BEGIN
        reset <= '1';
        WAIT FOR 40 ns;
        reset <= '0';
        WAIT FOR 40 ns;
        carga_btn <= '1';
        WAIT FOR 20 ns;
        carga_btn <= '0';
        WAIT FOR 60 ns;
        conta_btn <= '1';
        WAIT FOR 20 ns;
        conta_btn <= '0';
        WAIT FOR 60 ns;
        fim_cont <= '1';
        WAIT FOR 20 ns;
        fim_cont <= '0';
        WAIT FOR 60 ns;
        WAIT;
    END PROCESS;
END behavior;