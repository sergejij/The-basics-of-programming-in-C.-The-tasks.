#include <stdio.h>

// Напишите программу считающую произведение цифр заданного k-значного числа X.

int main() {
  int k, x, result;
  scanf("%d", &k);
  scanf("%d", &x);
    
  switch(k) {
      case 1: 
          result = x;
          break;
      case 2:
          result = (x / 10) * (x % 10);
          break;
      case 3:
          result = (x / 100) * ((x % 100) / 10) * (x % 10);
          break;
      case 4:
          result = (x / 1000) *((x % 1000) / 100) * ((x % 100) / 10) * (x % 10);
          break;
  }
    printf("%d\n", result);
  return 0;
}
