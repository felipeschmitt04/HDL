LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY latch_4inpts IS
	PORT(a, b, c, d: IN STD_LOGIC;
		  out1, out2: OUT STD_LOGIC);
END latch_4inpts;

ARCHITECTURE latch OF latch_4inpts IS
	SIGNAL x1, x2: STD_LOGIC;
	BEGIN
		x1 <= not (a and b and x2);
		x2 <= not (x1 and c and d);
		out1 <= x1;
		out2 <= x2;
END latch;