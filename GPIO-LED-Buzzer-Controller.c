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

        if(strcmp(funcao, "VERDE")==0)
        {
            printf("Ligando o LED VERDE\n");
        } else if(strcmp(funcao, "AZUL")==0)
        {
            printf("Ligando o LED AZUL\n");
        } else if(strcmp(funcao, "VERMELHO")==0)
        {
            printf("Ligando o LED VERMELHO\n");
        } else if(strcmp(funcao, "BRANCO")==0)
        {
            printf("Ligando os três LEDS\n");
        } else if(strcmp(funcao, "DESLIGAR")==0)
        {
            printf("Desligando os LEDS\n");
        } else if(strcmp(funcao, "BUZZER")==0)
        {
            printf("Ligando o BUZZER\n");
        } else
        {
            printf("Comando inválido\n");
        }

        sleep_ms(1000);
    }
}
