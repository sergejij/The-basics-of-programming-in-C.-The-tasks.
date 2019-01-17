#include <stdio.h>
#include <math.h>

// Написать программу, вычисляющую площадь 
// треугольника по двум сторонам и углу между ними.

int main() {
  double a, b, degreeGrad, degreeRad, result, pi = 3.141593;
  
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &degreeGrad);
    degreeRad = (degreeGrad/ 180) * pi;
  result = 1.0/2.0 * a * b * sin(degreeRad); 
    printf("%0.2lf\n", result);
  return 0;
}