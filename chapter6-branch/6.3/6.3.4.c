#include <stdio.h>

// Составить программу, определяющую, которая из точек находится ближе к началу координат.
 
int main() {
  // put your code here
  int x1, y1, x2, y2;
    float r1, r2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
  r1 = sqrt(x1*x1 + y1*y1);
  r2 = sqrt(x2*x2 + y2*y2);
    
  if(r1 < r2) {
    printf("1\n");
      return 0;
  }
  printf("2\n");
  return 0;
}
