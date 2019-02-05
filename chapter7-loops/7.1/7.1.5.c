#include <stdio.h>

//Факториал. Для целого числа k(0≤k≤12) посчитать k!.

int main() {
  int k, counter=1;
  scanf("%d", &k);
  
  for (int i = 1; i <= k; i++) {
    counter = counter * i;
  }
    printf("%d\n", counter);
  return 0;
}
