// nogen andres kode
#include <stdio.h>

#include <stdio.h>

int Control(int altitude) {
  int thruster = 0;

  // min kode

  // tjekker at altitude er både <=100 og >0  gælder, og tænder for thruster
  // hvis det er sandt
  if (altitude <= 100 && altitude > 0)
    thruster = 1;
  // hvis det overstående ikke gælder slukker denne for thruster
  else
    thruster = 0;

  // nogen andres kode
  return thruster;
}

void Test(int altitude) {
  int thruster = Control(altitude);
  int behaviorCorrect = (altitude > 100 && thruster == 0) ||
                        (altitude <= 100 && altitude > 0 && thruster == 1) ||
                        (altitude <= 0 && thruster == 0);
  char *behaviorCorrectIcon = behaviorCorrect ? "ja" : "nej";
  printf("For altitude %3d, your thruster is %d |%s|\n", altitude, thruster,
         behaviorCorrectIcon);
}

int main(void) {
  Test(150);
  Test(100);
  Test(50);
  Test(0);
  Test(-1);
}