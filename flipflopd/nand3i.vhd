LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY nand3i IS
	PORT (a, b, c: IN STD_LOGIC;
			out_nand: OUT STD_LOGIC);
END nand3i;

ARCHITECTURE porta_logica OF nand3i IS
	BEGIN
		out_nand <= not(a and b and c);
END porta_logica;