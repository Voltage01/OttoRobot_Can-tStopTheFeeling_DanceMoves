//----------------------------------------------------------------
//-- Otto Dance Can't Stop The Feeling by Ada Sarp Şahin
//-- Made for Otto DIY project
//-----------------------------------------------------------------
#include <Servo.h>
#include <US.h>
#include <Oscillator.h>
#include <Otto.h>
Otto Otto;
#define PIN_YL 2 //servo[2]
#define PIN_YR 3 //servo[3]
#define PIN_RL 4 //servo[4]
#define PIN_RR 5 //servo[5]

void setup() {
  Otto.init(PIN_YL,PIN_YR,PIN_RL,PIN_RR,true);
  Otto.sing(S_connection); //Otto wake up!
  Otto.home();
  delay(50);
}

void loop() {
  Otto.swing(4,1000,30);
  delay(400);
  Otto.updown(3,1000,30);
  delay(500);
  Otto.swing(4,1000,30);
  delay(400);
  Otto.updown(3,1000,30);
  Otto.home();
  delay(1000);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jump(1,700);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jump(1,700);
  Otto.home();
  Otto.jump(1,1000);
  Otto.moonwalker(1,2000,30,1);
  Otto.moonwalker(1,2000,30,-1);
  Otto.moonwalker(1,2000,30,1);
  Otto.moonwalker(1,2000,30,-1);
  Otto.moonwalker(1,2000,30,1);
  Otto.ascendingTurn(2,2000,30);
  delay(1500);
  Otto.home();
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.home();
  Otto.jitter(4,1000,30);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.home();
  Otto.jitter(4,1000,30);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,-1);
  Otto.home();
  Otto.swing(2,1000,30);
  Otto.jitter(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.walk(2,1000,-1);
  Otto.swing(2,1000,30);
  Otto.jitter(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.walk(2,1000,-1);
  delay(700);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jump(1,700);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jump(1,700);
  Otto.home();
  Otto.jump(1,1000);
  Otto.moonwalker(1,2000,30,1);
  Otto.moonwalker(1,2000,30,-1);
  Otto.moonwalker(1,2000,30,1);
  Otto.moonwalker(1,2000,30,-1);
  Otto.moonwalker(1,2000,30,1);
  Otto.ascendingTurn(2,2000,30);
  delay(1500);
  Otto.home();
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.home();
  Otto.jitter(4,1000,30);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.home();
  Otto.jitter(4,1000,30);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,-1);
  Otto.jitter(4,1000,30);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,-1);
  Otto.home();
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.swing(10,1000,30);
  delay(700);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jump(1,700);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.crusaito(1,1000,30,1);
  Otto.crusaito(1,1000,30,-1);
  Otto.flapping(1,1000,30,1);
  Otto.flapping(1,1000,30,-1);
  Otto.home();
  Otto.jitter(4,1000,30);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,-1);
  Otto.jitter(4,1000,30);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,1);
  Otto.updown(2,1000,30);
  Otto.walk(2,1000,-1);
  Otto.home();
  Otto.updown(4,1000,30);
  Otto.home();
  delay(10000);
}
