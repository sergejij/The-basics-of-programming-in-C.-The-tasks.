#include <stdio.h>
#include <locale.h>

// Для целого числа K (от 1 до 99 включительно) напечатать фразу «Мне K лет», учитывая при этом, 
// что при некоторых значениях K слово «лет» надо заменить на слово «год» или «года». 
// Например, 11 лет, 22 года, 51 год.

int main() {
  setlocale(LC_ALL, "");
  int age, result;
  scanf("%d", &age);
  
  switch (age) {
      case 11:
      case 12:
      case 13:
      case 14: printf("Мне %d лет\n", age); break;
      default:
          
      switch (age%10) {
          case 2:
          case 3:
          case 4: printf("Мне %d года\n", age);
          break;  

          case 1: printf("Мне %d год\n", age);
          break;

          default: printf("Мне %d лет\n", age);
      }
  }
  return 0;
}
