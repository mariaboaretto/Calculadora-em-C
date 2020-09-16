#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void drawMenuHeader()
{
    int lines = 3;
    int columns = 56;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j < columns; j++)
        {
            //Se for primeira e terceira linha
            if (i == 1 || i == 3)
            {
                if (j >= 1 || j <= columns)
                {
                    printf("*");
                }
            }
            else
            {
                if (j == 13)
                {
                    printf("Escolha uma das operações abaixo");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

int opMenu()
{
    char op[10];
    int operacao;
    int lines = 2;
    int columns = 56;

    printf(" [1] Soma\n [2] Subtração\n [3] Divisão\n [4] Multiplicação\n");

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1)
            {
                if (j >= 1 || j <= columns)
                {
                    printf("*");
                }
            }
            else
            {
                if (j == 11)
                {
                    printf("Insira o número da operação desejada: ");
                    scanf("%s", &op);
                    operacao = atoi(op);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    if (operacao < 1 || operacao > 4)
    {
        //Se a operação for inválida
        printf("\nOperação inválida. Insira apenas números inteiros de 1 a 4.\n");
    }

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

    do
    {
        drawMenuHeader();
        operacao = opMenu();

    } while (operacao < 1 || operacao > 4);

    numberInput(&firstNum, &secondNum);
    calc(operacao, firstNum, secondNum);

    return 0;
}