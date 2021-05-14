int contador=0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2),Fcontador,CHANGE);
}

void loop()
{
  Serial.print("Numero de Cambio de estados=");
    Serial.println(contador);
}

void Fcontador(){
 contador=contador+1; 
}
