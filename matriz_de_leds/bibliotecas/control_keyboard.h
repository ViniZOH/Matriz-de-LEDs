//Biblioteca para inicializar e com rptinas para controlar o teclado matricial

#ifndef CONTROL_KEYBOARD_H
#define CONTROL_KEYBOARD_H

const int row_pins[4] = {18, 19, 20, 4};
const int col_pins[4] = {9, 8, 16, 17};

const char keymap[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// Inicializa os pinos do teclado matricial
void init_keyboard() {
  

    // Inicializa as linhas e colunas do teclado
    for (int i = 0; i < 4; i++) {  // Itera sobre cada linha do teclado.
        gpio_init(row_pins[i]);       // Inicializa o pino da linha atual.
        gpio_set_dir(row_pins[i], GPIO_OUT); // Define o pino como saída.
        gpio_put(row_pins[i], 1);     // Define o pino como alto (1).
    }

    for (int i = 0; i < 4; i++) {  // Itera sobre cada coluna do teclado.
        gpio_init(col_pins[i]);       // Inicializa o pino da coluna atual.
        gpio_set_dir(col_pins[i], GPIO_IN);  // Define o pino como entrada.
        gpio_pull_up(col_pins[i]);    // Ativa o resistor de pull-up no pino.
    }
}


// Verifica qual tecla foi pressionada
char ler_teclado() {
    for (int row = 0; row < 4; row++)
    {
        gpio_put(row_pins[row], 0);
        sleep_ms(5);

        for (int col = 0; col < 4; col++) 
        {
            if (gpio_get(col_pins[col]) == 0)
            {
                while (gpio_get(col_pins[col]) == 1); // Aguarda até que a tecla seja liberada
                gpio_put(row_pins[row], 1); // Restaura a coluna para nível lógico alto
                return keymap[row][col]; // Retorna a tecla correspondente
            }
        }
        gpio_put(row_pins[row], 1);
    }

    return '\0'; // Nenhuma tecla foi pressionada
}

#endif
