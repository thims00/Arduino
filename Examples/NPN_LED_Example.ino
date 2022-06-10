/*
 * 3 LED's, 3 NPN Transistors, 3 220 Ohm Resistors. 
 * 
 * NPN Transistor hookup
 *  
 *  5v -> NPN Collector (Left, facing flat side)
 *  
 *  D3, D4, D5, ... -> Base (Middle)
 *  
 *  NPN Emittor (Right) -> 220 Ohm Resistor -> GND
 */


void setup() {
  // Set pin 2, 3, 4 to be operated as OUTPUT's
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // Turn on output's to engage the transistors
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
}
