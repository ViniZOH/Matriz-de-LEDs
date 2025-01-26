#ifndef ANIM5_H
#define ANIM5_H
#include "control_leds.h"

void animacao_coracao_pulsando(PIO pio, uint sm, uint32_t valor_led) {
    double frames[3][25] = {
        {0.0, 1.0, 0.0, 1.0, 0.0,  // Frame 1: Coração pequeno
         1.0, 1.0, 1.0, 1.0, 1.0,
         1.0, 1.0, 1.0, 1.0, 1.0,
         0.0, 1.0, 1.0, 1.0, 0.0,
         0.0, 0.0, 1.0, 0.0, 0.0},
         
        {0.0, 0.5, 0.0, 0.5, 0.0,  // Frame 2: Coração médio
         0.5, 0.5, 0.5, 0.5, 0.5,
         0.5, 0.5, 0.5, 0.5, 0.5,
         0.0, 0.5, 0.5, 0.5, 0.0,
         0.0, 0.0, 0.5, 0.0, 0.0},
         
        {0.0, 0.2, 0.0, 0.2, 0.0,  // Frame 3: Coração grande
         0.2, 0.2, 0.2, 0.2, 0.2,
         0.2, 0.2, 0.2, 0.2, 0.2,
         0.0, 0.2, 0.2, 0.2, 0.0,
         0.0, 0.0, 0.2, 0.0, 0.0}
    };

    uint frame_uint[25];
    double red[25], green[25], blue[25];

    for (int repeat = 0; repeat < 10; repeat++) {
        for (int frame = 0; frame < 3; frame++) {
            for (int i = 0; i < 25; i++) {
                frame_uint[i] = (uint)frames[frame][i];
                if (frames[frame][i] > 0.0) {
                    red[i] = frames[frame][i];
                    green[i] = 0.0;
                    blue[i] = 0.0;
                } else {
                    red[i] = 0.0;
                    green[i] = 0.0;
                    blue[i] = 0.0;
                }
            }
            put_leds(frame_uint, red, green, blue, valor_led, pio, sm);
            sleep_ms(200); // Ajuste o tempo para controlar o FPS
        }
    }
}

#endif // ANIM5_H