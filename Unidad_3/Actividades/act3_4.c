#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_4.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Convertidor segundos a horas y minutos.          #\n");
  printf("#=====================================================#\n\n");

  int segundos = 0;
  int minutos = 0;
  int horas = 0;

  printf("[+] Introduzca segundos: ");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  segundos -= 3600 * horas;
  
  minutos = segundos / 60;
  segundos -= 60 * minutos;

  printf("[+] Son %d horas, %d minutos y %d segundos\n",\
  horas, minutos, segundos % 60);
  //system("pause");

  return 0;
}
