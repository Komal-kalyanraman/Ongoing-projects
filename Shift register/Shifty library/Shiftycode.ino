#include <Shifty.h>

// Declare the shift register
Shifty shift; 

void setup() {
  // Set the number of bits you have (multiples of 8)
  //shift.setBitCount(8);
  shift.setBitCount(16);

  // Set the clock, data, and latch pins you are using
  // This also sets the pinMode for these pins
  //shift.setPins(11, 12, 8);
  shift.setPins(7, 9, 8); 
}

void loop() {
  // writeBit works just like digitalWrite
  
  shift.writeBit(0, HIGH);
  delay(100);
  shift.writeBit(0, LOW);
  delay(100);
  
  shift.writeBit(1, HIGH);
  delay(100);
  shift.writeBit(1, LOW);
  delay(100);

  shift.writeBit(2, HIGH);
  delay(100);
  shift.writeBit(2, LOW);
  delay(100);

  shift.writeBit(3, HIGH);
  delay(100);
  shift.writeBit(3, LOW);
  delay(100);

  shift.writeBit(4, HIGH);
  delay(100);
  shift.writeBit(4, LOW);
  delay(100);

  shift.writeBit(5, HIGH);
  delay(100);
  shift.writeBit(5, LOW);
  delay(100);
  
  shift.writeBit(6, HIGH);
  delay(100);
  shift.writeBit(6, LOW);
  delay(100);
  
  shift.writeBit(7, HIGH);
  delay(100);
  shift.writeBit(7, LOW);
  delay(100);

  shift.writeBit(8, HIGH);
  delay(100);
  shift.writeBit(8, LOW);
  delay(100);
  
  shift.writeBit(9, HIGH);
  delay(100);
  shift.writeBit(9, LOW);
  delay(100);

  shift.writeBit(10, HIGH);
  delay(100);
  shift.writeBit(10, LOW);
  delay(100);

  shift.writeBit(11, HIGH);
  delay(100);
  shift.writeBit(11, LOW);
  delay(100);

  shift.writeBit(12, HIGH);
  delay(100);
  shift.writeBit(12, LOW);
  delay(100);

  shift.writeBit(13, HIGH);
  delay(100);
  shift.writeBit(13, LOW);
  delay(100);
  
  shift.writeBit(14, HIGH);
  delay(100);
  shift.writeBit(14, LOW);
  delay(100);
  
  shift.writeBit(15, HIGH);
  delay(100);
  shift.writeBit(15, LOW);
  delay(100);
}

