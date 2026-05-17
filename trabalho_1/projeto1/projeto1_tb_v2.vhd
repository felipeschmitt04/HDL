LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY projeto1_tb_v2 IS
END projeto1_tb_v2;
 
ARCHITECTURE behavior OF projeto1_tb_v2 IS 
   signal in1, in2, in3, in4, sai: std_logic;
   signal ctrl : std_logic_vector(1 downto 0);

BEGIN
   UUT: ENTITY work.prim_proc2 PORT MAP (
          in1 => in1,
          in2 => in2,
          in3 => in3,
          in4 => in4,
          ctrl => ctrl,
          sai => sai
        );

   PROCESS
	BEGIN
		ctrl <= "00";
		in1 <= '0'; in2 <= '0'; in3 <= '0'; in4 <= '0';
		wait for 5 ns;
		in1 <= '1';
		wait for 5 ns;
		ctrl <= "01";
		wait for 5 ns;
		in2 <= '1';
		wait for 5 ns;
		in1 <= '0';
		in2 <='0';
		in3 <= '1';
		wait for 5 ns;
		ctrl <= "10";
		wait for 5 ns;
		in4 <= '1';
		wait for 5 ns;
		ctrl <= "11";
		wait for 5 ns;
		in4 <= '0';
	END PROCESS;
END; 