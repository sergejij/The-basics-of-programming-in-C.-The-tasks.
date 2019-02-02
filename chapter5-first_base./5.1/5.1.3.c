#include <stdio.h>
#include <math.h>

// Идёт k секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток. 

int main() {
  // put your code here
  int k, h, m, allMinuts;
  scanf("%d", &k);
  allMinuts = k / 60;
  h = allMinuts / 60;
  m = allMinuts % 60;
    
  printf("%d %d\n", h, m);
  
  return 0;
}
