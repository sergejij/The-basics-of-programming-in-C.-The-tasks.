#include <stdio.h>

//Выведите на экран все точные квадраты натуральных чисел, не превосходящие данного числа N. Выводить квадраты следует от меньшего к большему.

int main() {
  int number, result = 1, counter = 1;
  scanf("%d", &number);

  while (counter * counter <= number) {
      result = counter * counter;
      printf("%d ", result);
      counter = counter + 1;
  }
  return 0;
}
