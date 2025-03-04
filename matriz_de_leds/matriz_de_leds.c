/*Função main: chamar bibliotecas, 
chamar a rotina que lê o teclado e montar  o switch case com as ações correspondentes a cada tecla*/

//Bibliotecas base do projeto
#include <stdio.h> 
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"
#include "hardware/pio.h"
#include "hardware/adc.h"
#include "pico/bootrom.h"

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
#include "bibliotecas/anim7.h"
#include "bibliotecas/anim8.h"
#include "bibliotecas/anim9.h"
#include "bibliotecas/pitches.h"
#include "bibliotecas/control_keyboard.h"
#include "bibliotecas/control_leds.h"

#define OUT_PIN 7 // Pino onde a matriz esta conectada

#define BUTTON 5

//Função principal
int main()
{
   PIO pio = pio0; 
    bool ok;
    uint16_t i;
    uint32_t valor_led;
    char tecla;

    //coloca a frequência de clock para 128 MHz, facilitando a divisão pelo clock
    ok = set_sys_clock_khz(128000, false);

    // Inicializa todos os códigos stdio padrão que estão ligados ao binário.
    stdio_init_all();
  
    // Inicializa o buzzer
    buzzer_init();
  
    printf("iniciando a transmissão PIO");
    if (ok) printf("clock set to %ld\n", clock_get_hz(clk_sys));

    //configurações da PIO
    uint offset = pio_add_program(pio, &matriz_de_leds_program);
    uint sm = pio_claim_unused_sm(pio, true);
    matriz_de_leds_program_init(pio, sm, offset, OUT_PIN);


    // Inicializa o teclado matricial
    init_keyboard();


    gpio_init(BUTTON);
    gpio_set_dir(BUTTON,GPIO_IN);
    gpio_pull_up(BUTTON);

    while (true) {
        
        tecla = ler_teclado();
        if(tecla != '\0') {

            switch (tecla)  {
            case '1':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 1
            play_anim1(pio,sm,valor_led);
            break;
            
            case '2':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 2
            play_anim2(pio,sm,valor_led);
            break;
            
            case '3':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 3 
            play_anim3(pio,sm,valor_led); // animação 3 - função de execução
            break;
            
            case '4':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 4 
            play_anim4(pio,sm,valor_led); // animação 4 - função de execução
            break;

            case '5':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 5
            animacao_coracao_pulsando(pio, sm, valor_led);
            break;

            case '6':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho 6
            play_anim6(pio,sm,valor_led);
            break;

             case '7':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho Circulo
            play_anim7(pio,sm,valor_led);
            break;

            case '8':
                //rotina para escrever na matriz de leds com o emprego de PIO - desenho Lua
            play_anim8(pio,sm,valor_led);
            break;

            case '9':
                //rotina para escrever na matriz de leds com o emprego de PIO - formas geometricas basicas
            play_anim9(pio,sm,valor_led);
            break;

            case 'A':
                //rotina para DESLIGAR TODOS OS LEDS
            apagar_leds(pio,sm,valor_led);
            break;

            case 'B':
                //rotina para Ligar em Azul 100%
            ligar_leds_azul(pio,sm,valor_led);
            break;

            case 'C':
                //rotina para Ligar em vermelho 80%
            ligar_leds_vermelho80(pio,sm,valor_led);
            break;

            case 'D':
                //rotina para Ligar em verde 50%
            ligar_leds_verde50(pio,sm,valor_led);
            break;

            case '#':
                //rotina para Ligar em verde 50%
            ligar_leds_branco20(pio,sm,valor_led);
            break;

            case '*':
            //rotina para por placa em modo bootloader
            printf("\nReiniciando a placa em modo de Gravação...\n");
            reset_usb_boot(0,0);
            break;

            }
        }
    sleep_ms(300);
   // printf("\nfrequeência de clock %ld\r\n", clock_get_hz(clk_sys));  
    }

    return 0;
}