#include <stdio.h>
#include <math.h>

// Идёт k секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток. 

int main() {
  int seconds, minutes, hours;
  scanf("%d", &seconds);

  hours = seconds/3600;
  minutes =  (int)seconds % 60;
  printf("%d %d\n", hours, minutes);
  return 0;
}