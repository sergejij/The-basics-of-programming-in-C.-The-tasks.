#include <stdio.h>
#include <math.h>

// Необходимо найти площадь одной грани, площадь полной поверхности и объем этого куба.

int main() {
  int lenghtFace, squareOneFace, squareFullOfCube, volumeOfCube;
  scanf("%d", &lenghtFace);

  squareOneFace = lenghtFace * lenghtFace;
  squareFullOfCube = lenghtFace * lenghtFace * 6;
  volumeOfCube = lenghtFace * lenghtFace * lenghtFace;

  printf("%d %d %d\n", squareOneFace, squareFullOfCube,volumeOfCube);
  return 0;
}