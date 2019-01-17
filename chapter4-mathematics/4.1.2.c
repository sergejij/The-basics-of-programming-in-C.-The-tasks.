#include <stdio.h>

// На вход программы поступают два целых числа — длины сторон прямоугольника. 
// Посчитайте периметр этого прямоугольника.

int main() {
  int a, b, res;
  printf("Put first side\n");
  scanf("%d", &a);
    
  printf("Put second side\n");
  scanf("%d", &b);
    
  res = (a * 2) + (b * 2);
  printf("Perimetr: %d\n", res);    
  return 0;
}