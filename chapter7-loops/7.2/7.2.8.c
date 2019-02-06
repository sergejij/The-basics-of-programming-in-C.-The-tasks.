#include <stdio.h>
#include <math.h>

//Дано натуральное число N. Найти наименьшее натуральное число r, такое, что r в степени 2 ≥ N.

int main() {
  int number;
  scanf("%d", &number);
  
    if (number == 1)
    {
       printf("%d \n", 1);
       return 0; 
    }
  int counter = number;
  while ( pow(2, counter) >= number )
  {
      counter = counter - 1;
  }
  printf("%d \n", counter+1);
  return 0;
}
