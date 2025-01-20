#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"

#define GPIO_BUZZER 21 

void init_gpio(){

    gpio_init(GPIO_BUZZER);
    gpio_set_dir(GPIO_BUZZER, 1);
    gpio_put(GPIO_BUZZER, 0);

}

void buzzer(){
    gpio_put(GPIO_BUZZER, 1);
    sleep_ms(2000);
    gpio_put(GPIO_BUZZER, 0);
}

#define GPIO_LED_VERDE 11

void init_gpio(){

    gpio_init(GPIO_LED_VERDE);
    gpio_set_dir(GPIO_LED_VERDE, 1);
    gpio_put(GPIO_LED_VERDE, 0);

}



int main()
{
    stdio_init_all();
    init_gpio(); //Inicialização dos pinos. 

    char funcao[30]; // Variável para armazenar a função que o usuário deseja executar.
    printf("Sistema iniciado\n");


    while (true) {
        printf("Digite:\n VERDE - PARA LIGAR O LEDE VERDE\n AZUL - PARA LIGAR O LED AZUL\n VERMELHO - PARA LIGAR O LED VERMELHO\n BRANCO - PARA LIGAR OS TRÊS LEDS \n DESLIGAR - PARA DESLIGAR OS LEDS\n BUZZER - PARA LIGAR O BUZZER\n SAIR - PARA HABILITAR MODO GRAVAÇÃO (REBOOT)\n");
        scanf("%s", funcao);

        if(strcmp(funcao, "VERDE")==0)
        {
            printf("Ligando o LED VERDE\n");
            gpio_put(GPIO_LED_VERDE, true);


        } else if(strcmp(funcao, "AZUL")==0)
        {
            printf("Ligando o LED AZUL\n");
            gpio_put(GPIO_LED_VERDE, false);

        } else if(strcmp(funcao, "VERMELHO")==0)
        {
            printf("Ligando o LED VERMELHO\n");
            gpio_put(GPIO_LED_VERDE, false);

        } else if(strcmp(funcao, "BRANCO")==0)
        {
            printf("Ligando os três LEDS\n");
            gpio_put(GPIO_LED_VERDE, true);

        } else if(strcmp(funcao, "DESLIGAR")==0)
        {
            printf("Desligando os LEDS\n");
            gpio_put(GPIO_LED_VERDE, false);
        } else if(strcmp(funcao, "BUZZER")==0)
        {
            printf("Ligando o BUZZER\n");

        } else if(strcmp(funcao, "SAIR")==0)
        {
            printf("Saindo do modo de execução\n");
            
        } else
        {
            printf("Comando inválido\n");
        }

        sleep_ms(1000);
    }
}