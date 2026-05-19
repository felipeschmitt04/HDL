LIBRARY ieee;
USE ieee.STD_LOGIC_1164.ALL;

ENTITY cron_dec IS
    GENERIC(CLOCK_FREQ: integer := 25_000_000);
    PORT(
        clock, reset, carga, conta: IN std_logic;
        chaves: IN std_logic_vector(6 DOWNTO 0);
        parado: OUT std_logic;
        an: OUT std_logic_vector(3 DOWNTO 0);
        dec_ddp: OUT std_logic_vector(7 DOWNTO 0)
    );
END ENTITY cron_dec;

ARCHITECTURE cron_dec OF cron_dec IS
    -- Sinais aqui
    type ROM is array (0 to 99) of std_logic_vector (7 downto 0);
    constant conv_to_BCD : ROM:=(
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
        "10010101", "10010110", "10010111", "10011000", "10011001");

    TYPE states IS (IDLE, LOAD, COUNT);
    SIGNAL NST, PST: states;
    SIGNAL ck1seg, carga_out, conta_out, fim_cont: std_logic;
    SIGNAL seg, min, Segundos_BCD, Minutos_BCD: std_logic_vector(7 DOWNTO 0);
    SIGNAL d4, d3, d2, d1: std_logic_vector(5 DOWNTO 0);

BEGIN
    U1: ENTITY work.divisor_clock
        GENERIC MAP(
            CLOCK_FREQ => CLOCK_FREQ
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            ck1seg => ck1seg
        );
    
    U2: ENTITY work.fsm_cron
        PORT MAP(
            clock => clock,
            reset => reset,
            carga_btn => carga,
            conta_btn => conta,
            fim_cont => fim_cont,
            carga_out => carga_out,
            conta_out => conta_out,
            led_parado => parado
        );

    U3: ENTITY work.contador_dec
        PORT MAP(
            clock => clock,
            reset => reset,
            chaves => chaves,
            carga => carga_out,
            conta => conta_out,
            ck1seg => ck1seg,
            seg_out => seg,
            min_out => min
        )

    fim_cont <= '1' WHEN (seg = "00000000" AND min = "00000000") ELSE '0';

    Segundos_BCD <= conv_to_BCD(to_integer(unsigned(seg)));
    Minutos_BCD <= conv_to_BCD(to_integer(unsigned(min)));

    d1 <= '1' & Segundos_BCD(3 DOWNTO 0) & '1';
    d2 <= '1' & Segundos_BCD(7 DOWNTO 4) & '1';
    d3 <= '1' & Minutos_BCD(3 DOWNTO 0) & '0';
    d4 <= '1' & Minutos_BCD(7 DOWNTO 4) & '1';

    display_driver: ENTITY WORK.dspl_drv PORT MAP(

    )