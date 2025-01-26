//Vão ser declarados os frames e cores da animação2
//Vão ser declarados os frames e cores da animação6

#ifndef ANIM2_H
#define ANIM2_H
#include "control_leds.h"

//Exemplo de como definir as cores de cada led:
/*(os números indicam a intensidade da cor caso o led epecífico seja ligado, vc pode misturar as 
intensidades de red, green ou blue pra atingir outras cores;
Você pode deixar todas da mesma cor ou alterar a cor de cada led individualmente).*/

double anim2_red[25] =     {1.0, 1.0, 1.0, 1.0, 1.0,
                            1.0, 0.0, 1.0, 0.0, 1.0, 
                            1.0, 0.0, 0.0, 0.0, 1.0,
                            1.0, 1.0, 0.0, 1.0, 1.0,
                            1.0, 1.0, 1.0, 1.0, 1.0};


double anim2_green[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};

double anim2_blue[25] =    {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.5, 0.0, 0.5, 0.0, 
                            0.0, 0.5, 0.5, 0.5, 0.0,
                            0.0, 0.0, 0.5, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0};


//Coração
uint anim2_f1[25] = {0, 1, 0, 1, 0,
                     1, 0, 1, 0, 1,
                     1, 0, 0, 0, 1,
                     0, 1, 0, 1, 0,
                     0, 0, 1, 0, 0};

uint anim2_f2[25] = {0, 1, 0, 1, 0,
                     1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1,
                     0, 1, 1, 1, 0,
                     0, 0, 1, 0, 0};

uint anim2_f3[25] = {0, 1, 0, 1, 0,
                     1, 0, 1, 0, 1,
                     1, 0, 0, 0, 1,
                     0, 1, 0, 1, 0,
                     0, 0, 1, 0, 0};      

uint anim2_f4[25] = {0, 1, 0, 1, 0,
                     1, 1, 1, 1, 1,
                     1, 1, 1, 1, 1,
                     0, 1, 1, 1, 0,
                     0, 0, 1, 0, 0}; 

uint anim2_f5[25] = {0, 1, 0, 1, 0,
                     1, 0, 1, 0, 1,
                     1, 0, 0, 0, 1,
                     0, 1, 0, 1, 0,
                     0, 0, 1, 0, 0};                                         

                                        

// Rodar animação:
void play_anim2(PIO pio,uint sm,uint32_t valor_led){
    put_leds(anim2_f1,anim2_red,anim2_green,anim2_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim2_f2,anim2_red,anim2_green,anim2_blue,valor_led,pio,sm);
    sleep_ms(300);
    put_leds(anim2_f3,anim2_red,anim2_green,anim2_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim2_f4,anim2_red,anim2_green,anim2_blue,valor_led,pio,sm);
    sleep_ms(300);
    put_leds(anim2_f5,anim2_red,anim2_green,anim2_blue,valor_led,pio,sm);
    sleep_ms(1000);
}
#endif //ANIM_H