LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY flipflopd IS
	PORT (d, pre, clr, clk: IN STD_LOGIC;
			q, nq: OUT STD_LOGIC);
END flipflopd;

ARCHITECTURE flat OF flipflopd IS
	SIGNAL n1, n2, n3, n4, n5, n6: STD_LOGIC;
	BEGIN
		n1 <= not (pre and n4 and n2);
		n2 <= not (n1 and clr and clk);
		n3 <= not (n2 and clk and n4);
		n4 <= not (n3 and clr and d);
		n5 <= not (pre and n2 and n6);
		n6 <= not (n5 and clr and n3);
		
		q <= n5;
		nq <= n6;
END flat;

ARCHITECTURE nand3i OF flipflopd IS
	COMPONENT nand3i IS
		PORT (a, b, c: IN STD_LOGIC;
				out_nand: OUT STD_LOGIC);
	END COMPONENT;
	SIGNAL n1, n2, n3, n4, n5, n6: STD_LOGIC;
	BEGIN
		porta_nand_1: nand3i PORT MAP(
			a => pre,
			b => n4,
			c => n2,
			out_nand => n1);
		porta_nand_2: nand3i PORT MAP(
			a => n1,
			b => clr,
			c => clk,
			out_nand => n2);
		porta_nand_3: nand3i PORT MAP(
			a => n2,
			b => clk,
			c => n4,
			out_nand => n3);
		porta_nand_4: nand3i PORT MAP(
			a => n3,
			b => clr,
			c => d,
			out_nand => n4);
		porta_nand_5: nand3i PORT MAP(
			a => pre,
			b => n2,
			c => n6,
			out_nand => n5);
		porta_nand_6: nand3i PORT MAP(
			a => n5,
			b => clr,
			c => n3,
			out_nand => n6);
		q <= n5;
		nq <= n6;
END nand3i;
			
ARCHITECTURE latch_4inpts OF flipflopd IS
	COMPONENT latch_4inpts IS
		PORT (a, b, c, d: IN STD_LOGIC;
				out1, out2: OUT STD_LOGIC);
	END COMPONENT;
	SIGNAL x1, x2, x3, x4, lq, lnq: STD_LOGIC;
	BEGIN
		latch_1: latch_4inpts PORT MAP(
			a => pre,
			b => x4,
			c => clr,
			d => clk,
			out1 => x1,
			out2 => x2);
		latch_2: latch_4inpts PORT MAP(
			a => x2,
			b => clk,
			c => clr,
			d => d,
			out1 => x3,
			out2 => x4);
		latch_3: latch_4inpts PORT MAP(
			a => pre,
			b => x2,
			c => clr,
			d => x3,
			out1 => lq,
			out2 => lnq);
		q <= lq;
		nq <= lnq;
END latch_4inpts;
			
	