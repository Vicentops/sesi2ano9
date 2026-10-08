#include <stdio.h>
int main() {
    int numero, soma = 0, quantidade = 0;
    float media;

    while (quantidade < 10) {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma = soma + numero;
            quantidade++;
        }
    }

    media = soma / 10.0;

    printf("Media: %.2f\n", media);

    return 0;
}