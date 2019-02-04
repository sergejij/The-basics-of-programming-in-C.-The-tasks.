#include <stdio.h>

// Даны три числа. Подсчитать количество положительных среди этих чисел.
 
int main() {
  int a, b, c, counter=0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if (a > 0) {
       counter = counter + 1;   
  }
  if(b > 0) {
      counter = counter + 1;
  }
  if(c > 0) {
      counter = counter + 1;
  }
  printf("%d\n", counter);
  return 0;
}
