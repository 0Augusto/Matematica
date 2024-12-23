#include <stdio.h>
#include <stdlib.h>

int collatz(int n){
  printf("%2d ",n);
  if( n == 1){
    printf("\n");
    return n;
  }
  else{
    if( ( n % 2 ) == 0 )
      return collatz( n / 2 );
    else
      return collatz( (3 * n) + 1 );
  }
}



int main(){
  int n;
  printf("Digite um numero inteiro maior que zero para descobrir a sequencia de Collatz\n");
  scanf("%d",&n);
  collatz(n);

  return 0;
}
