#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_6.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Media aritmetica.                                #\n");
  printf("#=====================================================#\n\n");

  int num1 = 0;
  int num2 = 0;

  printf("[+] Introduzca numero 1: ");
  scanf("%d", &num1);

  printf("[+] Introduzca numero 2: ");
  scanf("%d", &num2);

  printf("[+] La media aritmetica es %.2f\n", (num1 + num2) / 2.0);
  //system("pause");

  return 0;
}
