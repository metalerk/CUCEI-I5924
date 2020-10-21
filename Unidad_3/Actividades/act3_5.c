#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_5.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Convertidor a gruesas, docenas y unidades.       #\n");
  printf("#=====================================================#\n\n");

  int gruesas = 0;
  int docenas = 0;
  int unidades = 0;

  printf("[+] Introduzca unidades: ");
  scanf("%d", &unidades);

  gruesas = unidades / 144;
  unidades -= gruesas * 144;

  docenas = unidades / 12;
  unidades -= docenas * 12;

  printf("[+] Son %d gruesas, %d docenas y %d unidades\n",\
  gruesas, docenas, unidades);
  //system("pause");

  return 0;
}
