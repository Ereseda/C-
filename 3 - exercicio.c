#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  3 - ENUNCIADO:
	PESQUISE SOBRE A FÓRMULA DE CÁLCULO DO IMC(ÍNDICE DE MASSA CORPORAL) E CRIE 
	UM PROGRAMA CAPAZ DE SOLICITAR AS INFORMAÇÕES, CALCULAR E RETORNAR O
    RESULTADO.
    
	 FÓRMULA: IMC = PESO / (ALTURA *  ALTURA)
	 
	 -----------------------------------------------------
	 INFORMAÇÕES ADICIONAIS DO ENUNCIADO:	 
	 -----------------------------------------------------
	 IMC < 20        ABAIXO DO PESO
	 20 <= IMC < 25  PESO NORMAL
	 25 <= IMC < 30  ACIMA DO PESO
	 30 <= IMC < 34  OBESO
	 IMC > 34        MUITO OBESO
     -----------------------------------------------------	 
	 Exercício realizado no dia 17/02/2023 ás 13:12 by Eli Santos

*/

int main(void){
	
	/*Declaração de valores*/
	float a,imc,p;
    setlocale(LC_ALL,"Portuguese");
	
	/*Entrada de valores*/
	printf("\n");
	printf(" Digite seu peso: ");
	scanf("%f", &p);	
	printf(" Digite sua altura: ");
	scanf("%f",&a);
	
	/*Resolução do enunciado*/	
	a = pow(a,2);
	imc = p/a;
	
	printf("% .2f", imc);
	printf("\n");
	if(imc < 20)
		printf(" Você está abaixo do peso\n");
		else if((imc >= 20) && (imc <25))
			printf(" Você está no peso normal\n");
			else if((imc >= 25) && (imc < 30))
				printf(" Você está acima do peso\n");
				else if((imc  >= 30) && (imc <34))
					printf(" Atenção você está Obeso\n");
				else				
					printf(" Muita Atenção, você está  Muito obeso");
				
	return 0;
}