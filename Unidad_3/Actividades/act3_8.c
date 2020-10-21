#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_5.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Convertidor de pies y pulgadas a centimetros.    #\n");
  printf("#=====================================================#\n\n");

  float pies = 0;
  float pulgadas = 0;
  float centimetros = 0;

  printf("[+] Introduzca pies: ");
  scanf("%f", &pies);

  printf("[+] Introduzca pulgadas: ");
  scanf("%f", &pulgadas);

  centimetros = ((pies * 12) + pulgadas) * 2.54;

  printf("[+] Son %.f pies, %.f pulgadas y %.4f centimetros\n",\
  pies, pulgadas, centimetros);
  //system("pause");

  return 0;
}
