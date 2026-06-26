LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY top_cron_basq IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        carga: IN std_logic;
        para_continua: IN std_logic;
        modo_novoquarto: IN std_logic;
        c_quarto: IN std_logic_vector(1 DOWNTO 0);
        c_min: IN std_logic_vector(3 DOWNTO 0);
        c_seg: IN std_logic_vector(1 DOWNTO 0);
        led_quarto: OUT std_logic_vector(3 DOWNTO 0);
        led_minutos: OUT std_logic_vector(3 DOWNTO 0);
        an: OUT std_logic_vector(3 DOWNTO 0);
        dec_ddp: OUT std_logic_vector(7 DOWNTO 0)
    );
END ENTITY top_cron_basq;

ARCHITECTURE behavior OF top_cron_basq IS
    TYPE ROM IS ARRAY (0 TO 127) OF std_logic_vector(7 DOWNTO 0);
    CONSTANT conv_to_BCD: ROM := (
        "00000000", "00000001", "00000010", "00000011", "00000100", 
        "00000101", "00000110", "00000111", "00001000", "00001001",
        "00010000", "00010001", "00010010", "00010011", "00010100", 
        "00010101", "00010110", "00010111", "00011000", "00011001",
        "00100000", "00100001", "00100010", "00100011", "00100100", 
        "00100101", "00100110", "00100111", "00101000", "00101001",
        "00110000", "00110001", "00110010", "00110011", "00110100", 
        "00110101", "00110110", "00110111", "00111000", "00111001",
        "01000000", "01000001", "01000010", "01000011", "01000100", 
        "01000101", "01000110", "01000111", "01001000", "01001001",
        "01010000", "01010001", "01010010", "01010011", "01010100", 
        "01010101", "01010110", "01010111", "01011000", "01011001",
        "01100000", "01100001", "01100010", "01100011", "01100100", 
        "01100101", "01100110", "01100111", "01101000", "01101001",
        "01110000", "01110001", "01110010", "01110011", "01110100", 
        "01110101", "01110110", "01110111", "01111000", "01111001",
        "10000000", "10000001", "10000010", "10000011", "10000100",
        "10000101", "10000110", "10000111", "10001000", "10001001",
        "10010000", "10010001", "10010010", "10010011", "10010100",
        "10010101", "10010110", "10010111", "10011000", "10011001",
        "00000000", "00000000", "00000000", "00000000", "00000000",
        "00000000", "00000000", "00000000", "00000000", "00000000",
        "00000000", "00000000", "00000000", "00000000", "00000000",
        "00000000", "00000000", "00000000", "00000000", "00000000",
        "00000000", "00000000", "00000000", "00000000", "00000000",
        "00000000", "00000000", "00000000"
    );

    SIGNAL deb_carga: std_logic;
    SIGNAL deb_para_continua: std_logic;
    SIGNAL deb_modo_novoquarto: std_logic;
    SIGNAL mux_modo_novoquarto: std_logic;
    
    SIGNAL quarto_out: std_logic_vector(1 DOWNTO 0);
    SIGNAL minutos_out: std_logic_vector(3 DOWNTO 0);
    SIGNAL segundos_out: std_logic_vector(5 DOWNTO 0);
    SIGNAL centesimos_out: std_logic_vector(6 DOWNTO 0);
    
    SIGNAL bcd_seg: std_logic_vector(7 DOWNTO 0);
    SIGNAL bcd_cent: std_logic_vector(7 DOWNTO 0);
    
    SIGNAL d0_int: std_logic_vector(5 DOWNTO 0);
    SIGNAL d1_int: std_logic_vector(5 DOWNTO 0);
    SIGNAL d2_int: std_logic_vector(5 DOWNTO 0);
    SIGNAL d3_int: std_logic_vector(5 DOWNTO 0);

BEGIN
    mux_modo_novoquarto <= modo_novoquarto WHEN reset = '1' ELSE deb_modo_novoquarto;
    inst_deb_carga: ENTITY work.Debounce
        PORT MAP(
            clock => clock,
            reset => reset,
            key => carga,
            debkey => deb_carga
        );

    inst_deb_para_continua: ENTITY work.Debounce
        PORT MAP(
            clock => clock,
            reset => reset,
            key => para_continua,
            debkey => deb_para_continua
        );

    inst_deb_modo_novoquarto: ENTITY work.Debounce
        PORT MAP(
            clock => clock,
            reset => reset,
            key => modo_novoquarto,
            debkey => deb_modo_novoquarto
        );

    inst_cron_pi: ENTITY work.cron_basq_PI
        PORT MAP(
            clock => clock,
            reset => reset,
            para_continua => deb_para_continua,
            modo_novoquarto => mux_modo_novoquarto,
            carga => deb_carga,
            c_quarto => c_quarto,
            c_min => c_min,
            c_seg => c_seg,
            quarto => quarto_out,
            minutos => minutos_out,
            segundos => segundos_out,
            centesimos => centesimos_out
        );

    inst_dspl_drv: ENTITY work.dspl_drv
        PORT MAP(
            clock => clock,
            reset => reset,
            d3 => d3_int,
            d2 => d2_int,
            d1 => d1_int,
            d0 => d0_int,
            an => an,
            dec_ddp => dec_ddp
        );

    bcd_seg <= conv_to_BCD(to_integer(unsigned(segundos_out)));
    bcd_cent <= conv_to_BCD(to_integer(unsigned(centesimos_out)));

    d3_int <= '1' & bcd_seg(7 DOWNTO 4) & '1';
    d2_int <= '1' & bcd_seg(3 DOWNTO 0) & '0';
    d1_int <= '1' & bcd_cent(7 DOWNTO 4) & '1';
    d0_int <= '1' & bcd_cent(3 DOWNTO 0) & '1';

    WITH quarto_out SELECT
        led_quarto <= "0001" WHEN "00",
                      "0010" WHEN "01",
                      "0100" WHEN "10",
                      "1000" WHEN "11",
                      "0000" WHEN others;
    
    led_minutos <= minutos_out;

END behavior;