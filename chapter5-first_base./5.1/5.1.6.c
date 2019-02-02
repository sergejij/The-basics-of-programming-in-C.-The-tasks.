#include <stdio.h>
#include <math.h>

// Даны натуральные числа M и N.
// Вывести младшую цифру целой части и старшую цифру дробной части числа M/N. 

int main() {
    int m, n, lastIntNum, firstFloatNum;
    scanf("%d",  &m);
    scanf("%d",  &n);
    
    lastIntNum = (m/n)% 10;
    firstFloatNum = (int)((double)m/n*10)%10;
    printf("%d %d\n", lastIntNum, firstFloatNum);
  return 0;
}