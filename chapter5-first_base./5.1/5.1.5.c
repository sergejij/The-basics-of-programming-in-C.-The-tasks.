#include <stdio.h>
#include <math.h>

// Масса одной молекулы воды приблизительно равна 3×10−23 грамм.  
// Масса одной капли воды приблизительно 0.05 гр. В одном гранёном стакане ≈249.5 гр.  
// Напишите программу, которая вычисляет количество капель и 
// молекул воды в N гранёных стаканах воды.

int main() {
  int numberOfGlasses, numberOfDroplets;
  double numberOfMolecules;

  scanf("%d", &numberOfGlasses);
  
  numberOfDroplets = numberOfGlasses * 249.5 / 0.05;
  numberOfMolecules = numberOfGlasses * 249.5 / 3e-23;
  printf("%d", numberOfDroplets);
  return 0;
}