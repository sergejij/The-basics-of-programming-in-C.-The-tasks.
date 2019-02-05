#include <stdio.h>

//Вычислить сумму элементов последовательности, неизвестной длины.

int main() {
  int number, result = 0;
  scanf("%d", &number);
  while (number != 0) {
      result = result + number;
      scanf("%d", &number);
  }
  printf("%d\n", result);
  return 0;
}
