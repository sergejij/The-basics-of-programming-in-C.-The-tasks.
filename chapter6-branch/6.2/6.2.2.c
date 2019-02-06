#include <stdio.h>

// На координатной плоскости Oxy задана точка A(x,y). Необходимо указать квадрант, в котором она расположена. Номера квадрантов представлены на рисунке ниже.

int main() {
  float x,y;
  int numberKvadr;
  scanf("%f", &x);
  scanf("%f", &y);
  
  switch ((x>0)*1) {
      case 1:
          switch ((y>0)*1) {
              case 1:
                  printf("1\n");
                  break;
              case 0:
                  printf("4\n");
                  break;
          }
          break;
          
      case 0:
          switch ((y>0)*1) {
              case 1:
                  printf("2\n");
                  break;
              case 0:
                  printf("3\n");
                  break;
          }
  }
  return 0;
}
