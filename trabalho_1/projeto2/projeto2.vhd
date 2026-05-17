library ieee;
USE ieee.std_logic_1164.ALL;
USE IEEE.numeric_std.ALL;

ENTITY n_bit_d IS
	generic (N: integer:= 2);
	PORT (input: IN std_logic_vector (N-1 DOWNTO 0);
		  output: OUT std_logic_vector ((2**N)-1 DOWNTO 0));
END ENTITY n_bit_d;

ARCHITECTURE n_bit_d OF n_bit_d IS
	BEGIN
		PROCESS (input)
			VARIABLE int_input: integer;
			BEGIN
				output <= (OTHERS => '0');
				int_input := to_integer(unsigned(input));
				output(int_input) <= '1';
		END PROCESS;
END ARCHITECTURE n_bit_d;

ARCHITECTURE for_generate OF n_bit_d IS
	BEGIN
		fg1: FOR i IN 0 TO (2**N)-1 GENERATE
			output(i) <= '1' when to_integer(unsigned(input)) = i else '0';
		END GENERATE fg1;
END ARCHITECTURE for_generate;