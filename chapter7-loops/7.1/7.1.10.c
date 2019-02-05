#include <stdio.h>

// Для заданного числа n проверить, является ли оно простым.

int main() {
  int number;
  scanf("%d", &number);
    if (number < 3) {
        printf("%d\n", 1);
        return 0;
    }
    for (int k = 2; k < number; k++) {
        if ((number % k) == 0) {
            printf("%d\n", 0);
            return 0;
        }
         
    }
    printf("%d\n", 1);
  return 0;
}
