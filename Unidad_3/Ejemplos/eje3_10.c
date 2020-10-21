#include <stdio.h>

int main() {
    double d, e, f = 2.33;
    int i = 6;
    e = f * i; /*e es un doble de valor 13.98 */
    printf("Resultado = %f\n", e);
    d = (int)(f * i); /* d es un doble de valor 13.00 */
    printf("Resultado = %f\n", d);
    d = (int)f * i; /* f se ha convertido a un entero truncado */
    /* sus decimales, d es un doble de valor 13.00 */
    printf("Resultado = %f\n", d);
    return 0;
}