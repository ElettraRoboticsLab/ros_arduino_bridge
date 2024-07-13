/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required

  //NB rimappare i pin motori
  #define LEFT_ENC_PIN_A PB4  //IO8  //PD2  //pin 2
  #define LEFT_ENC_PIN_B PB5  //IO9  //pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PB6  //IO10   //
  #define RIGHT_ENC_PIN_B PB7   //IO11  //
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

