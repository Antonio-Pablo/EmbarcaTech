# EmbarcaTech
 
Projeto: Alarme com Sensor de Movimento PIR e Buzzer no Raspberry Pi Pico
Este projeto utiliza um sensor de movimento PIR e um buzzer com o Raspberry Pi Pico para criar um sistema de alarme simples. Quando o sensor detecta movimento, o buzzer é ativado por um curto período de tempo.

Funcionamento do Código
O código faz o seguinte:

1-Inicializa o pino do sensor PIR como entrada e o pino do buzzer como saída.

2-Verifica constantemente o estado do sensor PIR.

3-Quando o sensor detecta movimento, o buzzer é ativado por 1 segundo.

4-O loop principal repete a verificação a cada 100 ms.
