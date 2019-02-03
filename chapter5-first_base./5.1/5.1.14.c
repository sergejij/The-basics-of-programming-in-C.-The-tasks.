#include <stdio.h>
#include <math.h>


int main() {
 long  int x, squareCirle, Sx, radiusOkr, hours;
  scanf("%ld", &x);

  Sx =   sqrt(4*x*x);
  hours =  Sx * 2 / 900;
    
  printf("%ld %ld\n",  Sx, hours);
  return 0;
}
