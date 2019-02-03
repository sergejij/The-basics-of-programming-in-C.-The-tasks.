#include <stdio.h>
#include <math.h>

// Напишите программу, вычисляющую значение ex двумя способами.

int main() {
  double x;
  double result1, result2;
  scanf("%lf", &x);
    
  result1 = exp(x);
  result2 = (double) 1 + (double)x/1 + (double)pow(x, 2)/2 +  (double)pow(x, 3)/6 +  (double)pow(x, 4)/24 +  (double)pow(x, 5)/120;  
  printf("%.6lf\n%.6lf\n", result1, result2);
  return 0;
}
