//Biblioteca para montar animações especificadas pela atividade:

/*
3) Caso a tecla A seja acionada, todos os LEDs deverão ser
desligados.
4) Caso a tecla B seja acionada, todos os LEDs deverão ser
ligados na cor azul, no nível de intensidade de 100% da
luminosidade máxima.
5) Caso a tecla C seja acionada, todos os LEDs deverão ser
ligados na cor vermelha, no nível de intensidade de 80%
da luminosidade máxima.
6) Caso a tecla D seja acionada, todos os LEDs deverão ser
ligados na cor verde, no nível de intensidade de 50% da
luminosidade máxima.
7) Caso a tecla # seja acionada, todos os LEDs deverão ser
ligados na cor branca, no nível de intensidade de 20% da
luminosidade máxima.*/

#ifndef ANIM0_H
#define ANIM0_H

#include "control_leds.h" // Inclui a biblioteca para controle dos LEDs
#include "pico/stdlib.h"  // Biblioteca padrão para Raspberry Pi Pico

// Define as cores para a ação da tecla B
double no_red[25] = {0.0};   // Sem intensidade para o vermelho
double no_green[25] = {0.0}; // Sem intensidade para o verde
double no_blue[25] = {0.0}; // Sem intensidade para o azul

double all_blue[25] =       {1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0}; // 100% de intensidade para o azul

 double all_red[25] =       {0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8,
                            0.8, 0.8, 0.8, 0.8, 0.8}; // 80% de intensidade para o vermelho

double all_green[25] =      {0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5,
                            0.5, 0.5, 0.5, 0.5, 0.5}; // 80% de intensidade para o vermelho

double all_white[25] =      {0.2, 0.2, 0.2, 0.2, 0.2,
                            0.2, 0.2, 0.2, 0.2, 0.2,
                            0.2, 0.2, 0.2, 0.2, 0.2,
                            0.2, 0.2, 0.2, 0.2, 0.2,
                            0.2, 0.2, 0.2, 0.2, 0.2};// 20% de intensidade para o branco

// Define um frame para apagar todos os LEDs
uint all_off_frame[25] = {0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0,
                          0, 0, 0, 0, 0};

// Define um frame para ligar todos os LEDs
uint all_on_frame[25] = {1, 1, 1, 1, 1,
                         1, 1, 1, 1, 1,
                         1, 1, 1, 1, 1,
                         1, 1, 1, 1, 1,
                         1, 1, 1, 1, 1};

// Função para apagar todos os LEDs
void apagar_leds(PIO pio, uint sm, uint32_t valor_led) {
    put_leds(all_off_frame, no_red, no_green, no_blue, valor_led, pio, sm);
    printf("Todos os LEDs foram apagados.\n");
}

// Função para ligar todos os LEDs na cor azul
void ligar_leds_azul(PIO pio, uint sm, uint32_t valor_led) {
    put_leds(all_on_frame, no_red, no_green, all_blue, valor_led, pio, sm);
    printf("Todos os LEDs foram ligados na cor azul.\n");
}

//Função para ligar todos os LEDs na cor vermelho 80%
    void ligar_leds_vermelho80(PIO pio, uint sm, uint32_t valor_led){
    put_leds(all_on_frame,all_red,no_green, no_blue, valor_led, pio, sm);
    printf("LEDs ligados na cor Vermelho 80%\n");
}

//Função para ligar todos os LEDs na cor verde 50%
    void ligar_leds_verde50(PIO pio, uint sm, uint32_t valor_led){
    put_leds(all_on_frame,no_red,all_green, no_blue, valor_led, pio, sm);
    printf("LEDs ligados na cor Verde 50%%\n");
}

//Função para ligar todos os LEDs na cor verde 20%
void ligar_leds_branco20(PIO pio, uint sm, uint32_t valor_led){
    put_leds(all_on_frame,all_white,all_white, all_white, valor_led, pio, sm);
    printf("LEDs ligados na cor Branco 20%%\n");
}

#endif // SPECIAL_ACTIONS_H
