#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char s[N];
    int tamanho_texto;

    printf("Digite um texto: ");
    gets(s);
    fflush(stdin);
    tamanho_texto = strlen(s);
    printf("Tamanho do texto: %d\n\n", tamanho_texto);

    printf("Impressão de posição a posição:\n");
    for (int i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
    }
    return 0;
}
