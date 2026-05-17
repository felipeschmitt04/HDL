LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY projeto3_tb_as IS
END projeto3_tb_as;

ARCHITECTURE projeto3_tb_as OF projeto3_tb_as IS
    SIGNAL clk: std_logic := '0';
    SIGNAL reset: std_logic;
    SIGNAL count: std_logic_vector(4 DOWNTO 0);

BEGIN
    UUT: ENTITY work.m17_counter_as PORT MAP (
        clk => clk,
        reset => reset,
        count => count
    );

    clk <= not clk after 10 ns;
    reset <= '1', '0' after 5 ns, '1' after 12 ns, '0' after 13 ns;

END ARCHITECTURE projeto3_tb_as;