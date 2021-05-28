void setup(){
  Serial.begin(9600);
}

void loop(){

}

void serialEvent(){
  if(Serial.available()){
    Serial.println("Se ingresaron datos");
    char c = Serial.read();
  }
}
