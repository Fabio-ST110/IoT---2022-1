// IoT - tarefa fazer o led piscar sem usar delay()

// Alunos
// 
// Fabio Rocha
// David Elias 
// Tales Victor
// Guilerme Godoi

#define led_1 13

long tempoDecorrido = 0; 

unsigned long tempoAtual;

long tempoLed_1 = 1000;
void setup()
{   
  pinMode(led_1, OUTPUT);
}

void loop() 
{
  tempoAtual = millis(); 
  
  if (tempoAtual - tempoDecorrido > tempoLed_1){
    
    tempoDecorrido = tempoAtual;                
    digitalWrite(led_1, !digitalRead(led_1)); 
  }
}
