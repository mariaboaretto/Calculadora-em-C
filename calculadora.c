#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int opMenu()
{
    char op[10];
    int operacao;
    int lines = 10;
    int column = 56;

    do
    {
        printf("\n\nEscolha uma das operações abaixo:\n\n[1] Soma\n[2] Subtração\n[3] Divisão\n[4] Multiplicação\n\n");
        printf("Insira o número correspondente à operação desejada: ");
        scanf("%s", &op);

        operacao = atoi(op);

        if (operacao < 1 || operacao > 4)
        {
            //Se a operação for inválida
            printf("\nOperação inválida. Insira apenas números inteiros de 1 a 4.\n");
        }

    } while (operacao > 4 || operacao < 1);

    return operacao;
}

void numberInput(int *a, int *b)
{
    printf("\nInsira o primeiro número: ");
    scanf("%d", a);
    printf("\nInsira o segundo número: ");
    scanf("%d", b);
}

void calc(int op, int fNum, int sNum)
{
    int result;

    switch (op)
    {
    case 1:
        result = fNum + sNum;
        break;
    case 2:
        result = fNum - sNum;
        break;
    case 3:
        result = fNum / sNum;
        break;
    case 4:
        result = fNum * sNum;
        break;

    default:
        break;
    }

    printf("\nO resultado é: %d\n", result);
}

int main()
{
    int operacao;
    int firstNum, secondNum;

    operacao = opMenu();
    numberInput(&firstNum, &secondNum);
    calc(operacao, firstNum, secondNum);

    return 0;
}