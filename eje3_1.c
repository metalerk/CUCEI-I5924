#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_1.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Calculo de grados Celsius a Fahrenheit.          #\n");
  printf("#=====================================================#\n\n");

  float celsius = 0.0;
  float fahrenheit = 0.0;

  printf("[+] Introduzca °C: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;

  printf("[+] %.2f °C = %.2f °F\n", celsius, fahrenheit);
  system("pause");

  return 0;
}

