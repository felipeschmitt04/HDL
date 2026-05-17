library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;

entity fulladd is
    port (A, B: in std_logic_vector(3 downto 0);
    Sum: out std_logic_vector(4 downto 0);
	 vai_um: out std_logic);
end fulladd;

architecture fulladd of fulladd is
  signal AA, BB: std_logic_vector(4 downto 0);
begin
  Sum <= AA + BB;
  AA <= '0' & A;
  BB <= '0' & B;
end fulladd;