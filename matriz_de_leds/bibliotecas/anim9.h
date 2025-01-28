#ifndef anim9_H
#define anim9_H
#include "control_leds.h"

// Definindo as intensidades das cores para a animação
double anim9_red[25] =   {1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0, 
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0,
                         1.0, 1.0, 1.0, 1.0, 1.0};

double anim9_green[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0, 
                         0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0};

double anim9_blue[25] = {0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0, 
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0,
                          0.0, 0.0, 0.0, 0.0, 0.0};

// Frames com diferentes formas geométricas

// Quadrado Vazio (Quadrado com a borda acesa)
uint anim9_f1[25] =  {1, 1, 1, 1, 1,
                      1, 0, 0, 0, 1, 
                      1, 0, 0, 0, 1,
                      1, 0, 0, 0, 1,
                      1, 1, 1, 1, 1};

// Círculo Vazio (Círculo com a borda acesa)
uint anim9_f2[25] ={0, 1, 1, 1, 0,
                    1, 0, 0, 0, 1, 
                    1, 0, 0, 0, 1,
                    1, 0, 0, 0, 1,
                    0, 1, 1, 1, 0};

// Triângulo Vazio (Triângulo com a borda acesa)
uint anim9_f3[25] ={0, 0, 0, 0, 0,
                    0, 0, 1, 0, 0, 
                    0, 1, 0, 1, 0,
                    1, 1, 1, 1, 1,
                    0, 0, 0, 0, 0 };

// Retângulo (Retângulo cheio)
uint anim9_f4[25] = {0, 0, 0, 0, 0,
                     1, 1, 1, 1, 1, 
                     1, 0, 0, 0, 1,
                     1, 1, 1, 1, 1,
                     0, 0, 0, 0, 0};

// Hexágono (Hexágono cheio)
uint anim9_f5[25] = {0, 1, 1, 1, 0,
                     1, 0, 0, 0, 1, 
                     1, 0, 0, 0, 1,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};

// Função para executar a animação com formas geométricas
void play_anim9(PIO pio, uint sm, uint32_t valor_led) {
    printf("Animação 9 - Formas Geométricas.\n");
    uint *frames[] = {anim9_f1, anim9_f2, anim9_f3, anim9_f4, anim9_f5};
    double *colors_red[] = {anim9_red, anim9_red, anim9_red, anim9_red, anim9_red};
    double *colors_green[] = {anim9_green, anim9_green, anim9_green, anim9_green, anim9_green};
    double *colors_blue[] = {anim9_blue, anim9_blue, anim9_blue, anim9_blue, anim9_blue};

    int num_frames = 5;

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

#endif // anim9_H
