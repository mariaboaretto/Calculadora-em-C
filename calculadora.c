#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu(int a)
{
    //Printando opções p/ user e lendo o input
    int op;
    printf("Escolha uma das operações abaixo:\n1. Soma\n2. Subtração\n3. Divisão\n4. Multiplicação\n");
    printf("Insira o número correspondente à operação desejada: ");
    scanf("%d", &op);
    //Se o input for inválido
    if (op != 1 && op != 2 && op != 3 && op != 4)
    {
        printf("Operação inválida. Insira apenas números de 1 a 4.\n\n");
    }
    else
    {
        printf("aeee\n");
    }
    
    
}

int main()
{
    menu(1);

    return 0;
}

