#include <stdio.h>

// Вычислить номер дня в невисокосном году по заданным числу и месяцу. 

  int main() {
  int month, day,  numberDay;
  scanf("%d", &month);
  scanf("%d", &day);
  
  switch (month) {
      case 1: numberDay = day; break; 
      case 2: numberDay = day + 31; break; 
      case 3: numberDay = day + 31 + 28; break; 
      case 4: numberDay = day + 31 + 28 + 31; break; 
      case 5: numberDay = day + 31 + 28 + 31 + 30; break; 
      case 6: numberDay = day + 31 + 28 + 31 + 30 + 31; break;
      case 7: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30; break; 
      case 8: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30 + 31; break; 
      case 9: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; break; 
      case 10: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; break; 
      case 11: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; break; 
      case 12: numberDay = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30; break;
  }
    printf("%d", numberDay);
  return 0;
}
