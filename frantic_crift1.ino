int led_red=5;
int led_yellow=6;
int led_green=7;
int on=500;
int off=500;
void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop()
{
  digitalWrite(led_red, HIGH);
  delay(on);
  digitalWrite(led_yellow, HIGH);
  delay(on);
  digitalWrite(led_yellow, LOW);
  delay(off);
  digitalWrite(led_yellow, HIGH);
  delay(on);
  digitalWrite(led_yellow, LOW);
  delay(off);
  digitalWrite(led_yellow, HIGH);
  delay(on);
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, LOW);
  delay(off);
  digitalWrite(led_green, HIGH);
  delay(on);
  digitalWrite(led_green, LOW);
  delay(off);
}