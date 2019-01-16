#include <stdio.h>
int main(void){
  double rub;
  double kurs, dollars;
  
  scanf("%lf", &dollars);
  scanf("%lf", &kurs);
  
  rub = dollars*kurs;
  printf("%.13lf\n", rub);
  return 0;
}