#include <stdio.h>


// Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа. 

int main() {
  // put your code here
    int num, newFirst, newSecond, newThird;
    scanf("%d", &num);
    
    newFirst = num % 10;
    newSecond = (num % 100) / 10;
    newThird = num / 100;
    printf("%d%d%d\n", newFirst, newSecond, newThird);
  return 0;
}
