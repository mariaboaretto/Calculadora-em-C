#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int op;
    do
    {
        //Printando opções p/ user e lendo o input   
        printf("\n\n");
        printf("Escolha uma das operações abaixo:\n1. Soma\n2. Subtração\n3. Divisão\n4. Multiplicação\n\n");
        printf("Insira o número correspondente à operação desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("aeee\n");
            break;
        case 2:
            printf("aeee\n");
            break;
        case 3:
            printf("aeee\n");
            break;
        case 4:
            printf("aeee\n");
            break;
    
        default:
            //Se a operação for inválida
            //Entrando em loop infinito quando op =! int. Verificar.
            printf("\nOperação inválida. Insira apenas números inteiros de 1 a 4.\n");
            break;
        }

    } while (op != 1 && op != 2 && op != 3 && op != 4);
    
    
    //Se o input for inválido
    
    return 0;
}

