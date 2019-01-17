#include <math.h>
#include <stdio.h>

int main() {
  int first, second, result;
  scanf("%d", &first);
  scanf("%d", &second);
   
  result = fabs(second - first);
  printf("%d\n", result);
  return 0;
}