#include <stdio.h>

// Модифицируйте данную программу так, чтобы она дополнительно принимала и учитывала сведения о половой принадлежности человека. 

  int main(void){
  char pol;
  int age, height, weight;
  double bov_m, bov_f;
    
  scanf("%c", &pol); 
  scanf("%d", &age); // считываем целое значение в переменную age
  scanf("%d", &height); // считываем  значение в переменную height
  scanf("%d", &weight); // считываем значение в переменную weight

  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
  
  switch (pol) {
      case 'm': 
          printf("|  BMR  |\n");
          printf("|%7.2f|\n",bov_m);
          break;
      case 'f': 
          printf("|  BMR  |\n");
          printf("|%7.2f|\n",bov_f);
          break;
      default: printf("ERROR!");
  }


  return 0;
}
