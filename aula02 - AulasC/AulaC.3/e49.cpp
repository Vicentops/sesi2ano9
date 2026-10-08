#include <stdio.h>
int main() {
    float carlos = 2000, joao;
    int meses = 0;

    joao = carlos / 3;

    while (joao < carlos) {
        carlos = carlos * 1.02;
        joao = joao * 1.05;
        meses++;
    }

    printf("Meses: %d\n", meses);
    printf("Carlos: %.2f\n", carlos);
    printf("Joao: %.2f\n", joao);

    return 0;
}