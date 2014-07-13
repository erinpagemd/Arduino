void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
  int Sup = random(100);
  Serial.println(Sup);
  
  if(Sup%2==0)
    digitalWrite(3, HIGH);
  else
    digitalWrite(3, LOW);
    delay(25);
  if(Sup%2==0)
    digitalWrite(5, HIGH);
  else
    digitalWrite(5, LOW);
    delay(50);
  if(Sup%2==0)
    digitalWrite(4,HIGH);
  else
    digitalWrite(4, LOW);
    delay(100);
}
