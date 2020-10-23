#include <stdio.h>

int main() {
    char c;
    int n, d;
    n= sizeof(c);
    printf("el numero de bytes de la variable c es %d\n", n);
    printf("el numero de bytes de la variable d es %d\n", sizeof(n));
    printf("el numero de bytes que ocupa el tipo entero es %d\n", sizeof(int));
    printf("el numero de bytes que ocupa el tipo double es %d\n", sizeof(double));
    return 0;
}