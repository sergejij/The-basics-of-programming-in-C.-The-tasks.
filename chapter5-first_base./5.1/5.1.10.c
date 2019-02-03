#include <stdio.h>
#include <math.h>

// Напишите программу, которая делает бит-реверс. 

int main() {
  int k, result;
  scanf("%d", &k);

    result = (k+1) % 2;
    printf("%d\n", result);
  return 0;
}
