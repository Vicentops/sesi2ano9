#include <stdio.h>
int main() {
    int numero, dados = 0, pares = 0;

    do {
        scanf("%d", &numero);

        if (numero != 1000) {
            dados++;

            if (numero % 2 == 0) {
                pares++;
            }
        }
    } while (numero != 1000);

    printf("Dados lidos: %d\n", dados);
    printf("Valores pares: %d\n", pares);

    return 0;
}