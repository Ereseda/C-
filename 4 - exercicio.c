#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  4 - ENUNCIADO:
	FAÇA UM PROGRAMA QUE SOLICITE AO USUÁRIO TRÊS NÚMEROS E TRÊS PESOS.
	EM SEGUIDA, CALCULE A MÉDIA PONDERADA. IMPRIMA O RESULTADO.	
	Exercício realizado no dia 17/02/2023 ás 14:18 by Eli Santos

*/

int main(void){
	
	/*Declaração dos valores*/
	float Numero_1, Numero_2, Numero_3;
	int  Peso_1, Peso_2, Peso_3;
    setlocale(LC_ALL,"Portuguese");
    
    /*Entrada dos valores*/
	
    printf("\n");
	printf(" Digite o primeiro número:");
	scanf("%f", &Numero_1);	
	printf(" Digite o primeiro peso: ");
	scanf("%d", &Peso_1);
	
	printf(" Digite o segundo número:");
	scanf("%f", &Numero_2);	
	printf(" Digite o segundo peso: ");
	scanf("%d", &Peso_2);
	
    printf(" Digite o terceiro número:");
	scanf("%f", &Numero_3);	
	printf(" Digite o terceiro peso: ");
	scanf("%d", &Peso_3);
	
	/*Cálculo e saída dos valores*/
	printf(" A média ponderada dos três valores é: % .2f",(Numero_1 * Peso_1 + Numero_2 * Peso_2 + Numero_3 * Peso_3)/(Peso_1 + Peso_2 + Peso_3));
		
	return 0;
}