long tiempo1=0;
long tiempo2=0;
int led=4;

void setup()
{
 Serial.begin(9600);
 pinMode(led, OUTPUT);
}

void loop()
{
 tiempo1 = millis();
  if((tiempo1-tiempo2)>2000){
    tiempo2=tiempo1;
 digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
 
  }
}
