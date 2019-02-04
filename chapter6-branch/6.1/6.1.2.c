#include <stdio.h>
#include <locale.h>

// Написать программу, позволяющую получить словесное описание школьных отметок (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).

 
int main(void) {
  setlocale(LC_ALL, "");
  char num;  
  scanf("%c",&num);
  
  switch (num) {
      case '1': printf("плохо"); break;
      case '2': printf("неудовлетворительно"); break;
      case '3': printf("удовлетворительно"); break;
      case '4': printf("хорошо"); break;
      case '5': printf("отлично"); break;
      default: printf("Введите вашу оценку от 1 до 5"); break;
  }

    return 0;
}
