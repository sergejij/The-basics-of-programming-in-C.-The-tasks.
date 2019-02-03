#include <stdio.h>
#include <math.h>

// В некоторых случаях под килобайтом понимается 103=1000 байт, а в других 210=1024 байт.
// Согласно Википедии для USB-флешек используются десятичные приставки (степени 10). 
// Напишите программу, которая вычисляет на сколько байт коммерсанты обманывают потребителя при покупке им USB-флешки на K - гигабайт.

int main() {
  double k, binarGig, decimalGig,result;
  scanf("%lf", &k);
    
  binarGig = pow(2, 30) * k;
  decimalGig = pow(10, 9) * k;
  result = binarGig - decimalGig;
  
  printf("%.0lf\n", result);
  return 0;
}
