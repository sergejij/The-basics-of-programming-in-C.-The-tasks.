#include <stdio.h>

//  Усовершенствуйте программу, написанную на прошлом шаге. Теперь необходимо вывести все натуральные числа из промежутка  [K,M],(K<M) 

int main() {
    int first, last;
    scanf("%d%d", &first, &last);
    
    if (first <= 0) {
        first = 1;
    }
    for (int i = first; i <= last; i++) {
        printf("%d ", i);
    }
    return 0;
}
