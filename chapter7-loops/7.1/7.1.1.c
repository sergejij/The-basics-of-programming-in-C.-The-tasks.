#include <stdio.h>

//  Написать программу выводящую на экран первые N натуральных чисел.

int main() {
  int num;
  scanf("%d", &num);
  
  for (int i = 1; i <= num; i++) {
    printf("%d ", i);
  }
  return 0;
}
