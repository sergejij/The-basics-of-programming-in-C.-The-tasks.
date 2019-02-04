#include <stdio.h>

// Написать программу проверяющую, является ли правильной дробь A/B
 
int main() {
  int a, b, answer;
  scanf("%d", &a);
  scanf("%d", &b);
    
    if(a < b) {
        printf("yes\n");
    }
    else {
         printf("no\n");   
    }
  return 0;
}
