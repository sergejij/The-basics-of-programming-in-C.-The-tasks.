#include <stdio.h>
#include <math.h>

// Определить является ли натуральное число чётным или нечётным. Число 1, если k -- чётное и −1, если k -- нечётное.
int main() {
  int number,result;
  scanf("%d", &number);
  result = number%2 * (-2) + 1;
  printf("%d\n", result);
  return 0;
}
