#include <stdio.h>
#include <locale.h>
int main()
{	
 	setlocale(LC_ALL,"Portuguese");

	int operac =0;
	char operacao,letra;
	double numero1, numero2,resultado;	
	//operacao
	
	
	
	printf("TA USANDO CALCULADORA PORRA SABE TABUADA NAO É\n");
	printf("Digite a operação que dejesas(+,-,*,/): ");	
	scanf("%c",&operacao);
	
	printf("Digita um numero aí burro do carai:");
	scanf("%lf",&numero1);
	
	if(numero1 == 0)
	{
		printf("ta errado");
		
	}
	
	//numero2
	printf("Digita outro numero aí burro do carai:");
	scanf("%lf",&numero2);
	
	if(numero2 == operacao)
 	{
 		printf("ta errado");	
	}
	
	//estrutura condicional
	switch(operacao)
	{
		case '+':
		    resultado = numero1 + numero2;
		break;		
			
		case '-':
			resultado = numero1 - numero2;
		break;
		
		case '*':
			resultado = numero1 * numero2;
		break;
		
		case '/':
			
			
			if(numero2 == 0)
			{
				printf("Vou te matar boy eu vou te matar");
				return 1;
			}else{
				resultado = numero1 / numero2;
			}
			
			resultado = numero1 / numero2;
		break;
		
		default:
			printf("porra tu é burro mermo né mermao\n");
		return 1;
		
			
	}	
	printf("%.0lf %c %.0lf = %.0lf",numero1,operacao,numero2,resultado);
	
	
	return 0;
}

























