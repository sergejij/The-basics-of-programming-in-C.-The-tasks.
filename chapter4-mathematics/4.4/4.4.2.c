#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int N;
  scanf("%d", &N);
  srand(time(NULL));
  printf("%ld\n", 0 + random()%(N-1));
  return 0;
}