#include <stdio.h>

// Составьте программу подсчёта размера оплаты за 
// электроэнергию по показаниями счётчика и тарифу. 

int main() {
  int monthBegin, monthFinish;
  double costOne, result;

  scanf("%d\n", &monthBegin); 
  scanf("%d\n", &monthFinish);
  scanf("%lf\n", &costOne);

  result = (float) (monthFinish - monthBegin) * costOne;
  printf("%.2lf\n", result); 
  return 0;
}