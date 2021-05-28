int LEDV = 13;
int pin = 3; 
long tiempo1=0;
long tiempo2=0; 
int LEDR = 8;

void setup() {
  Serial.begin(9600);//iniciailzamos la comunicación
attachInterrupt(digitalPinToInterrupt(pin), can, RISING);
}
void loop()
{  
 
}
