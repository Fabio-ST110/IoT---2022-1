#include <Servo.h>
#define SERVOI 10
#define SERVOII 11
#define POTENCIOMETROI A5
#define POTENCIOMETROII A0

int readA5;
int readA0;

long servI = 0;
long servII = 0;

Servo servoI;
Servo servoII;
  
void setup()
{
  pinMode(POTENCIOMETROI, INPUT);
  pinMode(POTENCIOMETROII, INPUT);
  servoI.attach(SERVOI);
  servoII.attach(SERVOII);
}
void loop()
{
	readA5 = analogRead (POTENCIOMETROI); // Lê o valor do potenciometro
  	readA0 = analogRead (POTENCIOMETROII);
  
	servI = map(readA5, 0, 1023, 180, 0); // converte o valor do potenciometro para o angulo do servomotor
  
 	servII = map(readA0, 0, 1023, 180, 0);
  
    servoI.write(servI); // escreve no servomotor o angulo que ele deve executar
  	servoII.write(servII);

}