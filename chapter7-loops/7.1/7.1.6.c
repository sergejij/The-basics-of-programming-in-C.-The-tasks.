#include <stdio.h>

// Посчитать значение N-го числа Фибоначчи.

int main() {
  int f1=1, f2=1, m;
    scanf("%d", &m);
    for (int n=1; n<=m; n++)
    {
    	f2=f1+f2;
    	f1=f2-f1;
    }
    printf("%d\n", f2-f1);
  return 0;
}
