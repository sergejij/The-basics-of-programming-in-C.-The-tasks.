#include <stdio.h>

// Напишите программу переводящую угол из градусной меры в радианную.

int main() {
  int degrees;
  double rads, pi;
  pi = 3.1415926;
    
  scanf("%d\n", &degrees);
  rads = degrees * pi / 180;
  
  printf("%.2lf\n", rads);
  return 0;
}