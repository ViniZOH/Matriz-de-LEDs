//biblioteca para inicializar e com rotinas para controlar a matriz de leds
#ifndef CONTROL_LEDS_H
#define CONTROL_LEDS_H
#define NUM_PIXELS 25

//Rotina que inicializa a matriz de leds

//Rotina que define a cor
uint32_t get_color(double r,double g, double b){
    unsigned char  R,G,B;
    R = r * 255;
    G = g * 255;
    B = b * 255;
    return (G<<24)|(R<<16)|(B<<8);
}
//Rotina para ativar matriz de leds
void put_leds(uint*art, double*red, double*green, double*blue,uint32_t valor_led, PIO pio, uint sm){
    for(int16_t i = 0; i<NUM_PIXELS; i++)
    {   
        if(i==15||i==5){
            int16_t aux = i;
            for(int16_t j=i+4; j>=aux ;j--,i++){
                valor_led = get_color(red[24-j],green[24-j],blue[24-j]);
                if(art[24-j]){
                    pio_sm_put_blocking(pio,sm,valor_led);
                }else{
                    pio_sm_put_blocking(pio,sm,0);
                }
            }
            i--;
        }else{
            valor_led = get_color(red[24-i],green[24-i],blue[24-i]);
            if(art[24-i]){
                pio_sm_put_blocking(pio,sm,valor_led);
            }else{
                pio_sm_put_blocking(pio,sm,0);
            }
        }
    }
}


#endif