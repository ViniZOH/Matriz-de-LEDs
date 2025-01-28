#ifndef ANIM3_H
#define ANIM3_H
#include "control_leds.h"


// Exemplo de como definir as cores de cada led:
double anim3_red[25] =     {0.0, 0.8, 0.8, 0.8, 0.0,
                            0.8, 0.8, 0.8, 0.8, 0.8, 
                            0.8, 0.0, 0.8, 0.0, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.0, 0.8, 0.0, 0.8};

double anim3_green[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double anim3_blue[25] =     {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

// Definindo os frames
uint anim3_f1[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     1, 0, 1, 0, 1};

uint anim3_f2[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     1, 1, 1, 1, 1,
                     1, 0, 1, 0, 1};

uint anim3_f3[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     1, 0, 1, 0, 1,
                     1, 1, 1, 1, 1,
                     1, 0, 1, 0, 1};

uint anim3_f4[25] = {0, 0, 0, 0, 0,
                     1, 1, 1, 1, 1, 
                     1, 0, 1, 0, 1,
                     1, 1, 1, 1, 1,
                     1, 0, 1, 0, 1};

uint anim3_f5[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1, 
                     1, 0, 1, 0, 1,
                     1, 1, 1, 1, 1,
                     1, 0, 1, 0, 1};

// Função para emitir um bip (defina a função conforme seu hardware)
void play_bip() {
    play_tone(BUZZER, NOTE_C4, 300); // Emite um bip de 100ms (ou outro tom e duração que você preferir)
}

// Função para o grito (som contínuo durante 1 segundo)
void play_grito() {
    play_tone(BUZZER, NOTE_E4, 1000); // Emite o grito (som contínuo)
}

// Rodar animação
void play_anim3(PIO pio,uint sm,uint32_t valor_led) {
    printf("Animação 3 - Pac-Man Ghost.\n");
    put_leds(anim3_f1, anim3_red, anim3_green, anim3_blue, valor_led, pio, sm);
    play_bip(); // Emite bip
    sleep_ms(300); 

    put_leds(anim3_f2, anim3_red, anim3_green, anim3_blue, valor_led, pio, sm);
    play_bip(); // Emite bip
    sleep_ms(300); 

    put_leds(anim3_f3, anim3_red, anim3_green, anim3_blue, valor_led, pio, sm);
    play_bip(); // Emite bip
    sleep_ms(300);

    put_leds(anim3_f4, anim3_red, anim3_green, anim3_blue, valor_led, pio, sm);
    play_bip(); // Emite bip
    sleep_ms(300); 

    put_leds(anim3_f5, anim3_red, anim3_green, anim3_blue, valor_led, pio, sm);
    play_grito(); // Grito final
    sleep_ms(1000);

}
#endif // ANIM3_H
