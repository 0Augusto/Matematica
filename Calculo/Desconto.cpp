/*
Precisa corrigir e melhorar várias coisas, e ser feito...mas não sei quando!
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	
	int main ()
	{
		double valor             = 0.0;
		double porcento          = 0.0;
		double porcentoDois      = 0.0;
		double result            = 0.0;
		double resultFinal       = 0.0;
		double porcentoTres      = 0.0;
		double resultAlternativo = 0.0;
		double diferenca         = 0.0;
		printf ("Insira o valor a ser pago: R$ ");
		scanf  ("%lf", &valor);
		
		printf ("Insira o desconto a ser efetuado: ");
		scanf  ("%lf", &porcento);
		
		printf ("Insira o segundo desconto a ser efetuado: ");
		scanf  ("%lf", &porcentoDois);
		
		printf ("Insira a soma do desconto a ser efetuado: ");
		scanf  ("%lf", &porcentoTres);
		//Calcula o resultado com o primeiro desconto
		result = (valor - ((porcento/100) * (valor)));
		//Calcula o resultado (valor ja com desconsto) anterior com o novo dsconto
		resultFinal = (result - (result * (porcentoDois/100)));
		//Calcula sendo a soma dos dois descontos e comprara ambos os valores
		resultAlternativo = (valor - ((porcentoTres/100) * (valor)));
		//Difereçca entre as duas formas de desconto
		diferenca = resultAlternativo - result;
    // (\t = tabulação = 4 espaços)
		printf ("Desconto\tDescontoDois\n");
		printf ("%lf\t%lf\n", result, resultFinal);
		//printf ("Soma dos dois descontos\n");
		printf ("\nO valor final com o(s) desconto(s) eh: R$ %lf reais\n", resultFinal);
		printf ("\n%lf", resultAlternativo);
		//Mostra a diferença
		printf ("\nDiferenca\n");
		printf ("%lf\n", diferenca);
	return (0);	
	}//end main
