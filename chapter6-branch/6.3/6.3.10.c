#include <stdio.h>

// Написать программу, моделирующую работу лифта, находящегося на первом этаже. 
// Допустим, что каждый заходящий в кабину лифта человек нажимает кнопку с номером этажа. 
// После этого лифт определяет наиболее быстрый порядок транспортирования пассажиров, расставляя соответствующим образом этажи, на которых он должен остановиться. 

int main() {
  // put your code here
  int a,b,c;
  scanf("%d%d%d", &a,&b,&c);
    if (a == b && a == c) {
         printf("%d %d %d", c, b, a);
    }
    
    if (a >= b && a >= c) {
        if (b > c) {
            printf("%d %d %d", c, b, a);
        } else {
            printf("%d %d %d", b, c, a);
        }
    }
    
    if (b > a && b >= c) {
        if (a > c) {
            printf("%d %d %d", c, a, b);
        } else if(b == c) {
            printf("%d %d %d", a, c, b);
        }
        else if (c > a)  {
            printf("%d %d %d", a, c, b);
        } else {
            printf("%d %d %d", c, a, b);
        }
    }
    
    if (c > a && c > b) {
        if (b > a) {
            printf("%d %d %d", a, b, c);
        } else  {
            printf("%d %d %d", b, a, c);
        }
    }
  return 0;
}
