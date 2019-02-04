#include <stdio.h>

// Написать программу — модель анализа пожарного датчика в помещении, которая выводит сообщение Fire situation, если температура в комнате превысила 60 градусов по Цельсию.

int main() {
  int t;
  scanf("%d", &t);
  if (t>60) {
    printf("Fire situation\n");
  }
  return 0;
}
