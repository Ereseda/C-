#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  4 - ENUNCIADO:
	FA�A UM PROGRAMA QUE SOLICITE AO USU�RIO TR�S N�MEROS E TR�S PESOS.
	EM SEGUIDA, CALCULE A M�DIA PONDERADA. IMPRIMA O RESULTADO.	
	Exerc�cio realizado no dia 17/02/2023 �s 14:18 by Eli Santos

*/

int main(void){
	
	/*Declara��o dos valores*/
	float Numero_1, Numero_2, Numero_3;
	int  Peso_1, Peso_2, Peso_3;
    setlocale(LC_ALL,"Portuguese");
    
    /*Entrada dos valores*/
	
    printf("\n");
	printf(" Digite o primeiro n�mero:");
	scanf("%f", &Numero_1);	
	printf(" Digite o primeiro peso: ");
	scanf("%d", &Peso_1);
	
	printf(" Digite o segundo n�mero:");
	scanf("%f", &Numero_2);	
	printf(" Digite o segundo peso: ");
	scanf("%d", &Peso_2);
	
    printf(" Digite o terceiro n�mero:");
	scanf("%f", &Numero_3);	
	printf(" Digite o terceiro peso: ");
	scanf("%d", &Peso_3);
	
	/*C�lculo e sa�da dos valores*/
	printf(" A m�dia ponderada dos tr�s valores �: % .2f",(Numero_1 * Peso_1 + Numero_2 * Peso_2 + Numero_3 * Peso_3)/(Peso_1 + Peso_2 + Peso_3));
		
	return 0;
}