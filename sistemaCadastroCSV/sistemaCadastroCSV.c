#include <stdio.h>
#include <stdlib.h>

int main()
{    
    printf("\n\nBem vindo ao assistente de registro\n\n");
    printf("____________________________________________\n\n");
    char nome[30]; //variáveis que receberão os dados
    char email[50];
    char tel[15];
    char cpf[15];

    FILE *registro;//criação do ponteiro do arquivo 
    regis-tro = fopen("3523728.csv", "w");//abertura em modo de escrita e substiruição
    if (registro == NULL)//função para eventual erro
    {
        printf("O arquivo não pode ser aberto.\n\nEncerrando o programa.");
        system("Pause");
        exit(1);//se existir um erro o programa é encerrado
    }
    else
    {
        for(int i = 0; i<6; i++)//laço for para 6 registros
        {            
            printf("Nome: ");//situação informada ao usuário
            gets(nome);//armazenamento dos dados digitados
            fprintf(registro, "%s;", nome);//registro da informação no documento
            printf("\nemail: ");
            gets(email);
            fprintf(registro, "%s;", email);
            printf("\ntelefone: "); 
            gets(tel);
            fprintf(registro, "%s;", tel);
            printf("\nCPF: ");
            gets(cpf);
            fprintf(registro, "%s\n", cpf);    
        }
        fclose(registro);//salvando e fechando o documento de modo seguro

    };

    return 0;

}
