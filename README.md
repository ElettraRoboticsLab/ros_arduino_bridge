## Elettrino

Autore: Raimondo Sgrò

```
Motore Destro: Mot1
Motore Sinistro: Mot2

Aprire ponticelli motori P11 e P14
Collegare con Jumper:
- A1 - Pin2
- A2 - Pin3
- B1 - Pin4
- B2 - Pin12

  #define RIGHT_MOTOR_FORWARD  2//9
  #define RIGHT_MOTOR_BACKWARD 3//5
  #define LEFT_MOTOR_FORWARD   4//10
  #define LEFT_MOTOR_BACKWARD  12//6
  #define LEFT_MOTOR_SPEED   5//10
  #define RIGHT_MOTOR_SPEED  6//6

Encoder:
Motore Sinistro
  #define LEFT_ENC_PIN_A PB4  //Pin8  
  #define LEFT_ENC_PIN_B PB5  //Pin9  

Motore Destro  
  #define RIGHT_ENC_PIN_A PB6  //Pin10  
  #define RIGHT_ENC_PIN_B PB7   //Pin11  
```
