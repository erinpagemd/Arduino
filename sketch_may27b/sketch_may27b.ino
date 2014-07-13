int led = 3;
//yj Integer representing dit (morse ' . ')
int dit = 500;
//yj Interger representing dah (morse ' - '>)
//yj Testing a multiple of another constant integer to make the timing scalable.
int dah = dit*3;
int blankTime = 100;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dah);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dit);               // wait
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(blankTime);               // wait
}

