LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY transmissor_tb IS
END transmissor_tb;

ARCHITECTURE transmissor_tb OF transmissor_tb IS
    SIGNAL busy, linha, reset, send: std_logic;
    SIGNAL clock: std_logic := '0';
    SIGNAL palavra: std_logic_vector(7 DOWNTO 0);
BEGIN
    uut: ENTITY WORK.projeto4 PORT MAP (
        clock => clock,
        reset => reset,
        send => send,
        palavra => palavra,
        busy => busy,
        linha => linha
    );

    PROCESS
    BEGIN
        clock <= '1'after 10 ns, '0' after 20 ns;
        wait for 20 ns;
    END PROCESS;
    
    reset <= '1', '0' after 3 ns, '1' after 240 ns, '0' after 243 ns;
    send <= '0', '1' after 23 ns, '0' after 50 ns, '1' after 240 ns, '0' after 280 ns;
    palavra <= "11010001", "00100110" after 150 ns;

END transmissor_tb;