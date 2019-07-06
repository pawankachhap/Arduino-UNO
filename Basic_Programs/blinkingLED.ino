/* First arduino program
Blinking LED
*/

int ledpin = 13;

void setup()
{
  //initializing pin as output
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  digitalWrite(ledpin, HIGH);
  delay(500);  //delay of 500 ms
  digitalWrite(ledpin, LOW);
  delay(500);  //delay of 500 ms
}
