#include <stdio.h>
#include <math.h>

//По заданному N вывести через пробел все (натуральные, т.е. 1,2,3,… ) степени числа 2, для которых k в стемени 2 ≤ N.

int main() {
  int number;
  scanf("%d", &number);
  
  int counter = 1;
  while ( pow(2, counter) <= number )
  {
      printf("%d ", counter);
      counter = counter + 1;
  }
  printf("\n");
  return 0;
}
