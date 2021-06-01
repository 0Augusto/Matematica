#include <stdio.h>
#include <math.h>


int main()
{
    int aux, num = 0, div = 0;
        printf("Insira um numero inteiro qualquer: ");
        scanf ("%d", &num);
    for(aux=2 ; aux<=sqrt(num) ; aux++)
        if(num%aux==0)
            div++;

    if(div==0)
        printf("É primo\n");
    else
        printf("Não é primo\n");
    return 0;
}
