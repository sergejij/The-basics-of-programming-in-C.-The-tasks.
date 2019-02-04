#include <stdio.h>

// Напишите программу-калькулятор для четырёх основных арифметических действий.

int main() {
  char sign;
  int a, b;
    float result;
  scanf("%c", &sign);
    scanf("%d", &a);
    scanf("%d", &b);
  
    switch (sign) {
        case '+': result =  a + b; printf("%.2f", result); break; 
        case '-': result =  a - b; printf("%.2f", result); break;
        case '*': result =  a * b; printf("%.2f", result); break;
        case '/': result =  a / b; printf("%.2f", result); break;
        default: printf("ERROR!"); break;
        
    }
    
  return 0;
}
