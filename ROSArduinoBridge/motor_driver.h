/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L6207_MOTOR_DRIVER
  #define RIGHT_MOTOR_FORWARD  2//9
  #define RIGHT_MOTOR_BACKWARD 3//5
  #define LEFT_MOTOR_FORWARD   4//10
  #define LEFT_MOTOR_BACKWARD  12//6
  #define LEFT_MOTOR_SPEED   5//10
  #define RIGHT_MOTOR_SPEED  6//6

#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
