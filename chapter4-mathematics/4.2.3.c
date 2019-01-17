#include <math.h>
#include <stdio.h>

int main() {
  double x1,y1,x2,y2,result, underResult;
  scanf("%lf", &x1);
  scanf("%lf", &y1);
  scanf("%lf", &x2);
  scanf("%lf", &y2);

  underResult = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
  result = sqrt(underResult);
  printf("result: %.2lf", result);
  return 0;
}