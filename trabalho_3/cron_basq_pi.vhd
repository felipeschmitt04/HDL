LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cron_basq_PI IS
    GENERIC(
        CLOCK_FREQ: integer := 500000
    );
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        para_continua: IN std_logic;
        modo_novoquarto: IN std_logic;
        carga: IN std_logic;
        c_quarto: IN std_logic_vector(1 DOWNTO 0);
        c_min: IN std_logic_vector(3 DOWNTO 0);
        c_seg: IN std_logic_vector(1 DOWNTO 0);
        quarto: OUT std_logic_vector(1 DOWNTO 0);
        minutos: OUT std_logic_vector(3 DOWNTO 0);
        segundos: OUT std_logic_vector(5 DOWNTO 0);
        centesimos: OUT std_logic_vector(6 DOWNTO 0)
    );
END ENTITY cron_basq_PI;

ARCHITECTURE behavior OF cron_basq_PI IS
    SIGNAL fim_quarto: std_logic := '0';
    SIGNAL fim_jogo: std_logic := '0';
    SIGNAL EA: std_logic_vector(1 DOWNTO 0) := "00";
    SIGNAL modo_nba: std_logic := '0';
    SIGNAL passou_1cent: std_logic := '0';
    SIGNAL passou_1seg: std_logic := '0';
    SIGNAL passou_1min: std_logic := '0';
    
    SIGNAL centesimos_int: std_logic_vector(6 DOWNTO 0);
    SIGNAL segundos_int: std_logic_vector(5 DOWNTO 0);
    SIGNAL minutos_int: std_logic_vector(3 DOWNTO 0);
    SIGNAL quarto_int: std_logic_vector(1 DOWNTO 0);

BEGIN

    process_modo: PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            modo_nba <= modo_novoquarto;
        END IF;
    END PROCESS;

    inst_fsm: ENTITY work.fsm
        PORT MAP(
            clock => clock,
            reset => reset,
            para_continua => para_continua,
            modo_novoquarto => modo_novoquarto,
            fim_jogo => fim_jogo,
            fim_quarto => fim_quarto,
            EA => EA
        );

    inst_divisor_clk: ENTITY work.divisor_clock
        GENERIC MAP(
            CLOCK_FREQ => CLOCK_FREQ
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            passou_1cent => passou_1cent
        );
    
    inst_cont_cent: ENTITY work.cont_cent
        PORT MAP(
            clock => clock,
            reset => reset,
            fim_quarto => fim_quarto,
            EA => EA,
            passou_1cent => passou_1cent,
            modo_novoquarto => modo_novoquarto,
            carga => carga,
            centesimos => centesimos_int,
            passou_1seg => passou_1seg,
            fim_jogo => fim_jogo
        );

    inst_cont_seg: ENTITY work.cont_seg
        PORT MAP(
            clock => clock,
            reset => reset,
            fim_quarto => fim_quarto,
            EA => EA,
            passou_1seg => passou_1seg,
            modo_novoquarto => modo_novoquarto,
            carga => carga,
            c_seg => c_seg,
            segundos => segundos_int,
            passou_1min => passou_1min,
            fim_jogo => fim_jogo
        );
    
    inst_cont_min: ENTITY work.cont_min
        PORT MAP(
            clock => clock,
            reset => reset,
            EA => EA,
            passou_1min => passou_1min,
            modo_novoquarto => modo_novoquarto,
            modo_nba => modo_nba,
            carga => carga,
            c_min => c_min,
            minutos => minutos_int,
            fim_quarto => fim_quarto,
            fim_jogo => fim_jogo
        );

    inst_cont_quarto: ENTITY work.cont_quarto
        PORT MAP(
            clock => clock,
            reset => reset,
            EA => EA,
            carga => carga,
            modo_novoquarto => modo_novoquarto,
            c_quarto => c_quarto,
            quarto => quarto_int,
            fim_jogo => fim_jogo
        );

    fim_quarto <= '1' WHEN (minutos_int = "0000" AND segundos_int = "000000" AND centesimos_int = "0000000") ELSE '0';
    
    fim_jogo <= '1' WHEN (quarto_int = "11" AND fim_quarto = '1') ELSE '0';

    quarto <= quarto_int;
    minutos <= minutos_int;
    segundos <= segundos_int;
    centesimos <= centesimos_int;

END behavior;