# PROJETO - GERAÇÃO DE ANIMAÇÕES EM UMA MATRIZ DE LEDs 5x5  
(SUB GRUPO 6 - ATIVIDADE 2)  
**Equipe do Projeto:**  

──────────────────────────────────────────────────────────────────────  

- João Murillo Brito Taveira  
- Amanda Cardoso Lopes  
- Lucas Ricardo De Lima Figueiredo (Líder da semana)  
- Matheus Leite Machado  
- Vinícius Da Silva Barreto Dos Santos  
- Wendel Souza Santos  

──────────────────────────────────────────────────────────────────────  
## OBJETIVO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

O objetivo deste projeto é desenvolver um sistema que permita a geração de animações visuais em uma matriz de LEDs 5x5 WS2812, controladas por um teclado matricial 4x4. A solução foi implementada no simulador Wokwi, utilizando o microcontrolador Raspberry Pi Pico W. Adicionalmente, um buzzer passivo eletromagnético foi incluído para complementar algumas animações com feedback sonoro.  

──────────────────────────────────────────────────────────────────────  
## METODOLOGIA ESCOLHIDA PARA REALIZAÇÃO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

Cada integrante da equipe foi responsável por uma funcionalidade ou animação específica, criando e testando suas implementações individualmente em branches separadas no Git. O líder foi encarregado de realizar o merge das branches na principal, consolidar o código, e executar os testes finais no simulador Wokwi antes da entrega do projeto.  

──────────────────────────────────────────────────────────────────────  
## FUNCIONALIDADES DO PROJETO  
──────────────────────────────────────────────────────────────────────  

**Controles do Teclado Matricial:**  
- **Teclas de 0 a 9:** Cada tecla executa uma animação diferente na matriz de LEDs.  
- **Tecla A:** Desliga todos os LEDs.  
- **Tecla B:** Liga todos os LEDs na cor azul (100% de brilho).  
- **Tecla C:** Liga todos os LEDs na cor vermelha (80% de brilho).  
- **Tecla D:** Liga todos os LEDs na cor verde (50% de brilho).  
- **Tecla #:** Liga todos os LEDs na cor branca (20% de brilho).  
- **Tecla *:** Habilita o modo de gravação via software (reboot do microcontrolador).  

──────────────────────────────────────────────────────────────────────  
## ESTRUTURA DO PROGRAMA  
──────────────────────────────────────────────────────────────────────  

O programa segue a seguinte estrutura:  
1. *Inicialização:* Configuração inicial do teclado matricial, matriz de LEDs e buzzer (opcional).  
2. *Leitura de Entrada:* O microcontrolador detecta as teclas pressionadas no teclado matricial.  
3. *Execução de Animações:* De acordo com a tecla pressionada, uma animação ou ação específica é exibida na matriz de LEDs.  
4. *Feedback Sonoro:* Algumas animações ativam o buzzer para emitir sons.  
5. *Interatividade:* O usuário pode alternar livremente entre animações ou estados dos LEDs.  

──────────────────────────────────────────────────────────────────────  
## TECNOLOGIAS UTILIZADAS  
──────────────────────────────────────────────────────────────────────  

- **Linguagem:** C  
- **Microcontrolador:** Raspberry Pi Pico W  
- **Simulador:** Wokwi  
- **Componentes:**  
  - Teclado Matricial 4x4  
  - Matriz de LEDs 5x5 WS2812  
  - Buzzer

──────────────────────────────────────────────────────────────────────  
## COMO EXECUTAR O PROJETO ?
──────────────────────────────────────────────────────────────────────  


**VIA SIMULAÇÃO**

- **Abra no VS Code:**  

- **Clone o Repositório:**  
  `git init` 
  `git clone https://github.com/ViniZOH/Matriz-de-LEDs.git`  

- **Carregue no Simulador Wokwi:**  
  Abra o arquivo no VS Code e carregue o código no simulador Wokwi. 

**VIA PERIFÉRICOS FÍSICOS**
Necessário ter um teclado matricial para rodar esse código.

- **Abra no VS Code:**  

- **Clone o Repositório:**  
  `git init` 
  `git clone https://github.com/ViniZOH/Matriz-de-LEDs.git`  

- **Rodando na plaquinha:**  
 Arraste o arquivo .uf2 para o diretório da plaquinha

- **Utilize o teclado matricial para interagir:**  
  Utilize o teclado matricial as animações e funcionalidades descritas.
 (Verifique a listagem das funcionalidades do processo.

──────────────────────────────────────────────────────────────────────  
## CONCLUSÃO  
──────────────────────────────────────────────────────────────────────  

Este projeto foi uma experiência incrível para explorar o potencial do Raspberry Pi Pico W no controle de periféricos, como o teclado matricial e a matriz de LEDs. Trabalhar com animações visuais e integrar diferentes dispositivos trouxeram desafios que ampliaram nosso conhecimento sobre sistemas embarcados. Além disso, o uso do simulador Wokwi tornou-se todo o processo mais prático e acessível, permitindo testes rápidos e ajustes precisos. No final, conseguimos criar uma solução criativa e interativa que reflete bem o que aprendemos ao longo do desenvolvimento.

──────────────────────────────────────────────────────────────────────  
## DEMONSTRAÇÃO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

![image](https://github.com/user-attachments/assets/0c09714e-2bbe-4c81-9880-c476f6507253)
──────────────────────────────────────────────────────────────────────  
## VÍDEO DO PROJETO  
──────────────────────────────────────────────────────────────────────  

[link]  



──────────────────────────────────────────────────────────────────────  
                           TAREFA EMBARCATECH  
                GERAÇÃO DE ANIMAÇÕES EM UMA MATRIZ DE LEDs 5X5   
                                Subgrupo 6  
──────────────────────────────────────────────────────────────────────  

