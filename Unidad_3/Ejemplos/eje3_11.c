#include <stdio.h>

int main() {
    char c;
    c = 97; /* el valor en decimal del codigo ASCII */
    print("%d\n", c);
    c = 'a'; /* el carcter entre comillas */
    printf("%c\n", c);
    c = 0x61; /* el valor en hexadecimal del codigo ASCII */
    printf("%x\n", c);
    c = 0141; /* el valor en octal del codigo ASCII */
    printf("%o\n", c);
    return 0;
}