#ifndef ANIM8_H
#define ANIM8_H
#include "control_leds.h"

// Cores principais
double anim8_red[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0, 
                         0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0};

double anim8_green[25] = {0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5, 
                         0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5,
                         0.5, 0.5, 0.5, 0.5, 0.5};

double anim8_blue[25] = {1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0, 
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0};

                        

// Frames para a animação da Lua
uint lua_f1[25] =    {0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0, 
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0};  // Lua Nova

uint lua_f2[25] =    {0, 1, 1, 0, 0,
                      0, 1, 0, 0, 0, 
                      1, 1, 0, 0, 0,
                      0, 1, 0, 0, 0,
                      0, 1, 1, 0, 0};  // Lua Crescente

uint lua_f3[25] =    {0, 0, 1, 0, 0,
                      0, 1, 1, 0, 0, 
                      1, 1, 1, 0, 0,
                      0, 1, 1, 0, 0,
                      0, 1, 1, 0, 0};  // Meia Lua

uint lua_f4[25] =    {0, 0, 1, 0, 0,
                      0, 1, 1, 1, 0, 
                      1, 1, 1, 1, 1,
                      0, 1, 1, 1, 0,
                      0, 0, 1, 0, 0};  // Lua Cheia

uint lua_f5[25] =    {0, 0, 1, 1, 0,
                      0, 0, 1, 1, 0, 
                      0, 0, 1, 1, 1,
                      0, 0, 1, 1, 0,
                      0, 0, 1, 1, 0};  // Minguante

uint lua_f6[25] =    {0, 0, 1, 1, 0,
                      0, 0, 0, 1, 0, 
                      0, 0, 0, 1, 1,
                      0, 0, 0, 1, 0,
                      0, 0, 1, 1, 0};  // Meia Lua Minguante

uint lua_f7[25] =    {0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0, 
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0,
                      0, 0, 0, 0, 0};  // Lua Nova

// Função para executar a animação da Lua
void play_anim8(PIO pio, uint sm, uint32_t valor_led) {
    printf("Animação 8 - Ciclo da Lua.\n");
    uint *frames[] = {lua_f1, lua_f2, lua_f3, lua_f4, lua_f5, lua_f6, lua_f7};
    double *colors_red[] = {anim8_red, anim8_red, anim8_red, anim8_red, anim8_red, anim8_red, anim8_red};
    double *colors_green[] = {anim8_green, anim8_green, anim8_green, anim8_green, anim8_green, anim8_green, anim8_green};
    double *colors_blue[] = {anim8_blue, anim8_blue, anim8_blue, anim8_blue, anim8_blue, anim8_blue, anim8_blue};

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

#endif // ANIM8_H
