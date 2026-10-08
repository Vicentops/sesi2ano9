#include <stdio.h>
int main() {
    float nota, soma = 0, media;
    int quantidade = 0;

    printf("Digite uma nota de 10 a 20: ");
    scanf("%f", &nota);

    while (nota >= 10 && nota <= 20) {
        soma = soma + nota;
        quantidade++;

        scanf("%f", &nota);
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhuma nota valida.\n");
    }

    return 0;
}