LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cont_quarto IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        EA: IN std_logic_vector(1 DOWNTO 0);
        carga: IN std_logic;
        modo_novoquarto: IN std_logic;
        c_quarto: IN std_logic_vector(1 DOWNTO 0);
        quarto: OUT std_logic_vector(1 DOWNTO 0);
        fim_jogo: OUT std_logic
    );
END ENTITY cont_quarto;

ARCHITECTURE behavior OF cont_quarto IS
    SIGNAL conta_quarto: integer RANGE 0 TO 3 := 0;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            conta_quarto <= 0;
            fim_jogo <= '0';
        ELSIF rising_edge(clock) THEN
            IF EA = "11" THEN
                IF modo_novoquarto = '1' THEN
                    IF conta_quarto < 3 THEN
                        conta_quarto <= conta_quarto + 1;
                    ELSIF conta_quarto = 3 THEN
                        fim_jogo <= '1';
						  END IF;
                ELSIF carga = '1' THEN
                    conta_quarto <= to_integer(unsigned(c_quarto));
                END IF;
				 END IF;
        END IF;
    END PROCESS;
    quarto <= std_logic_vector(to_unsigned(conta_quarto, 2));
END behavior;