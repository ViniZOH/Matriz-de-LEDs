/*Função main: chamar bibliotecas, 
chamar a rotina que lê o teclado e montar  o switch case com as ações correspondentes a cada tecla*/

//Bibliotecas base do projeto
#include <stdio.h> 
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "hardware/pio.h"
#include "hardware/adc.h"

//Arquivo .pio
#include "matriz_de_leds.pio.h"

//Bibliotecas criadas para o projeto
#include "bibliotecas/anim0.h"
#include "bibliotecas/anim1.h"
#include "bibliotecas/anim2.h"
#include "bibliotecas/anim3.h"
#include "bibliotecas/anim4.h"
#include "bibliotecas/anim5.h"
#include "bibliotecas/anim6.h"
#include "bibliotecas/pitches.h"
#include "bibliotecas/control_keyboard.h"
#include "bibliotecas/control_leds.h"


//Função principal
int main()
{ 
    // Para escrever info na tela.
    stdio_init_all();
    buzzer_init();
    while (true) {
        //Switch Case das teclas
    }
}

