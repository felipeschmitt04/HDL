LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY flat_tb IS
END flat_tb;

ARCHITECTURE flat_tb OF flat_tb IS
	SIGNAL pre, clr, d, q, nq: STD_LOGIC;
	SIGNAL clk: STD_LOGIC := '0';
	
	BEGIN
		UUT: entity work.flipflopd(flat) PORT MAP(
			pre => pre,
			clr => clr,
			clk => clk,
			d => d,
			q => q,
			nq => nq);
			
		clock: process
		begin
			clk <= '0';
			wait for 10 ns;
			clk <= '1';
			wait for 10 ns;
		end process;
		
		inputs: process
		begin
			--- RESET
			clr <= '0';
			pre <= '1';
			d <= '0';
			wait for 25 ns;
			
			clr <= '1';
			wait for 10 ns;
			
			d <= '1';
			wait for 40 ns;
			
			clr <= '0';
			wait for 10 ns;
			
			clr <= '1';
			pre <= '0';
			wait for 10 ns;
			
			pre <= '1';
			wait;
		end process;
		
END flat_tb;