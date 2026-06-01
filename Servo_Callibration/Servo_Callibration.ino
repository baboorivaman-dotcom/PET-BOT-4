#include <Servo.h>   

Servo servo[4][3];

// Define servos' ports
const int servo_pin[4][3] = { {3, 4, 2}, {6, 7, 5}, {9, 8, 10}, {12, 11, 13} };

void setup()
{
  // Initialize all servos and set them to the calibration position (90 degrees)
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
      
      // Move servo to default calibration angle immediately after attaching
      servo[i][j].write(90);
      delay(20);
    }
  }
}

void loop(void)
{
  // Keeping loop empty because calibration only needs to run once during setup.
  // This prevents continuous servo writing and hardware strain.
}