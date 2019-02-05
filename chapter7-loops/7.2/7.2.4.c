#include <stdio.h>

//Необходимо найти максимальный и минимальный элемент последовательности, неизвестной длины 

int main() {
  int number, bigger = -9999, younger = 9999;
  scanf("%d", &number);
  
  while (number != 0) {
      if (number > bigger) {
          bigger = number;
      } 
      if (number < younger) {
          younger = number;
      }
      scanf("%d", &number);
  }
 
  printf("%d %d\n", bigger, younger);
  return 0;
}
