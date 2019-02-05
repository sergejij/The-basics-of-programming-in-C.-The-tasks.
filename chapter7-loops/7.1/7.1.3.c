#include <stdio.h>

// Усовершенствовать программму, написанную на прошлом шаге. Дополнительно на отдельной строке вывести количество напечатанных чисел.


int main() {
    int first, last, counter = 0;
    scanf("%d%d", &first, &last);
    
    if (first <= 0) {
        first = 1;
    }
    for (int i = first; i <= last; i++) {
        printf("%d ", i);
        counter = counter + 1;
    }
    printf("\n%d\n", counter);
    return 0;
}
