// the setup routine runs once when you press reset:
int LED = 2;void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  pinMode(LED), OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);
   // print out the value you read:
  Serial.println(knobValue);

  if (knobValue >400)
  {
    digitalWrite(LED_BUILTIN, HIGH); //Turn LED on
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); //Turn Led off, keep it off
  }

  delay(100); //Small delay between reads for stability


}
