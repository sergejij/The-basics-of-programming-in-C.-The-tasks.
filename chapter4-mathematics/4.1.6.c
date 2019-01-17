#include <stdio.h>

// Напишите программу, определяющую нечётные числа.
// На вход одно целое неотрицательное число.
// Программа должна вывести 1, если число нечётное, и 0, если число чётное.

// int main() {
//   int number;
//   scanf("%d/n", &number);

//   if (number % 2 == 0) {
//   	printf("0\n");
//   	return 0;
//   }
//   printf("1\n");
//   return 0;
// }

int main() {
	int number, result;
	scanf("%d\n", &number);

	result = number % 2;
	printf("%d\n", result);

	return 0;
}