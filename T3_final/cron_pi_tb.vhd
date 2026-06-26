LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY tb_cron_basq_PI IS
END ENTITY tb_cron_basq_PI;

ARCHITECTURE behavior OF tb_cron_basq_PI IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL para_continua: std_logic := '0';
    SIGNAL modo_novoquarto: std_logic := '0';
    SIGNAL carga: std_logic := '0';
    SIGNAL c_quarto: std_logic_vector(1 DOWNTO 0) := "00";
    SIGNAL c_min: std_logic_vector(3 DOWNTO 0) := "0000";
    SIGNAL c_seg: std_logic_vector(1 DOWNTO 0) := "00";
    SIGNAL quarto: std_logic_vector(1 DOWNTO 0);
    SIGNAL minutos: std_logic_vector(3 DOWNTO 0);
    SIGNAL segundos: std_logic_vector(5 DOWNTO 0);
    SIGNAL centesimos: std_logic_vector(6 DOWNTO 0);

BEGIN
    UUT: ENTITY work.cron_basq_PI
        GENERIC MAP(
            CLOCK_FREQ => 2
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            para_continua => para_continua,
            modo_novoquarto => modo_novoquarto,
            carga => carga,
            c_quarto => c_quarto,
            c_min => c_min,
            c_seg => c_seg,
            quarto => quarto,
            minutos => minutos,
            segundos => segundos,
            centesimos => centesimos
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
        modo_novoquarto <= '0';
        reset <= '1';
        WAIT FOR 40 ns;
        reset <= '0';
        WAIT FOR 100 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 200 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 100 ns;

        c_quarto <= "00";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 300 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        WAIT FOR 100 ns;

        c_quarto <= "11";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 300 ns;

        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 100 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        WAIT FOR 100 ns;

        modo_novoquarto <= '1';
        reset <= '1';
        WAIT FOR 40 ns;
        reset <= '0';
        modo_novoquarto <= '0';
        WAIT FOR 100 ns;

        WAIT;
    END PROCESS;

END behavior;