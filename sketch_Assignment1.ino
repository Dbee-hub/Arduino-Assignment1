int LED_PIN = 13; // Changed to const to protect the pin assignment
int startValue = 5;

void flashLED(int times) {
  int flashCount = 0;
  // Keeps the exact same while loop mechanic
  while (flashCount < times) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(200);
    flashCount++; // In-place post-increment shorthand
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");
  int count = startValue; 

  // Keeps the exact same countdown while loop mechanic
  while (count > 0) {
    Serial.print("Counter is: ");
    Serial.println(count);
    
    flashLED(count); 
    delay(1000);         
    count--; // In-place post-decrement shorthand
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Unused loop block
}
