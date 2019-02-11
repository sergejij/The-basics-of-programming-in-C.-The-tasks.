#include <stdio.h>

int main() {
  char symbol;
  scanf("%c", &symbol);
    
  int i = symbol;
  printf("%c ", symbol - 1);
  printf("%c\n ", symbol + 1);
  return 0;
}
