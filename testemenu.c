#include <stdio.h>
#include <stdlib.h>

void menu123()
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

void menu4567()
{
    printf(" [1] Soma\n [2] Subtração\n [3] Divisão\n [4] Multiplicação");
    
}

void menu89()
{
    int op;
    printf("\n");
    int lines = 2;
    int columns = 56;

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
                    scanf("%d", &op);
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

int main(int argc, char const *argv[])
{
    /*
    int lines = 10;
    int columns = 56;

    //Percorrendo linhas
    for (int i = 1; i <= lines; i++)
    {
        //Percorrendo colunas
        for (int j = 1; j <= columns; j++)
        {
            //Se for primeira, terceira, oitava ou última linha
            if (i == 1 || i == 3 || i == 8 || i == lines)
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
    */
   menu123();
   menu4567();
   menu89();
    return 0;
}
