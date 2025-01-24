//Vão ser declarados os frames e cores da animação 1
#ifndef ANIM1_H
#define ANIM1_H


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

double anim2_blue[25] =    {0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0, 
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.0, 0.0, 0.0, 0.0,
                            0.0, 0.1, 0.0, 0.1, 0.0};




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

#endif //ANIM_H