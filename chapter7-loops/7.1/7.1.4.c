#include <stdio.h>

// Вывести через пробел все целые числа из промежутка [A,B],(A<B) в обратном порядке: от B до A. 

int main() {
    int first, last;
    scanf("%d%d", &first, &last);
    
    
    for (int i = last; i >= first; i--) {
        printf("%d ", i);
    }
    
    return 0;
}
