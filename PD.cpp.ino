//Reaction wheel code
//+-90 degrees
/*
 * This code is not for a Z axis respond reaction wheel, It can only go to +-90 in this code.
 * But you can modify it if you would like.
 */


//Libs
#include <L298N.h>
#include <Arduino.h>

//Pin def
#define DCMOTORDRIVERL298_PIN_INT1  0
#define DCMOTORDRIVERL298_PIN_ENB   4
#define DCMOTORDRIVERL298_PIN_INT2  1
#define DCMOTORDRIVERL298_PIN_ENA   3
#define DCMOTORDRIVERL298_PIN_INT3  2
#define DCMOTORDRIVERL298_PIN_INT4  5

//start
DCMDriverL298 dcMotorDriverL298(DCMOTORDRIVERL298_PIN_ENA,DCMOTORDRIVERL298_PIN_INT1,DCMOTORDRIVERL298_PIN_INT2,DCMOTORDRIVERL298_PIN_ENB,DCMOTORDRIVERL298_PIN_INT3,DCMOTORDRIVERL298_PIN_INT4);

const int timeout = 5;
char menuOption = 0;
long time0;

void setup() {
 
  menuOption = menu
}

void loop() {
  if(menuOption == '1') {
    dcMotorDriverL298.setMotorA(200,1);
    delay(10);
    dcMotorDriverL298.stopMotors();
    
  }
  if(millis() - time0 > timeout)
  {
    menuOption = menu();
  }
}
