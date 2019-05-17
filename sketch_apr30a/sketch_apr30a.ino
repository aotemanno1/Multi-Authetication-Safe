int relay_input = 10;
int test_led = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(relay_input, OUTPUT);
  pinMode(test_led, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(relay_input, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(test_led, LOW);
  delay(3000);                       // wait for a second
  digitalWrite(relay_input, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(test_led, HIGH);
  delay(3000);                       // wait for a second
}
