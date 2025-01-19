# GPIO-LED-Buzzer-Controller

Atividade 2 (Participativa): Controle de pinos GPIO da ferramenta educacional BitDogLab.

## **Líder**

**Hugo S. Dias**

---

## **Colaboradores e Divisão das Tarefas**

1. ** Controle dos LEDs/(GPIOs 11, 12 e 13)** - [Alinne- LED 11]
2. ** Controle do Buzzer/(GPIO 21)** - Gabriel S. Lacerda
3. ** Comunicação via UART ** - _[A definir]_
4. ** Integração do Sistema ** - _[A definir]_
5. ** Testes e Debugging ** - _[A definir]_
6. **Documentação inicial do `README.md`, instruções e detalhes básicos** - Jackson

## **Descrição do projeto**

Este projeto consiste no controle de pinos GPIO do microcontrolador RP2040 utilizando a placa de desenvolvimento **BitDogLab**. O objetivo é realizar o acionamento dos LEDs e de um buzzer, com comunicação serial via UART. O desenvolvimento foi realizado em C utilizando o **Pico SDK** e o ambiente de desenvolvimento **VS Code**.

## **Funcionalidades**

Foram implementadas as seguintes funcionalides:

1. **LED RGB**:

- Ligar apenas o LED verde.
- Ligar apenas o LED azul.
- Ligar apenas o LED vermelho.
- Ligar os três LEDs simultaneamente (luz branca).
- Desligar todos os LEDs.

2. **Buzzer**:

- Emitir um sinal sonoro por 2 segundos.

3. **Reboot**:

- Sair do modo de execução e habilitar o modo de gravação.

## **Comandos Disponíveis**

O sistema responde aos seguintes comandos enviados via terminal serial:

| Comando    | Ação                                |
| ---------- | ----------------------------------- |
| `VERDE`    | Liga o LED verde.                   |
| `AZUL`     | Liga o LED azul.                    |
| `VERMELHO` | Liga o LED vermelho.                |
| `BRANCO`   | Liga os três LEDs (luz branca).     |
| `DESLIGAR` | Desliga todos os LEDs.              |
| `BUZZER`   | Aciona o buzzer por 2 segundos.     |
| `SAIR`     | Reinicia o dispositivo em modo USB. |

## **Pré-requisitos**

- **Hardware**:
  - Raspberry Pi Pico (RP2040)
  - LED RGB
  - Resistores para o LED
  - Buzzer
  - Cabo micro-USB.
- **Software**:
  - Ambiente de desenvolvimento VS Code.
  - SDK Pico.
  - Terminal serial (recomendado: PuTTY).

## **Configuração do Ambiente**

1. **Instale o SDK do Raspberry Pi Pico:**

   - Instale o SDK Pico seguindo as [instruções oficiais](https://www.raspberrypi.com/documentation/microcontrollers/).
   - Configure o VS Code para desenvolvimento C/C++

2. **Clone o repositório:**

   ```bash
   git clone https://github.com/Embarcatech/GPIO-LED-Buzzer-Controller.git
   cd GPIO-LED-Buzzer-Controller
   ```

3. **Compile o código:**

   ```bash
   Usando a extensão do Raspberry `Pi Pico Visual Studio Code`
   Siga os seguintes passos:
   1. Clean CMake (Para garantir que o projetos sera compilado do zero)
   2. Compile Project (Compilação dos binarios)
   ```

4. **Carregue o binário:**

- Conecte o microcontrolador ao computador no modo bootloader.
- Copie o arquivo `.uf2` (Depois de compilado, copiar o ./build/GPIO-LED-Buzzer-Controller.uf2 para a Raspberry em modo bootsel).

## **Como utilizar**

1. **Conecte o microcontrolador ao computador usando um cabo USB.**

2. **Verifique em qual porta o Pico está configurado. Ex: COM3.**

3. **Abra um terminal serial e configure a taxa de envio (speed) em `115200`**

4. **Envie os comandos listados na seção [Comandos Disponíveis](#comandos-disponíveis)**
