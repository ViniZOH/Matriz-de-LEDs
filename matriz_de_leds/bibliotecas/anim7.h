#ifndef ANIM7_H
#define ANIM7_H
#include "control_leds.h"

double anim7_red[25] =   {1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0, 
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0};

double anim7_green[25] = {0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5, 
                         0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5};

double anim7_blue[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0, 
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.1, 0.0, 0.0};

// Frames da animação Circulo
uint circle_f1[25] = {0, 0, 0, 0,0,
                      0, 0, 0, 0, 0, 
                      0, 0, 1, 0, 0,
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0};

uint circle_f2[25] = {0, 0, 0, 0, 0,
                      0, 0, 1, 0, 0, 
                      0, 1, 1, 1, 0,
                      0, 0, 1, 0, 0,
                      0, 0, 0, 0, 0};

uint circle_f3[25] = {0, 0, 0, 0, 0,
                      0, 1, 1, 1, 0, 
                      0, 1, 1, 1, 0,
                      0, 1, 1, 1, 0,
                      0, 0, 0, 0, 0};

uint circle_f4[25] = {0, 0, 1, 0, 0,
                      0, 1, 1, 1, 0, 
                      1, 1, 1, 1, 1,
                      0, 1, 1, 1, 0,
                      0, 0, 1, 0, 0};      

uint circle_f5[25] = {0, 0, 0, 0, 0,
                      0, 1, 1, 1, 0, 
                      0, 1, 1, 1, 0,
                      0, 1, 1, 1, 0,
                      0, 0, 0, 0, 0};   

uint circle_f6[25] = {0, 0, 0, 0, 0,
                      0, 0, 1, 0, 0, 
                      0, 1, 1, 1, 0,
                      0, 0, 1, 0, 0,
                      0, 0, 0, 0, 0};   

uint circle_f7[25] = {0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0, 
                      0, 0, 1, 0, 0,
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0};


// Função para executar a animação
void play_anim7(PIO pio, uint sm, uint32_t valor_led) {
    printf("Animação 7 - Explosão losango.\n");
    uint *frames[] = {circle_f1, circle_f2, circle_f3, circle_f4, circle_f5, circle_f6, circle_f7};
    double *colors_red[] = {anim7_red, anim7_red, anim7_red, anim7_red, anim7_red, anim7_red, anim7_red};
    double *colors_green[] = {anim7_green, anim7_green, anim7_green, anim7_green, anim7_green, anim7_green, anim7_green};
    double *colors_blue[] = {anim7_blue, anim7_blue, anim7_blue, anim7_blue, anim7_blue, anim7_blue, anim7_blue};

    int num_frames = 7;

    for (int i = 0; i < num_frames; i++) { // Itera pelos frames
        uint *frame = frames[i];
        double *red = colors_red[i];
        double *green = colors_green[i];
        double *blue = colors_blue[i];

        // Atualiza a matriz de LEDs
        put_leds(frame, red, green, blue, valor_led, pio, sm);
        sleep_ms(1000); // Pequeno atraso entre os frames
    }
}

#endif // ANIM7_H
