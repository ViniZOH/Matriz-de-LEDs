//Vão ser declarados os frames e cores da animação6

#ifndef ANIM6_H
#define ANIM6_H
#include "control_leds.h"

//Exemplo de como definir as cores de cada led:
/*(os números indicam a intensidade da cor caso o led epecífico seja ligado, vc pode misturar as 
intensidades de red, green ou blue pra atingir outras cores;
Você pode deixar todas da mesma cor ou alterar a cor de cada led individualmente).*/
double anim6_red[25] =     {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.1, 0.0, 0.1, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.1, 0.0, 0.0};

double anim6_green[25] =   {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.1, 0.0, 0.0, 0.0, 0.1,
                            0.0, 0.0, 0.1, 0.0, 0.0};

double anim6_blue[25] =    {0.0, 0.0, 1.0, 0.0, 0.0,
                            0.0, 1.0, 1.0, 1.0, 0.0, 
                            1.0, 1.0, 1.0, 1.0, 1.0,
                            0.1, 1.0, 1.0, 1.0, 0.1,
                            0.0, 1.0, 1.0, 1.0, 0.0};




//exemplo de frame (Aqui vc desenha)
//Seta
uint anim6_f1[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0,
                     0, 1, 1, 1, 0};

uint anim6_f2[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     0, 0, 0, 0, 0,
                     0, 1, 1, 1, 0,
                     0, 1, 1, 1, 0};

uint anim6_f3[25] = {0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 
                     1, 1, 1, 1, 1,
                     0, 1, 1, 1, 0,
                     0, 1, 1, 1, 0};

uint anim6_f4[25] = {0, 0, 0, 0, 0,
                     0, 1, 1, 1, 0, 
                     1, 1, 1, 1, 1,
                     0, 1, 1, 1, 0,
                     0, 1, 1, 1, 0};

uint anim6_f5[25] = {0, 0, 1, 0, 0,
                     0, 1, 1, 1, 0, 
                     1, 1, 1, 1, 1,
                     0, 1, 1, 1, 0,
                     0, 1, 1, 1, 0};
                                        
// Rodar animação:
void play_anim6(PIO pio,uint sm,uint32_t valor_led){
    printf("Animação 6 - \"Olhe pra cima\".\n");
    put_leds(anim6_f1,anim6_red,anim6_green,anim6_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim6_f2,anim6_red,anim6_green,anim6_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim6_f3,anim6_red,anim6_green,anim6_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim6_f4,anim6_red,anim6_green,anim6_blue,valor_led,pio,sm);
    sleep_ms(1000);
    put_leds(anim6_f5,anim6_red,anim6_green,anim6_blue,valor_led,pio,sm);
    sleep_ms(1000);
}
#endif //ANIM_H