#include <Servo.h>

// C++ code
//

Servo servo1;

void setup()
{
  servo1.attach(2);
}

void loop()
{
 int pot1 = analogRead(A0);
  
  int aci1 = map(pot1,0,1023,0,280);
  
  servo1.write(aci1);
  delay(15);
}