#include <stdio.h>
#include <stdlib.h>

float alicota(float salario) //Função para decisão do valor da alíquota.
{
    float vpagar; //variável que terá o valor do imposto a ser pago

    if (salario < 1903.00)//conjunto de condicionantes que analisam o valor do salário para calcular o imposto 
    {
        vpagar = salario*0;
        return vpagar;
    };
    if (salario > 1903.99 && salario < 2826.65)
    {
        vpagar = salario*0.075;
        return vpagar;
    };
        if (salario > 2826.66 && salario < 3751.05)
    {
        vpagar = salario*0.15;
        return vpagar;
    };
        if (salario > 3751.06 && salario < 4664.68)
    {
        vpagar = salario*0.2250;
        return vpagar;
    };
        if (salario > 4664.68)
    {
        vpagar = salario*0.2750;
        return vpagar;//valor a ser pago de imposto de renda
    };

}

int main()
{
    char nome [30];//array com 30 caracteres
    char *pnome;//ponteiro
    pnome = nome;
    float *salario, *ali, sal, res;
    salario = &sal;
    ali = &res;

    printf("digite o nome: \n");
    gets(nome);//função para coleta total após clicar em enter
    printf("\nQual o salario do funcionario? \n");
    scanf_s("%f", &sal);//atribui o valor do salário à variável
    printf("O funcionario %s recebe salario de: %.2f ", pnome, *salario); //usa os ponteiros para mostrar os valores das variáveis
    res = alicota(*salario);//chamando a função que calcula o imposto de renda
    printf("Valor da aliquota do imposto de renda: %.2f", *ali);//apresentação do valor ao usuário
    system("Pause");
    

    return 0;

}
