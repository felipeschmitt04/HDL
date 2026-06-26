LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY tb_top_cron_basq IS
END ENTITY tb_top_cron_basq;

ARCHITECTURE behavior OF tb_top_cron_basq IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL carga: std_logic := '0';
    SIGNAL para_continua: std_logic := '0';
    SIGNAL modo_novoquarto: std_logic := '0';
    SIGNAL c_quarto: std_logic_vector(1 DOWNTO 0) := "00";
    SIGNAL c_min: std_logic_vector(3 DOWNTO 0) := "0000";
    SIGNAL c_seg: std_logic_vector(1 DOWNTO 0) := "00";
    
    SIGNAL led_quarto: std_logic_vector(3 DOWNTO 0);
    SIGNAL an: std_logic_vector(3 DOWNTO 0);
    SIGNAL dec_ddp: std_logic_vector(7 DOWNTO 0);

BEGIN
    UUT: ENTITY work.top_cron_basq
        PORT MAP(
            clock => clock,
            reset => reset,
            carga => carga,
            para_continua => para_continua,
            modo_novoquarto => modo_novoquarto,
            c_quarto => c_quarto,
            c_min => c_min,
            c_seg => c_seg,
            led_quarto => led_quarto,
            an => an,
            dec_ddp => dec_ddp
        );

    clock_process: PROCESS
    BEGIN
        clock <= '0';
        WAIT FOR 10 ns;
        clock <= '1';
        WAIT FOR 10 ns;
    END PROCESS;

    tb_process: PROCESS
    BEGIN
        reset <= '1';
        modo_novoquarto <= '0';
        WAIT FOR 100 ns;
        reset <= '0';
        WAIT FOR 200 ns;

        para_continua <= '1';
        WAIT FOR 100 ns;
        para_continua <= '0';
        WAIT FOR 500 ns;

        para_continua <= '1';
        WAIT FOR 100 ns;
        para_continua <= '0';
        WAIT FOR 200 ns;

        c_quarto <= "01";
        c_min <= std_logic_vector(to_unsigned(5, 4));
        c_seg <= "10";
        carga <= '1';
        WAIT FOR 100 ns;
        carga <= '0';
        WAIT FOR 200 ns;

        para_continua <= '1';
        WAIT FOR 100 ns;
        para_continua <= '0';
        WAIT FOR 500 ns;

        para_continua <= '1';
        WAIT FOR 100 ns;
        para_continua <= '0';
        WAIT FOR 200 ns;

        modo_novoquarto <= '1';
        WAIT FOR 100 ns;
        modo_novoquarto <= '0';
        WAIT FOR 300 ns;

        reset <= '1';
        WAIT FOR 100 ns;
        reset <= '0';
        WAIT FOR 200 ns;

        WAIT;
    END PROCESS;

END behavior;