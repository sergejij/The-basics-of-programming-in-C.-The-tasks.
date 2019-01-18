#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int s,e;
  scanf("%d", &s);
  scanf("%d", &e);
  srand(time(NULL));
  printf("%ld\n", s + random()%(e-s + 1));
  return 0;
}