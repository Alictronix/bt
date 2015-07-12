int LED = 8;

char incomingByte;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Press 1 to LED ON or 0 to LED OFF...");
}

void loop() {
   if (Serial.available() > 0) {  // if the data came
    incomingByte = Serial.read(); // read byte
    if(incomingByte == '0') {
       digitalWrite(LED, LOW);  // if 1, switch LED Off
       Serial.println("LED OFF. Press 1 to LED ON!");  // print message
    }
    if(incomingByte == '1') {
       digitalWrite(LED, HIGH); // if 0, switch LED on
       Serial.println("LED ON. Press 0 to LED OFF!");
    }
   }
}
