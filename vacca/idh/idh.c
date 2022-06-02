#include<stdio.h>

void le_calculaidh(float e,float l,float r)
{
    float idh;
    if(e>=l+r)
    {
        idh = e * l * r / ((e + l + r)/3);
        printf("IDH:%f",idh);
    }
    else
    {   idh=(e + l + r)/3;
        printf("IDH:%f",idh);
    }
}

int main()
{
    float e,l,r;
    printf("Digite as dimensoes(educacao,longevidade e riqueza):");
    scanf("%f%f%f",&e,&l,&r);
    le_calculaidh(e,l,r);
    return 0;
}
