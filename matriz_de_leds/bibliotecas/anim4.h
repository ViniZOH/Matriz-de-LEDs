#ifndef ANIM4_H
#define ANIM4_H
#include "control_leds.h"

// Intensidade das cores para a nuvem (branco) e o raio (azul)
double anim4_red[25] =   {0.0, 0.5, 0.5, 0.5, 0.0,
                          0.5, 0.5, 0.5, 0.5, 0.5,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0};

double anim4_green[25] = {0.0, 0.5, 0.5, 0.5, 0.0,
                          0.5, 0.5, 0.5, 0.5, 0.5,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0};

double anim4_blue[25] =  {0.0, 0.5, 0.5, 0.5, 0.0,
                          0.5, 0.5, 0.5, 0.5, 0.5,
                          0.0, 0.0, 0.0, 1.0, 1.0,
                          0.0, 0.0, 1.0, 1.0, 0.0,
                          0.0, 1.0, 1.0, 0.0, 0.0};

uint anim4_f1[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1,
                     0, 0, 0, 1, 1,
                     0, 0, 1, 1, 0,
                     0, 1, 1, 0, 0};// Frames da animação da nuvem emitindo raio direita

uint anim4_f2[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0}; // Somente a nuvem acesa

uint anim4_f3[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1,
                     1, 1, 0, 0, 0,
                     0, 1, 1, 0, 0,
                     0, 0, 1, 1, 0};// Frames da animação da nuvem emitindo raio esquerda

uint anim4_f4[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0}; // Somente a nuvem acesa

uint anim4_f5[25] = {0, 1, 1, 1, 0,
                     1, 1, 1, 1, 1,
                     0, 1, 0, 1, 0,
                     0, 0, 1, 0, 0,
                     0, 1, 1, 1, 0};// Frames da animação da nuvem emitindo raio meio

// Função para rodar a animação
void play_anim4(PIO pio, uint sm, uint32_t valor_led) {
    put_leds(anim4_f1, anim4_red, anim4_green, anim4_blue, valor_led, pio, sm);
    sleep_ms(200); // Pausa de 200ms entre os frames
    put_leds(anim4_f2, anim4_red, anim4_green, anim4_blue, valor_led, pio, sm);
    sleep_ms(200);
    put_leds(anim4_f3, anim4_red, anim4_green, anim4_blue, valor_led, pio, sm);
    sleep_ms(200);
    put_leds(anim4_f4, anim4_red, anim4_green, anim4_blue, valor_led, pio, sm);
    sleep_ms(200);
    put_leds(anim4_f5, anim4_red, anim4_green, anim4_blue, valor_led, pio, sm);
    sleep_ms(200);
}

#endif // ANIM4_H
