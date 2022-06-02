#include<stdio.h>

void le_situacao_eleitoral(int idade)
{
    if(idade<16)
    {
        printf("Nao eleitor");
    }
    if(idade >= 16 && idade < 18 || idade>70)
    {
        printf("Eleitor facultativo");
    }
    else
    {
        printf("Eleitor obrigatorio");
    }
}    

int main()
{
    int idade;
    printf("Digite a idade:");
    scanf("%d",&idade);
    le_situacao_eleitoral(idade);
    return 0;
}
