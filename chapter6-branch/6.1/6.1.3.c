#include <stdio.h>
#include <locale.h>

// Написать программу, определяющую результат гадания на ромашке по количеству лепестков на ней.
// Одна строка в зависимости от результата: Любит или Не любит.

int main() {
    setlocale(LC_ALL, "");
 
    int number;
    scanf("%d", &number);
    
    switch (number%2) {
        case 1: printf("Любит"); break;
        case 0: printf("Не любит"); break;
    }
  return 0;
}
