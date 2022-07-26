#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int number, tabuada = 0;

    printf("Informe um numero para ver sua tabuada: ");
    scanf("%d", &number);
    system("cls");
    for (int i = 0; i < 11; i++) {
        tabuada = number * i;
        printf("%d x %d = %d\n", number, i, tabuada);
    }
    system("pause");
    return 0;
}