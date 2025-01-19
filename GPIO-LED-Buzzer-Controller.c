#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"



int main()
{
    stdio_init_all();
    char funcao[30]; // Variável para armazenar a função que o usuário deseja executar
    printf("Sistema iniciado\n");

    printf("Digite:\n VERDE - PARA LIGAR O LEDE VERDE\n AZUL - PARA LIGAR O LED AZUL\n VERMELHO - PARA LIGAR O LED VERMELHO\n BRANCO - PARA LIGAR OS TRÊS LEDS \n DESLIGAR - PARA DESLIGAR OS LEDS\n BUZZER - PARA LIGAR O BUZZER\n");
    while (true) {
        scanf("%s", funcao);
        sleep_ms(1000);
    }
}
