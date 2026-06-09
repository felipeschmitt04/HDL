LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY fsm IS
    PORT(
        clock: IN std_logic;
        reset: IN std_logic;
        para_continua: IN std_logic;
        modo_novoquarto: IN std_logic;
        fim_jogo: IN std_logic;
        fim_quarto: IN std_logic;
        EA: OUT std_logic_vector(1 DOWNTO 0)
    );
END entity;

ARCHITECTURE behavior OF fsm IS
    TYPE states IS (MODE_SET, IDLE, COUNTING, STOPPED);
    SIGNAL estado_atual, proximo_estado: states;
BEGIN
    PROCESS(clock, reset)
    BEGIN
        IF reset = '1' THEN
            estado_atual <= MODE_SET;
        ELSIF rising_edge(clock) THEN
            estado_atual <= proximo_estado;
        END IF;
    END PROCESS;

    PROCESS(estado_atual, para_continua, fim_quarto, modo_novoquarto, fim_jogo)
    BEGIN
        proximo_estado <= estado_atual;
        CASE estado_atual IS
            WHEN MODE_SET =>
                proximo_estado <= IDLE;
            
            WHEN IDLE =>
                IF para_continua = '1' AND fim_quarto = '0' AND fim_jogo = '0' THEN
                    proximo_estado <= COUNTING;
                END IF;
            
            WHEN COUNTING =>
                IF para_continua = '1' OR fim_quarto = '1' THEN
                    proximo_estado <= STOPPED;
                END IF;

            WHEN STOPPED =>
                IF para_continua = '1' AND fim_quarto = '0' AND fim_jogo = '0' THEN
                    proximo_estado <= COUNTING;
                ELSIF modo_novoquarto = '1' AND fim_jogo = '0' THEN
                    proximo_estado <= IDLE; 
                END IF;
        END CASE;
    END PROCESS;

    WITH estado_atual SELECT
        EA <= "00" WHEN MODE_SET,
              "01" WHEN IDLE,
              "10" WHEN COUNTING,
              "11" WHEN STOPPED,
              "00" WHEN others;

END ARCHITECTURE;