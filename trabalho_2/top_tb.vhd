LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY tb_cron_dec IS
END ENTITY tb_cron_dec;

ARCHITECTURE tb_cron_dec OF tb_cron_dec IS
    SIGNAL clock: std_logic := '1';
    SIGNAL reset, carga, conta, parado: std_logic;
    SIGNAL chaves: std_logic_vector(6 DOWNTO 0);
BEGIN
    clock <= NOT clock AFTER 10 ns;
    reset <= '1', '0' AFTER 73 ns;
    carga <= '0', '1' AFTER 133 ns, '0' AFTER 425 ns;
    conta <= '0', '1' AFTER 543 ns, '0' AFTER 925 ns;
    chaves <= "0000101";

    UUT: ENTITY work.cron_dec
        GENERIC MAP(
            CLOCK_FREQ => 4
        )
        PORT MAP(
            clock => clock,
            reset => reset,
            carga => carga,
            conta => conta,
            chaves => chaves,
            parado => parado,
            an => open,
            dec_ddp => open
        );
END tb_cron_dec;