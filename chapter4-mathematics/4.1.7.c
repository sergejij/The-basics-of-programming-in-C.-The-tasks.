#include <stdio.h>

// Напишите программу, определяющую нечётные числа.
// На вход одно целое неотрицательное число.
// Программа должна вывести 0, если число нечётное, и 1, если число чётное.


int main() {
	int number, result;
	scanf("%d\n", &number);

	result = (number - 1) % 2;
	printf("%d\n", result);

	return 0;
}