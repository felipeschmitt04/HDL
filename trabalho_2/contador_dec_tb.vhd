LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY tb_contador IS
END ENTITY tb_contador;

ARCHITECTURE behavior OF tb_contador IS
    SIGNAL clock: std_logic := '0';
    SIGNAL reset: std_logic := '0';
    SIGNAL carga: std_logic := '0';
    SIGNAL conta: std_logic := '0';
    SIGNAL ck1seg: std_logic := '0';
    SIGNAL chaves: std_logic_vector(6 DOWNTO 0) := (others => '0');
    SIGNAL seg_out: std_logic_vector(7 DOWNTO 0);
    SIGNAL min_out: std_logic_vector(7 DOWNTO 0);
BEGIN
    UUT: ENTITY work.contador_dec
        PORT MAP(
            clock => clock,
            reset => reset,
            carga => carga,
            conta => conta,
            ck1seg => ck1seg,
            chaves => chaves,
            seg_out => seg_out,
            min_out => min_out
        );
    clock_process: PROCESS
    BEGIN
        clock <= '0';
        WAIT FOR 10 ns;
        clock <= '1';
        WAIT FOR 10 ns;
    END PROCESS;
    estimulos: PROCESS
    BEGIN
        reset <= '1';
        WAIT FOR 40 ns;
        reset <= '0';
        WAIT FOR 40 ns;
        chaves <= "0000010"; 
        carga <= '1';
        WAIT FOR 40 ns;
        carga <= '0';
        WAIT FOR 40 ns;
        conta <= '1';
        FOR i IN 1 TO 3 LOOP
            WAIT FOR 60 ns;
            ck1seg <= '1';
            WAIT FOR 20 ns;
            ck1seg <= '0';
        END LOOP;
        conta <= '0';
        WAIT; 
    END PROCESS;
END behavior;