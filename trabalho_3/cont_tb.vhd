LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY tb_cont IS
END ENTITY tb_cont;

ARCHITECTURE behavior OF tb_cont IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL fim_quarto: std_logic := '0';
    SIGNAL fim_jogo: std_logic := '0';
    SIGNAL EA: std_logic_vector(1 DOWNTO 0) := "00";
    SIGNAL modo_novoquarto: std_logic := '0';
    SIGNAL modo_nba: std_logic := '0';
    SIGNAL passou_1cent: std_logic := '0';
    SIGNAL passou_1seg: std_logic := '0';
    SIGNAL passou_1min: std_logic := '0';
    SIGNAL carga: std_logic := '0';
    SIGNAL c_seg: std_logic_vector(1 DOWNTO 0) := std_logic_vector(to_unsigned(0, 2));
    SIGNAL c_min: std_logic_vector(3 DOWNTO 0) := std_logic_vector(to_unsigned(0, 4));
    SIGNAL c_quarto: std_logic_vector(1 DOWNTO 0) := std_logic_vector(to_unsigned(0, 2));
    SIGNAL centesimos: std_logic_vector(6 DOWNTO 0) := std_logic_vector(to_unsigned(0, 7));
    SIGNAL segundos: std_logic_vector(5 DOWNTO 0) := std_logic_vector(to_unsigned(0, 6));
    SIGNAL minutos: std_logic_vector(3 DOWNTO 0) := std_logic_vector(to_unsigned(0, 4));
    SIGNAL quarto: std_logic_vector(1 DOWNTO 0) := std_logic_vector(to_unsigned(0, 2));

BEGIN
    UUT1_divisor_clk: ENTITY work.divisor_clock
        GENERIC MAP(
            CLOCK_FREQ => 4
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            passou_1cent => passou_1cent
        );
    
    UUT2_cont_cent: ENTITY work.cont_cent
        PORT MAP(
            clock => clock,
            reset => reset,
            fim_quarto => fim_quarto,
            EA => EA,
            passou_1cent => passou_1cent,
			modo_novoquarto => modo_novoquarto,
            carga => carga,
            centesimos => centesimos,
            passou_1seg => passou_1seg
        );

    UUT3_cont_seg: ENTITY work.cont_seg
        PORT MAP(
            clock => clock,
            reset => reset,
            fim_quarto => fim_quarto,
            EA => EA,
            passou_1seg => passou_1seg,
			modo_novoquarto => modo_novoquarto,
            carga => carga,
            c_seg => c_seg,
            segundos => segundos,
            passou_1min => passou_1min
        );
    
    UUT4_cont_min: ENTITY work.cont_min
        PORT MAP(
            clock => clock,
            reset => reset,
            EA => EA,
            passou_1min => passou_1min,
            modo_novoquarto => modo_novoquarto,
            modo_nba => modo_nba,
            carga => carga,
            c_min => c_min,
            minutos => minutos,
            fim_quarto => fim_quarto
        );

    UUT5_cont_quarto: ENTITY work.cont_quarto
        PORT MAP(
            clock => clock,
            reset => reset,
            EA => EA,
            carga => carga,
            modo_novoquarto => modo_novoquarto,
            c_quarto => c_quarto,
            quarto => quarto,
            fim_jogo => fim_jogo
        );

    fim_quarto <= '1' WHEN (minutos = "0000" AND segundos = "000000" AND centesimos = "0000000") ELSE '0';

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
        EA <= "00";
        modo_nba <= '0';
        WAIT FOR 40 ns;

        reset <= '0';
        EA <= "01";
        WAIT FOR 100 ns;

        EA <= "10";
        WAIT FOR 400 ns;

        EA <= "11";
        WAIT FOR 60 ns;

        c_quarto <= "00";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        EA <= "10";
        WAIT FOR 20 ns;
        EA <= "11";
        WAIT FOR 100 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        EA <= "01";
        WAIT FOR 100 ns;

        c_quarto <= "01";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        EA <= "10";
        WAIT FOR 20 ns;
        EA <= "11";
        WAIT FOR 100 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        EA <= "01";
        WAIT FOR 100 ns;

        c_quarto <= "10";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        EA <= "10";
        WAIT FOR 20 ns;
        EA <= "11";
        WAIT FOR 100 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        EA <= "01";
        WAIT FOR 100 ns;

        c_quarto <= "11";
        c_min <= std_logic_vector(to_unsigned(0, 4));
        c_seg <= "00";
        carga <= '1';
        WAIT FOR 20 ns;
        carga <= '0';
        WAIT FOR 60 ns;

        EA <= "10";
        WAIT FOR 20 ns;
        EA <= "11";
        WAIT FOR 200 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        WAIT FOR 200 ns;

        WAIT;
    END PROCESS;

END behavior;