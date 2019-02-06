#include <stdio.h>

//Подсчитать количество цифр в записи натурального числа N.

int main() {
  int number, counter = 1;
  scanf("%d", &number);
  
  while (number >= 10)
  {
      number = number / 10;
      counter = counter + 1;
  }
  printf("%d\n", counter); 
  return 0;
}
