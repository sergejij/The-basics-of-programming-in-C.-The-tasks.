#include <stdio.h>

// Кнопочный электронный кодовый замок имеет десять кнопок. 
// Каждая из кнопок имеет свой порядковый номер от 0 до 9. Правильный код 1024 зашит внутрь замка. 
// Человек, который хочет открыть дверь, должен ввести на циферблате последовательно 1, 0, 2 и 4. 
// Напишите программу, моделирующую работу такого замка. 

int main() {
  int first, second, third, fourth;
  scanf("%d%d%d%d", &first, &second, &third, &fourth);
    if(first == 1 && second == 0 && third == 2 && fourth == 4) {
        printf("open\n");
    } else {
        printf("close\n");   
    }
  return 0;
}