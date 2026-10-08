#include <stdio.h>
int main() {
    int a, b, produto, original, invertido, resto;
    int maior = 0;

    for (a = 100; a <= 999; a++) {
        for (b = 100; b <= 999; b++) {
            produto = a * b;
            original = produto;
            invertido = 0;

            while (original > 0) {
                resto = original % 10;
                invertido = invertido * 10 + resto;
                original = original / 10;
            }

            if (produto == invertido && produto > maior) {
                maior = produto;
            }
        }
    }

    printf("Maior palindromo: %d\n", maior);

    return 0;
}