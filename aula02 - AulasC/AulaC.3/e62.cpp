#include <stdio.h>
#include <string.h>
int main() {
    char *unidades[] = {
        "", "um", "dois", "tres", "quatro",
        "cinco", "seis", "sete", "oito", "nove"
    };

    char *especiais[] = {
        "dez", "onze", "doze", "treze", "quatorze",
        "quinze", "dezesseis", "dezessete",
        "dezoito", "dezenove"
    };

    char *dezenas[] = {
        "", "", "vinte", "trinta", "quarenta",
        "cinquenta", "sessenta", "setenta",
        "oitenta", "noventa"
    };

    char *centenas[] = {
        "", "cento", "duzentos", "trezentos",
        "quatrocentos", "quinhentos", "seiscentos",
        "setecentos", "oitocentos", "novecentos"
    };

    int n, c, d, u, total = 0;
    char palavra[100];

    for (n = 1; n <= 1000; n++) {
        palavra[0] = '\0';

        if (n == 1000) {
            strcpy(palavra, "mil");
        } else if (n == 100) {
            strcpy(palavra, "cem");
        } else {
            c = n / 100;
            d = (n / 10) % 10;
            u = n % 10;

            if (c > 0) {
                strcat(palavra, centenas[c]);
            }

            if (d == 1) {
                if (strlen(palavra) > 0) {
                    strcat(palavra, "e");
                }

                strcat(palavra, especiais[u]);
            } else {
                if (d > 1) {
                    if (strlen(palavra) > 0) {
                        strcat(palavra, "e");
                    }

                    strcat(palavra, dezenas[d]);
                }

                if (u > 0) {
                    if (strlen(palavra) > 0) {
                        strcat(palavra, "e");
                    }

                    strcat(palavra, unidades[u]);
                }
            }
        }

        total = total + strlen(palavra);
    }

    printf("Total de letras: %d\n", total);

    return 0;
}