#include <stdio.h>
#include "pico/stdlib.h"

// Definição dos pinos
#define PIR_PIN 20  // Pino do sensor PIR
#define BUZZER_PIN 4  // Pino do buzzer

int main() {
    stdio_init_all(); /

    
    gpio_init(PIR_PIN); // Configura os pinos
    gpio_set_dir(PIR_PIN, GPIO_IN); // Pino do PIR como entrada
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT); // Pino do buzzer como saída

    printf("Sistema de Alarme com Sensor PIR e Buzzer\n");

    while (1) {
        if (gpio_get(PIR_PIN)) { // Se o PIR detectar movimento
            printf("Movimento detectado!\n");
            gpio_put(BUZZER_PIN, 1); // Liga o buzzer
            sleep_ms(1000); // Mantém o buzzer ligado por 1 segundo
        } else {
            gpio_put(BUZZER_PIN, 0); // Desliga o buzzer
        }

        sleep_ms(100); // Pequena pausa para evitar leituras muito rápidas
    }
}
