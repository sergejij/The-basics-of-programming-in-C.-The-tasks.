#include <stdio.h>

// Даны три числа. Подсчитать количество положительных среди этих чисел.
 
int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
    
    if ((a == 2 || a == 8 || a == 4) && (b == 2 || b == 8 || b == 4) && (c == 2 || c == 8 || c == 4)) {
        printf("open\n");
    } else {
         printf("close\n");   
    }
  return 0;
}
