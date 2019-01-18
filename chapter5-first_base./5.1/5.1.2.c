#include <stdio.h>
#include <math.h>

// Составить программу вычисления объема цилиндра и конуса, 
// которые имеют одинаковую высоту h и одинаковый радиус основания r.

int main() {
  int radius, height;
  double volumeOfCylinder, volumeOfCone, pi = 3.14159265358979323846;
  
  scanf("%d", &radius);
  scanf("%d", &height);

  volumeOfCylinder = height * pi * radius * radius;
  volumeOfCone = (height * pi / 3) * radius * radius;

  printf("%.2lf %.2lf\n", volumeOfCylinder, volumeOfCone);
  return 0;
}