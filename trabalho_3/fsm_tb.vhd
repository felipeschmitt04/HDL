LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY tb_fsm IS
END tb_fsm;

ARCHITECTURE behavior OF tb_fsm IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL para_continua: std_logic := '0';
    SIGNAL modo_novoquarto: std_logic := '0';
    SIGNAL fim_jogo: std_logic := '0';
    SIGNAL fim_quarto: std_logic := '0';
    SIGNAL EA: std_logic_vector(1 DOWNTO 0);

BEGIN
    UUT: ENTITY work.fsm
        PORT MAP (
            clock => clock,
            reset => reset,
            para_continua  => para_continua,
            modo_novoquarto => modo_novoquarto,
            fim_jogo => fim_jogo,
            fim_quarto => fim_quarto,
            EA => EA
        );

    clock_process: PROCESS
    BEGIN
        clock <= '0';
        WAIT FOR 10 ns;
        clock <= '1';
        WAIT FOR 10 ns;
    END PROCESS;

    estimulos_process: PROCESS
    BEGIN
        reset <= '1';
        WAIT FOR 40 ns;
        reset <= '0';
        WAIT FOR 40 ns;

        para_continua <= '1';
        WAIT FOR 20 ns; 
        para_continua <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 60 ns;

        fim_quarto <= '1';
        WAIT FOR 40 ns;
        fim_quarto <= '0';
        WAIT FOR 60 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns; 
        para_continua <= '0';
        WAIT FOR 60 ns;

        fim_quarto <= '1';
        fim_jogo <= '1';
        WAIT FOR 40 ns;
        fim_quarto <= '0';
        WAIT FOR 60 ns;

        modo_novoquarto <= '1';
        WAIT FOR 20 ns;
        modo_novoquarto <= '0';
        WAIT FOR 60 ns;

        para_continua <= '1';
        WAIT FOR 20 ns;
        para_continua <= '0';
        WAIT FOR 60 ns;

        WAIT;
    END PROCESS;

END behavior;