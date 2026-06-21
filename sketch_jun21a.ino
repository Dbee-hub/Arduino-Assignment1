const int LED_PIN = 13; 
int startValue = 5;

void flashLED(int times) {
  int flashCount = 0;

  while (flashCount < times) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(200);
    flashCount++; 
  }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");
  int count = startValue; 

  
  while (count > 0) {
    Serial.print("Counter is: ");
    Serial.println(count);
    
    flashLED(count); 
    delay(1000);         
    count--; 
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // Unused loop block
}