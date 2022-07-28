#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 20

int main() {

    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá, Mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    system("pause");
    return 0;
}