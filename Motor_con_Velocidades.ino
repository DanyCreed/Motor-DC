int In = A2;
int valor = 0;
int transistor = 3;
void setup(){
  pinMode(transistor, OUTPUT);
  
}

void loop(){
  valor = analogRead(In);
  analogWrite(transistor, valor/5);
}
