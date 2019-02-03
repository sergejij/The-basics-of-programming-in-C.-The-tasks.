#include <stdio.h>
#include <math.h>

// .Напишите программу, вычисляющую значение числа e используя 4, 5 и 6 членов суммы. 

int main() {
  // put your code here
  double e4, e5, e6;
  e4 =  (double) 1 + (double)1/1 + (double)1/2 + (double)1/6;
  e5 =  (double) 1 + (double)1/1 + (double)1/2 + (double)1/6 + (double)1/24;
  e6 =  (double) 1 + (double)1/1 + (double)1/2 + (double)1/6 + (double)1/24 + (double)1/120;
 
  printf("%.5lf\n%.5lf\n%.5lf\n", e4, e5, e6);  
  return 0;
}
