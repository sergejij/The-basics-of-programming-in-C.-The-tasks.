#include <stdio.h>

// На вход программы поступает целое трёхзначное число. 
// Напишите программу, которая выводит сумму цифр этого числа.

int main() {
  int number, first, second, third, res;
  scanf("%d", &number);
  
  first = (int) number / 100;
  second = (number % 100) / 10;
  third = number % 10;
  
  res = first + second + third;
  printf("%d\n", res);
  return 0;
}