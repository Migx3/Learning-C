#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"123teste"};
    char senha_user[N];
    int status;
    
    printf("Senha: ");
    gets(senha_user);
    fflush(stdin);

    status = strcmp(hardText, senha_user);

    if (status == 0) {
        printf("Acesso liberado!");
    } else {
        printf("Acesso negado!");
    }
}