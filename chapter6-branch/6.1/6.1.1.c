#include <stdio.h>
#include <locale.h>

// Гилл Байт с прошлого раза чуть-чуть поднаторел в программировании. 
// Поверив в себя, он решил написать эмулятор сказки о богатыре. 
// Но, конечно, он был слишком самонадеян, плохо изучил теоретические основы урока, а потому всё напутал. Помогите ему исправить код, который он написал.


int main(void) {
  setlocale(LC_ALL, "");
  char s;  
  scanf("%c",&s);

  switch (s) {
    default  : break;
    case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
    case 'f' : printf("и себя и коня потеряешь!\n"); break; 
    case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
  }

  return 0;
}
