void setup(){
  Serial.begin(9600);
}

void loop(){
Serial.println("Funcionamiento OK");
  delay(1000);
}

void serialEvent(){
   String lectura = Serial.readString();
  if(lectura==("hola")){
    Serial.println("Full picadillo pa");
  }else{
    Serial.println("MMMMM no");
  }
}
