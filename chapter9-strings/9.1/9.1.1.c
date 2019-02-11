#include <stdio.h>

int main() {
  char symbol, bigSymbol;
  scanf("%c", &symbol);
    
  bigSymbol = symbol - 32;
  printf("%c\n", bigSymbol);
  
  return 0;
}
