#include <stdio.h>
int main() {
    int n, quantidade = 0, pares = 0;
    int maior, menor;
    int soma = 0, somaPares = 0;
    float media, mediaPares;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &n);

    while (n != 0) {
        if (quantidade == 0) {
            maior = n;
            menor = n;
        } else {
            if (n > maior) {
                maior = n;
            }

            if (n < menor) {
                menor = n;
            }
        }

        soma = soma + n;
        quantidade++;

        if (n % 2 == 0) {
            pares++;
            somaPares = somaPares + n;
        }

        scanf("%d", &n);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;

        printf("Soma: %d\n", soma);
        printf("Quantidade: %d\n", quantidade);
        printf("Media: %.2f\n", media);
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);

        if (pares > 0) {
            mediaPares = (float)somaPares / pares;
            printf("Media dos pares: %.2f\n", mediaPares);
        } else {
            printf("Nenhum numero par foi digitado.\n");
        }
    }

    return 0;
}