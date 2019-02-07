#include <stdio.h>

//Переставить элементы массива в обратном порядке.

int main() {
  int n;
  scanf("%d", &n);
  int arrayNumbers[n];
  for (int i = 1; i <= n; i++) {
       scanf("%d", &arrayNumbers[i]);   
  }
   
  for (int i = n; i > 0; i--) {
        printf("%d ", arrayNumbers[i]);
  }
  return 0;
}
