#include <stdio.h>

// Вывести последовательность чисел, поступившую на вход.
int main() {
  int number;
    
  do {
      scanf("%d", &number);
      printf("%d ", number);
  } while (number != -9999);
   
  return 0;
}
