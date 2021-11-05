#include <stdio.h>
#include <stdlib.h>

void calc_soma(int *mat_A, int *mat_B, int *mat_C);//função
int main()
{
    int mat_A [4][4], mat_B [4][4], mat_C[4][4];//criando as matrizes 4x4
    int validacao;//criando a variável de validação

    printf("Prática 3 - Uninter\n\n");
    printf("Digite os valores para a matriz 1");
    for (int w=0; w<4; w++)//laço para as linhas da primeira matriz
    {
        for (int k = 0; k<4; k++)//laço para as colunas da primeira matriz
        {
            printf("\nIncremento para [%i][%i] = ", w,k);
            scanf("%i", &mat_A[w][k]);
            if (mat_A[w][k] < 0)//condição, caso o número atribuido tenha carater negativo o programa executa o comando de sair
            {
                exit(3);
            }
        };
    };
        printf("\nDigite os valores para a matriz 2\n\n");
    for (int i=0; i<4; i++)//laço para as linhas da segunda matriz
    {
        for (int j = 0; j<4; j++)//laço para as colunas da segunda matriz
        {
            printf("\nIncremento para [%i][%i] = ", i,j);
            scanf("%i", &mat_B[i][j]);
            if (mat_B[i][j] < 0 )//condição, caso o número atribuido tenha carater negativo o programa executa o comando de sair
            {
                exit(3);
            }
        };
    };
    calc_soma(&mat_A[0][0], &mat_B[0][0], &mat_C[0][0]);//chamando a função de soma de matrizes
    printf("\n\n---------------Matriz 3---------------\n\n");
    for (int l=0; l<4; l++)//laço para imprimir as linhas 
    {
        for(int y = 0; y<4; y++)//laço para imprimir a colunas
        {
            printf("[%i][%i] = %i \n", l,y,mat_C[l][y]);
        }
    }
    

    system("Pause");

    return 0;

}

void calc_soma(int *mat_A, int *mat_B, int *mat_C)//função que soma sas funções 
{
    *mat_C = *mat_A + *mat_B;
    *(mat_C+1) = *(mat_A+1) + *(mat_B+1); //para os valores acresce um numeral para identificar a posição e executar a soma. 
    *(mat_C+2) = *(mat_A+2) + *(mat_B+2);
    *(mat_C+3) = *(mat_A+3) + *(mat_B+3);
    *(mat_C+4) = *(mat_A+4) + *(mat_B+4);
    *(mat_C+5) = *(mat_A+5) + *(mat_B+5);
    *(mat_C+6) = *(mat_A+6) + *(mat_B+6);
    *(mat_C+7) = *(mat_A+7) + *(mat_B+7);
    *(mat_C+8) = *(mat_A+8) + *(mat_B+8);
    *(mat_C+9) = *(mat_A+9) + *(mat_B+9);
    *(mat_C+10) = *(mat_A+10) + *(mat_B+10);
    *(mat_C+11) = *(mat_A+11) + *(mat_B+11);
    *(mat_C+12) = *(mat_A+12) + *(mat_B+12);
    *(mat_C+13) = *(mat_A+13) + *(mat_B+13);
    *(mat_C+14) = *(mat_A+14) + *(mat_B+14);
    *(mat_C+15) = *(mat_A+15) + *(mat_B+15);

}
