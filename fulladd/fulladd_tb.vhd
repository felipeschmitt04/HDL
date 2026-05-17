library ieee;
use ieee.std_logic_1164.all;

entity fulladd_tb is
end fulladd_tb;
 
architecture fulladd_tb of fulladd_tb is
    signal A, B, Sum: std_logic_vector(3 downto 0);

begin
    UUT : entity work.fulladd
        port map (A => A, B => B,
                  Sum => Sum);

    A <= x"0", x"5" after 10 ns, x"7" after 20 ns, x"A" after 30 ns; --- Aqui os valores passaram do máximo de bits, e nao tem vai um
    B <= x"b", x"3" after 10 ns, x"15" after 20 ns, x"D" after 30 ns; --- Coloquei 15 aqui pra fazer um experimento social e ele considerou só o "1"

end fulladd_tb;