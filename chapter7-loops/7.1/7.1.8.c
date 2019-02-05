#include <stdio.h>

// Измените программу, написанную на прошлом шаге таким образом, чтобы каждое число выводилось столько раз, каково его значение. Например, число 5 должно выводиться 5 раз. 

int main() {
  int a, b, counter;
  scanf("%d%d", &a, &b);
    
  for (int i = a; i <= b; i++) {
    for (int counter = 0 ;  counter < i; counter++) {
        printf("%4d",i);
    }
  }
  return 0;
}
