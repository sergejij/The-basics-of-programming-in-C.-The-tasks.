#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Перепишите программу так, чтобы она выдавала случайно одно из чисел 0, 1 или 2.

int main(void){
    srand(time(NULL));
    int rand_digit = rand();
    printf("%d\n",0 + rand_digit%2);
    return 0;
}