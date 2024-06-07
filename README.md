Nomes: 

Enzo Gaião Real - RM557943


Gustavo Pasquini Lucas - RM555454


Vitor Couto Victorino - RM554965

# SISTEMA DE MONITORAMENTO DE TEMPERATURA E EMERGÊNCIA BLUE REEF

## Sobre
Este é um protótipo de um sistema de monitoramento de temperatura aquática usando um microcontrolador Arduino Uno, o sistema em si requere informações de temperatura e exibe no serial para visualização. Incluso nesse protótipo, temos uma configuração de emergência em caso de anomalias críticas em temperatura da água, podendo ser causadas por processos naturais ou antropológicos.

## Funcionalidades
 - Medição da temperatura da água
 - Salvamento de um broto de coral para reprodução por brotamento
 - Toque de um alarme na central para o aviso de anomalia crítica na região do sensor
   
## Materiais
 - 1 Sensor Dallas Temperature DS18B20
 - 2 Servo Motores
 - 1 Buzzer Digital
 - 1 Resistor 4,7K
 - 1 Resistor 100R
 - 1 Microcontrolador Arduino (ex: Arduino Uno)
 - 2 Protoboards
 - Jumpers

## Recursos
- Arduino IDE
- Microcontrolador Arduino Compatível com a Arduino IDE
- Sensores, Servos e Buzzer corretamente conectados
  
## Bibliotecas utilizadas
- OneWire.h, para interação com o sensor Dallas DS18B20.
- Servo.h, para interação e manipulação de Servo motores.
- DallasTemperature.h, para interação com o sensor Dallas DS18B20

## Instalação das bibliotecas

Abra a Arduino IDE
Vá em Sketch > Include Library > Manage Libraries
No Gerenciador de Bibliotecas, procure por cada uma das bibliotecas

## Upload do código para o Arduino

Conecte o Arduino ao computador via USB
Abra o Arduino IDE.
Copie e cole o código fornecido
Selecione a placa Arduino correta em Tools > Board
Selecione a porta serial correta em Tools > Port
Carregue o sketch para o Arduino clicando no botão de upload (seta para a direita)

## Fluxo

Começando o código, o sensor é chamado para requerimento das temperaturas logo no início do loop, imprimindo-a no monitor serial de um em um segundo. 
Caso a temperatura passe de 35°C (Temperatura usada apenas para efeitos de simulação), o algorítimo emergencial de anomalia é acionado para que o cofre se feche, e leve junto com ele um broto daquele coral onde o sistema estava instalado enquanto é movimentado pelo motor2. Enquanto isso, na central de comandos, um buzzer é acionado de um em um segundo para chamar a atenção dos que estão monitorando as temperaturas, e o local do sistema é enviado para a central poder reunir autoridades o mais rápido possível para o local.

## Conexões
### Sensor de Temperatura DS18B20

Pino VCC -> VCC da Protoboard 1
Pino GND -> GND da Protoboard 1
Pino Data -> Pino digital 13 do Arduino, passando antes por um VCC e um resistor de 4,7K (Caso coloque em outro pino digital lembre de trocar no codigo o define para: "#define dados (suaPorta)"


### Servo do Cofre

Pino VCC -> VCC da Protoboard 1
Pino GND -> GND da Protoboard 1
Pino PWM -> Pino digital PWM 6 (podendo ser alterado por qualquer outro pino na variável guardaCoral)

### Servo de deslocamento

Pino VCC -> VCC da Protoboard 1
Pino GND -> GND da Protoboard 1
Pino PWM -> Pino digital PWM 5 (podendo ser alterado por qualquer outro pino na variável nadador)

### Buzzer

Pino VCC -> VCC da Protoboard 2
Pino GND -> GND da Protoboard 2 ligado por um resistor de 100R

## Link para o simulador e vídeo explicativo

Simulador: https://wokwi.com/projects/399272974141109249

Vídeo: https://youtu.be/-L5Qj0GAecQ


