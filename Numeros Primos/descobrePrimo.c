#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int aux, count, Max = 0, div;
        printf("Insira o limite superior inteiro positivo: ");
        scanf ("%d", &Max);
    for(aux = 2 ; aux <= Max ; aux = aux + 1){
        div = 0;

        for(count = 2 ; count <= sqrt(aux) ; count = count + 1)
            if(aux % count == 0)
                div = div + 1;

        if(!div)
            
            printf(" , %d", aux);
    }

    printf("\n");

    return 0;    


}
