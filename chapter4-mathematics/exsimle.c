#include <stdio.h>

int swap(int a, int b); //Прототип функции swap

int main(void)
{
     int x = 1, y = 2;
     swap(x, y);
     printf("x is %i\n", x);
     printf("y is %i\n", y);
}

void swap(int a, int b)
{
     int tmp = a;
     a = b;
     b = tmp;
}