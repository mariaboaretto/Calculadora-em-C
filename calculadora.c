#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber;
    char op[10];
    int operacao;
    
    do
    {
        //Printando opções p/ user e lendo o input   
        printf("\n\n");
        printf("Escolha uma das operações abaixo:\n1. Soma\n2. Subtração\n3. Divisão\n4. Multiplicação\n\n");
        printf("Insira o número correspondente à operação desejada: ");
        scanf("%s", &op);

        operacao = atoi(op);        

        switch (operacao)
        {
        case 1:
            printf("Insira o primeiro número: ");
            scanf("%d", firstNumber);
            printf("Insira o primeiro número: ");
            scanf("%d", secondNumber);
            printf("O resultado é: %d", firstNumber + secondNumber);
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
            printf("\nOperação inválida. Insira apenas números inteiros de 1 a 4.\n");
            break;
        }

    } while (operacao > 4 || operacao < 1);
    
    
    return 0;
}

