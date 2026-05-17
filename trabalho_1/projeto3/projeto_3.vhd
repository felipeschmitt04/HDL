LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY m17_counter IS
	PORT (
		clk   : IN STD_LOGIC;
		reset : IN STD_LOGIC;
		count : OUT STD_LOGIC_VECTOR(4 downto 0)
	);
END m17_counter;

ARCHITECTURE m17_counter OF m17_counter IS
	SIGNAL int_count : unsigned(4 downto 0) := (OTHERS => '0');
BEGIN
	PROCESS(clk)
	BEGIN
		IF rising_edge(clk) THEN
			IF reset = '1' THEN
				int_count <= (OTHERS => '0');
			ELSE
				IF int_count = 16 THEN
					int_count <= (OTHERS => '0');
				ELSE
					int_count <= int_count + 1;
				END IF;
			END IF;
		END IF;
	END PROCESS;

	count <= std_logic_vector(int_count);
END m17_counter;