#include <stdio.h>

// Вывести все элементы последовательности, кроме заключительного -9999, на экран.

int main() {
  int number;
  scanf("%d", &number);
  while (number != -9999) {
      printf("%d ", number);
      scanf("%d", &number);
  }
  
  return 0;
}
