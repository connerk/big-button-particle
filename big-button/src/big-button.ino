/*
 * Project big-button
 * Description:
 * Author:
 * Date:
 */

// pins
int LED_PIN = D6 // LED to ground
// D0 => button to ground, Normal open, (set to high)

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(LED_PIN, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  // To blink the LED, first we'll turn it on...
  digitalWrite(LED_PIN, HIGH);

  // We'll leave it on for 1 second...
  delay(1000);

  // Then we'll turn it off...
  digitalWrite(LED_PIN, LOW);

  // Wait 1 second...
  delay(1000);

  // And repeat!
}