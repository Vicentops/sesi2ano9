#include <stdio.h>
int main() {
    int numero, maior, menor, quantidade = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero >= 0) {
        if (quantidade == 0) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }

        quantidade++;

        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}