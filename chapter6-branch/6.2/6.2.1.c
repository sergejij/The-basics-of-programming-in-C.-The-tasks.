#include <stdio.h>

// Напишите программу сравнивающие два целых числа.

int main() {

  int first, second, result;
  scanf("%d", &first);
  scanf("%d", &second);
    
  switch (first == second) {
      case 1: printf("1\n");break;
      case 0: printf("0\n");break;
  }
  return 0;
}
