const int ledPin = 13; 
const int startValue = 5; 

// Function to flash the LED a specified number of times
void flashLED(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Smart Countdown Starting ==="); 

  for (int count = startValue; count > 0; count--) {
    Serial.print("Counter is: ");
    Serial.println(count);
    
    // Blink LED according to current counter value
    flashLED(count);
    delay(1000);
  }
  
  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Empty, as the task runs only once in setup
}