 void animacao_pisca_pisca_natal(PIO pio, uint sm) {
    double frames[6][25] = {
        {1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0}, // Frame 1: Vermelho
        {1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0}, // Frame 2: Vermelho
        {0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0}, // Frame 3: Verde
        {0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0}, // Frame 4: Verde
        {0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0}, // Frame 5: Azul
        {0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0}  // Frame 6: Azul
    };

    for (int repeat = 0; repeat < 3; repeat++) {
        for (int frame = 0; frame < 6; frame++) {
            for (int i = 0; i < NUM_PIXELS; i++) {
                if (frames[frame][i] == 1.0) {
                    if (frame < 2) {
                        pio_sm_put_blocking(pio, sm, matrix_rgb(0.0, 0.0, 1.0)); // Vermelho (Frames 0 e 1)
                    } else if (frame < 4) {
                        pio_sm_put_blocking(pio, sm, matrix_rgb(0.0, 1.0, 0.0)); // Verde (Frames 2 e 3)
                    } else {
                        pio_sm_put_blocking(pio, sm, matrix_rgb(1.0, 0.0, 0.0)); // Azul (Frames 4 e 5)
                    }
                } else {
                    pio_sm_put_blocking(pio, sm, matrix_rgb(0.0, 0.0, 0.0)); // Desligado
                }
            }
            sleep_ms(200); // Ajuste o tempo para controlar o FPS
        }
    }
}