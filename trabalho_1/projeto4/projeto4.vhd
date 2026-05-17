LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY projeto4 IS
    PORT (
        clock, reset, send: IN  std_logic;
        palavra: IN  std_logic_vector(7 downto 0);
        linha, busy: OUT std_logic
    );
END projeto4;

ARCHITECTURE behavior OF projeto4 IS
    TYPE states IS (IDLE, START, TX_DADOS, STOP);
    SIGNAL estado_atual, proximo_estado : states;
    
    SIGNAL contador : INTEGER RANGE 0 TO 7 := 7;
BEGIN

    busy <= '0' WHEN estado_atual = IDLE ELSE '1';

    PROCESS (clock, reset)
    BEGIN
        IF reset = '1' THEN
            estado_atual <= IDLE;
            contador <= 7;
        ELSIF rising_edge(clock) THEN
            estado_atual <= proximo_estado;

            IF estado_atual = TX_DADOS THEN
                IF contador > 0 THEN
                    contador <= contador - 1;
                END IF;
            ELSE
                contador <= 7; 
            END IF;
        END IF;
    END PROCESS;

    PROCESS (estado_atual, send, palavra, contador)
    BEGIN
        linha <= '1'; 
        proximo_estado <= estado_atual;

        CASE estado_atual IS
            WHEN IDLE =>
                linha <= '1'; 
                IF send = '1' THEN
                    proximo_estado <= START;
                END IF;

            WHEN START =>
                linha <= '0'; 
                proximo_estado <= TX_DADOS;

            WHEN TX_DADOS =>
                linha <= palavra(contador); 
                
                IF contador = 0 THEN
                    proximo_estado <= STOP;
                ELSE
                    proximo_estado <= TX_DADOS; 
                END IF;

            WHEN STOP =>
                linha <= '0'; 
                proximo_estado <= IDLE; 

        END CASE;
    END PROCESS;
END behavior;