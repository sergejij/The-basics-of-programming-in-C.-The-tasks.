#include <stdio.h>

// Усовершенствуйте программу, написанную на прошлом шаге. Теперь она должна работать для любых целых чисел, включая случай, когда b=0.

int main() {
    char sign, space;
    int a, b;
      float result;
      scanf("%d", &a);
      scanf("%d", &b);
      scanf("%c", &space);
      scanf("%c", &sign);
      
     
     switch (sign) {
          case '+': result =  a + b; printf("%.2f", result); break; 
          case '-': result =  a - b; printf("%.2f", result); break;
          case '*': result =  a * b; printf("%.2f", result); break;
          case '/': 

             switch (b) {
                 case 0: printf("ERROR!"); break;
                 default: result = (double) a / b; printf("%.2f", result); break;
             }
             break;
          default: printf("ERROR!"); break;
          
      }
      
    return 0;
  }

