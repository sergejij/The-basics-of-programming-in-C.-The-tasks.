#include <stdio.h>
#include <math.h>

// Напишите программу, которая по известным значениям внутреннего и внешнего 
// радиусов кольца вычисляет его ширину и площадь 

int main() {
	int radiusInside, radiusOutside;
	double widthCircle, squareCircle, squareOut,squareIns, pi = 3.14159265358979323846;
	scanf("%d", &radiusInside);
	scanf("%d", &radiusOutside);
		
	squareOut = (double) radiusOutside * radiusOutside;
	squareIns = (double) radiusInside * radiusInside;

	widthCircle = radiusOutside - radiusInside;
	squareCircle = pi * (squareOut - squareIns)  * 100;
	printf("%.0lf %.2lf\n", widthCircle ,squareCircle);
	return 0;
}