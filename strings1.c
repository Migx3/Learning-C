#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20
int main() {

    setlocale(LC_ALL, "Portuguese");
    char s[10];

    printf("Teste acentos: ação, macarrão, feijão\n\n");

    printf("Digite algo (scanf convencional): ");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
    printf("Digite algo (scanf aprimorado): ");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (leitura pelo fgets): ");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado:\n ");
    puts(s);
	return 0;
}
