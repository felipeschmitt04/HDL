
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY projeto2_fg_tb IS
END projeto2_fg_tb;
 
ARCHITECTURE behavior OF projeto2_fg_tb IS 
   signal input : std_logic_vector(1 downto 0) := (others => '0');

   signal output : std_logic_vector(3 downto 0);

BEGIN
 
   UUT: ENTITY work.n_bit_d(for_generate) PORT MAP (
          input => input,
          output => output
        );
	input <= "01" after 10 ns, "10" after 20 ns, "11" after 30 ns;

END;
