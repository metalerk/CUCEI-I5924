#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_2.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Calculo de grados Fahrenheit a Celsius.          #\n");
  printf("#=====================================================#\n\n");

  float celsius = 0.0;
  float fahrenheit = 0.0;

  printf("[+] Introduzca °F: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * (5.0 / 9.0);

  printf("[+] %.2f °F = %.2f °C\n", fahrenheit, celsius);
  //system("pause");

  return 0;
}

