#include <stdio.h>
#include <math.h>

// Написать программу, вычисляющую площадь треугольника по трём сторонам.

int main() {
  double a,b,c,result, p;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  p = (a + b + c) / 2;
  result = sqrt (p * (p-a) * (p-b) * (p-c));
    printf("%.2lf\n", result);
  return 0;
}