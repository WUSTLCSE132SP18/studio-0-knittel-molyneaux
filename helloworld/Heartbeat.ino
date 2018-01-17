/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  int x = millis();
  Serial.print(x);
  Serial.println(" seconds have elapsed.");
}
