#include <stdio.h>

// Написать программу, вычисляющую плату за пользование телефоном для введенного времени разговоров за месяц. 

int main() {
  int minute, freeMinute;
  scanf("%d", &minute);
  freeMinute = 500;
    if(minute <= freeMinute) {
         printf("350\n");   
    } else {
         printf("%d\n", 350 + (minute - freeMinute) * 2);   
    }
  return 0;
}
