#include <OneWire.h>
#include <Servo.h>
#include <DallasTemperature.h>
#include <Wire.h>

int guardaCoral = 6;
int buzz = 12;
int nadador = 5;

Servo motor;
Servo motor2;

#define dados 13
// protocolos onewire e refs para sensor
OneWire oneWire(dados);
DallasTemperature sensors(&oneWire);



void setup() {


  pinMode(guardaCoral, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
  sensors.begin();
  motor.attach(guardaCoral);
  motor2.attach(nadador);
}

void loop() {
  sensors.requestTemperatures();
  Serial.print("A temperatura é de : ");
  Serial.print(sensors.getTempCByIndex(0));
  Serial.println(" °C");
  delay(1000);

  if (sensors.getTempCByIndex(0) > 35){

    motor2.write(180);
    motor.write(180);
    tone(buzz, 440);
    delay(1000);
    noTone(buzz);
    motor2.write(0);

    Serial.print("ANOMALIA DETECTADA EM: ");
    Serial.println("GRANDE BARREIRA DE CORAIS - AUSTRALIA - 20°01'44.8 S 149°44'31.4 E");
  }
  else{
    motor.write(0);
  }
}
