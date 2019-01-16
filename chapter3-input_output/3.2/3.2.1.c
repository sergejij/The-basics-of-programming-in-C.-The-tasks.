#include <stdio.h> 
int main(void) {
	printf("(a + b) - c\n\n");
  int a, b, c, res;
    printf("Put a: ");
    scanf("%d", &a);

    printf("Put b: ");
    scanf("%d", &b);

    printf("Put c: ");
    scanf("%d", &c);

  res = (a + b) - c;

  printf("Result:%d\n", res);
  return 0;
}