Geração de Animações em uma Matriz de LEDs 5x5 com Raspberry Pi Pico W
Este projeto é uma simulação desenvolvida no Wokwi, utilizando o microcontrolador Raspberry Pi Pico W, um teclado matricial 4x4, uma matriz de LEDs coloridos 5x5 WS2812, e, opcionalmente, um buzzer passivo eletromagnético.

O objetivo do projeto é gerar animações visuais na matriz de LEDs, controladas pelas teclas do teclado matricial, conforme os requisitos descritos abaixo.

🖥️ Componentes Utilizados
Teclado matricial 4x4: Permite a seleção das animações ou estados dos LEDs.
Microcontrolador Raspberry Pi Pico W: Controla os LEDs e interpreta as entradas do teclado.
Matriz de LEDs 5x5 WS2812: Exibe as animações coloridas.
Buzzer Passivo MLT-8530 SMD (opcional): Emite sons para uma das animações.

📝 Funcionalidades Implementadas
Controles do Teclado Matricial
Teclas de 0 a 9: Cada tecla executa uma animação diferente na matriz de LEDs.
Tecla A: Desliga todos os LEDs.
Tecla B: Liga todos os LEDs na cor azul (100% de luminosidade).
Tecla C: Liga todos os LEDs na cor vermelha (80% de luminosidade).
Tecla D: Liga todos os LEDs na cor verde (50% de luminosidade).
Tecla #: Liga todos os LEDs na cor branca (20% de luminosidade).
**Tecla ***: Habilita o modo de gravação via software (reboot do microcontrolador).

🔧 Configuração e Execução
1. Clone o repositorio:
2. Abra o arquivo no VS Code e carregue o dódigo no simularo Wokwi.
   
🖼️ Demonstração
   ![image](https://github.com/user-attachments/assets/0c09714e-2bbe-4c81-9880-c476f6507253)
