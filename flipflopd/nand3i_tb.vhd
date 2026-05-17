LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY nand3i_tb IS
END nand3i_tb;

ARCHITECTURE nand3i_tb OF nand3i_tb IS
	SIGNAL pre, q, nq, clr, d: STD_LOGIC;
	SIGNAL clk: STD_LOGIC := '0';
	
	BEGIN
		UUT: ENTITY work.flipflopd(nand3i) PORT MAP (
			pre => pre,
			q => q,
			nq => nq,
			clr => clr,
			d => d,
			clk => clk);
			
		clk <= not clk after 10 ns;
		clr <= '0', '1' after 8 ns;
		d <= '0', '1' after 25 ns, '0' after 35 ns;
		pre <= '1', '0' after 55 ns;
		
END nand3i_tb;