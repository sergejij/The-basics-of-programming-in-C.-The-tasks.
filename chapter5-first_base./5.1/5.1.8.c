#include <stdio.h>


// Найти частное произведений цифр, сооветствующих четным и нечетным разрядам четырехзначного числа.

int main() {
  // put your code here
  int num, first, second, third, fourth;
  float  result;
  scanf("%d", &num);
  fourth = num / 1000;
  third = (num % 1000) / 100;
  second = (num % 100) / 10;
  first = num % 10;

  result = (float)  (second * fourth) / (first * third);
  printf("%.2f\n", result);
  return 0;
}
