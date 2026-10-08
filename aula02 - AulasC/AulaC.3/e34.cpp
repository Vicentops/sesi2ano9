#include <stdio.h>
int main() {
    long long numero = 1;
    int i, encontrou;

    do {
        encontrou = 1;

        for (i = 1; i <= 20; i++) {
            if (numero % i != 0) {
                encontrou = 0;
                break;
            }
        }

        if (encontrou == 0) {
            numero++;
        }

    } while (encontrou == 0);

    printf("Resultado: %lld\n", numero);

    return 0;
}