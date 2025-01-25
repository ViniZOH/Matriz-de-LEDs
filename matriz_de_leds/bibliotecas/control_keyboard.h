//Biblioteca para inicializar e com rptinas para controlar o teclado matricial

#ifndef CONTROL_KEYBOARD_H
#define CONTROL_KEYBOARD_H

#define ROW1 18  // R1 -> GP8
#define ROW2 19  // R2 -> GP7
#define ROW3 20  // R3 -> GP6
#define ROW4 4  // R4 -> GP5

#define COL1 9    // C1 -> GP4
#define COL2 8   // C2 -> GP3
#define COL3 16   // C3 -> GP2
#define COL4 17  // C4 --> GP0


const char keymap[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// Inicializa os pinos do teclado matricial
void init_keyboard() {
    // Inicializa as linhas como saída
    gpio_init(ROW1);
    gpio_init(ROW2);
    gpio_init(ROW3);
    gpio_init(ROW4);

    gpio_set_dir(ROW1, GPIO_OUT);
    gpio_set_dir(ROW2, GPIO_OUT);
    gpio_set_dir(ROW3, GPIO_OUT);
    gpio_set_dir(ROW4, GPIO_OUT);

    // Inicializa as colunas como entrada com *pull-down*
    gpio_init(COL1);
    gpio_init(COL2);
    gpio_init(COL3);
    gpio_init(COL4);

    gpio_set_dir(COL1, GPIO_IN);
    gpio_set_dir(COL2, GPIO_IN);
    gpio_set_dir(COL3, GPIO_IN);
    gpio_set_dir(COL4, GPIO_IN);

    gpio_pull_down(COL1);
    gpio_pull_down(COL2);
    gpio_pull_down(COL3);
    gpio_pull_down(COL4);
}

// Lê a tecla pressionada no teclado matricial
char ler_teclado() {
    for (int row = 0; row < 4; row++) {
        // Define todas as linhas como baixo
        gpio_put(ROW1, 0);
        gpio_put(ROW2, 0);
        gpio_put(ROW3, 0);
        gpio_put(ROW4, 0);

        // Define a linha atual como alta
        switch (row) {
            case 0: gpio_put(ROW1, 1); break;
            case 1: gpio_put(ROW2, 1); break;
            case 2: gpio_put(ROW3, 1); break;
            case 3: gpio_put(ROW4, 1); break;
        }

        // Verifica qual coluna está alta
        if (gpio_get(COL1)) { sleep_ms(50); if (gpio_get(COL1)) return keymap[row][0]; }
        if (gpio_get(COL2)) { sleep_ms(50); if (gpio_get(COL2)) return keymap[row][1]; }
        if (gpio_get(COL3)) { sleep_ms(50); if (gpio_get(COL3)) return keymap[row][2]; }
        if (gpio_get(COL4)) { sleep_ms(50); if (gpio_get(COL4)) return keymap[row][3]; }
    }

    return '\0'; // Retorna vazio se nenhuma tecla for pressionada
}

#endif
