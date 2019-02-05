#include <stdio.h>

//Вывести все числа из промежутка [A;B],(B>A). При этом число A должно выводиться 1 раз, число A+1 -- два раза, A+2 -- три раза и т.д.

int main() {
  int a, b, counter;
  scanf("%d%d", &a, &b);
    
  for (int i = a; i <= b; i++) {
    for (int counter = a - 1;  counter < i; counter++) {
        printf("%5d",i);
    }
  }
  return 0;
}
