#include <stdio.h>

// Для заданного числа n вывести все его делители и их количество на экран.

int main() {
  int number, counter = 0;
  scanf("%d", &number);
    
  for (int k = 1; k <= number; k++) {
    if ((number%k) == 0) {
        printf("%d ", k);
        counter = counter + 1;
    }
  }
    printf("\n%d\n", counter);
  return 0;
}
