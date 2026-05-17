----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Felipe Luan Schmitt 
-- 
-- Create Date:    14:20:03 04/02/2026 
-- Design Name: 
-- Module Name:    top_somador_display - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top_somador_display is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           clock : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           carry : out  STD_LOGIC;
           an : out  STD_LOGIC_VECTOR (3 downto 0);
           dec_ddp : out  STD_LOGIC_VECTOR (7 downto 0));
end top_somador_display;

architecture top_somador_display of top_somador_display is
	signal sum: std_logic_vector(4 downto 0);
	signal d3, d2, d1, d0: std_logic_vector(5 downto 0);

	begin

		inst_som4_vum: entity work.fulladd
			 port map(A=>A, B=>B, Sum=>Sum);
			 
		inst_display: entity work.dspl_drv
			port map(
				clock=>clock,
				reset=>reset,
				d3=>d3,
				d2=>d2,
				d1=>d1,
				d0=>d0,
				an=>an,
				dec_ddp=>dec_ddp
			);

		carry <= Sum(4);
		d3 <= '1' & Sum(3 downto 0) & '1';
		d2 <= "000000";
		d1 <= '1' & B & '1';
		d0 <= '1' & A & '1';

end top_somador_display;

