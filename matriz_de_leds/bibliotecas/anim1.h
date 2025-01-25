//Vão ser declarados os frames e cores da animação 1
#ifndef ANIM1_H
#define ANIM1_H
#include "control_leds.h"

//Exemplo de como definir as cores de cada led:
/*(os números indicam a intensidade da cor caso o led epecífico seja ligado, vc pode misturar as 
intensidades de red, green ou blue pra atingir outras cores;
Você pode deixar todas da mesma cor ou alterar a cor de cada led individualmente).*/
double anim1_red[25] =     {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.1, 0.0, 0.1, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.1, 0.0, 0.0};

double anim1_green[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.1, 0.0, 0.0, 0.0, 0.1,
                            0.0, 0.0, 0.1, 0.0, 0.0};

double anim1_blue[25] =    {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.1, 0.0, 0.0, 0.0, 0.1,
                            0.0, 0.1, 0.1, 0.1, 0.0};




//exemplo de frame (Aqui vc desenha)
//Rosto Piscando olhinho
uint anim1_f1[25] = {0, 0, 0, 0, 0,
                     0, 1, 0, 1, 0, 
                     0, 0, 0, 0, 0,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};

uint anim1_f2[25] = {0, 0, 0, 0, 0,
                     0, 1, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};

uint anim1_f3[25] = {0, 0, 0, 0, 0,
                     0, 1, 0, 1, 0, 
                     0, 0, 0, 0, 0,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};

uint anim1_f4[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};

uint anim1_f5[25] = {0, 0, 0, 0, 0,
                     0, 1, 0, 1, 0, 
                     0, 0, 0, 0, 0,
                     1, 0, 0, 0, 1,
                     0, 1, 1, 1, 0};
                                        
// Rodar animação:
void play_anim1(PIO pio,uint sm,uint32_t valor_led){
    put_leds(anim1_f1,anim1_red,anim1_green,anim1_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim1_f2,anim1_red,anim1_green,anim1_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim1_f3,anim1_red,anim1_green,anim1_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim1_f4,anim1_red,anim1_green,anim1_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim1_f5,anim1_red,anim1_green,anim1_blue,valor_led,pio,sm);
    sleep_ms(1000);
}
#endif //ANIM_H