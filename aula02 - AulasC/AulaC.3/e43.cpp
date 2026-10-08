
#include <stdio.h>

int main() {
    int idade, soma = 0, quantidade = 0;
    float media;

    printf("Digite uma idade (0 para parar): ");
    scanf("%d", &idade);

    while (idade != 0) {
        soma = soma + idade;
        quantidade++;

        scanf("%d", &idade);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;
        printf("Media das idades: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi informada.\n");
    }

    return 0;
}