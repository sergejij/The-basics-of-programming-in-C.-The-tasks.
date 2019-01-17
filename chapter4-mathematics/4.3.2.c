#include <stdio.h>
#include <math.h>

// Расставить скобки так, чтобы выражению со скобками соответствовала дробь

int main(void)
{
	double a,b,c,d,e,f,h, res;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);
	scanf("%lf", &e);
	scanf("%lf", &f);
	scanf("%lf", &h);

	res = a/(b*c/(d*e/(f*h)));  
	printf("%.2f\n", res);

  	return 0;
}