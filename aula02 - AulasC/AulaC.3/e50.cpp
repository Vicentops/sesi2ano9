#include <stdio.h>
int main() {
    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico = chico + 0.02;
        ze = ze + 0.03;
        anos++;
    }

    printf("Anos: %d\n", anos);

    return 0;
}