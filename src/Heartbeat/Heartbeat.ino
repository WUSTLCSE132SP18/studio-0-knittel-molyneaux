/* helloworld
 *
 * output simple hello message
 *
 */
const int pin = 13;
int last;
void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello, world!");
}

void loop() {
  last = millis();
  delay(950);
  digitalWrite(pin, HIGH);
  delay(50);
  digitalWrite(pin,LOW);
  int x = millis();
  Serial.println(x - last);
  //Serial.print(x);
  //Serial.println(" seconds have elapsed");
  
}
