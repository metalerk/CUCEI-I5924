#include <stdio.h>

int main() {
  printf("#=====================================================#\n");
  printf("#    act3_7.c                                         #\n");
  printf("#    Autor: Jose Luis Esteban Rodriguez Gonzalez      #\n");
  printf("#    Cod: 220282746  Seccion: D04                     #\n");
  printf("#    Fecha: 20 de octubre de 2020                     #\n");
  printf("#    Calculo de indice de masa corporal.              #\n");
  printf("#=====================================================#\n\n");

  float peso = 0;
  float altura = 0;

  printf("[+] Introduzca peso en kg: ");
  scanf("%f", &peso);

  printf("[+] Introduzca altura en mts: ");
  scanf("%f", &altura);

  printf("[+] IMC es %.2f\n", peso / (altura * altura));
  printf("[!] Un IMC muy alto indica obesidad.\
  Los valores normales de IMC estan entre 18.5 y 24.9, pero estos limites\
  dependen de la edad, del sexo, de la constitucion fisica, etc.\n");
  //system("pause");

  return 0;
}
