/*
Programa de verificação da aproximação do número de Euler quado x tende ao infinito pela direita, se aplica pela aproximação pela esquerda, logo, o limite existe e se aproxima cada vez mais do número de Euler.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
  double x = 450.0;//Insira qualquer valor real
  double e = 0.0;
  
  //printf("Insira um valor real para x:\n");
  //scanf ("%lf", &x);
  
  /*calculo do numuero de Euler com x-->00*/
  for (int k = 0; k <= x; k = k + 1)
  {
    e = pow((1.0 + (1.0/k)), k);
    printf ("\n%d: %lf", k, e);
  }//end for 
  return 0;
}//end main 
