LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY fsm_cron IS
    PORT(
        clock, reset, carga_btn, conta_btn, fim_cont: IN std_logic;
        carga_out, conta_out, led_parado: OUT std_logic
    );
END ENTITY fsm_cron;

ARCHITECTURE behavior OF cron_dec IS
    TYPE states IS (IDLE, LOAD, COUNT);
    SIGNAL estado_atual, proximo_estado: states;
BEGIN
    PROCESS (clock, reset)
    BEGIN
        IF reset = '1' THEN
            estado_atual <= IDLE;
            led_parado <= '0';
        ELSIF rising_edge(clock) THEN
            estado_atual <= proximo_estado;
            IF proximo_estado = LOAD THEN
                led_parado <= '0';
            ELSIF estado_atual = COUNT AND proximo_estado = IDLE THEN
                led_parado <= '1';
            END IF;
        END IF;
    END PROCESS;

    PROCESS (estado_atual, carga_btn, conta_btn, fim_cont)
    BEGIN
        proximo_estado <= estado_atual;
        carga_out <= '0';
        conta_out <= '0';
        led_parado <= '0';
        CASE estado_atual IS
            WHEN IDLE => 
                IF carga_btn = '1' THEN
                    proximo_estado <= LOAD;
                END IF;
            WHEN LOAD =>
                carga_out <= '1';
                IF conta_btn = '1' THEN
                    proximo_estado <= COUNT;
                END IF;
            WHEN COUNT =>
                conta_out <= '1';
                IF fim_cont = '1' THEN
                    proximo_estado <= IDLE
                END IF;
        END CASE;
    END PROCESS;
END behavior;