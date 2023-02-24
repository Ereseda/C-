#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  3 - ENUNCIADO:
	PESQUISE SOBRE A F�RMULA DE C�LCULO DO IMC(�NDICE DE MASSA CORPORAL) E CRIE 
	UM PROGRAMA CAPAZ DE SOLICITAR AS INFORMA��ES, CALCULAR E RETORNAR O
    RESULTADO.
    
	 F�RMULA: IMC = PESO / (ALTURA *  ALTURA)
	 
	 -----------------------------------------------------
	 INFORMA��ES ADICIONAIS DO ENUNCIADO:	 
	 -----------------------------------------------------
	 IMC < 20        ABAIXO DO PESO
	 20 <= IMC < 25  PESO NORMAL
	 25 <= IMC < 30  ACIMA DO PESO
	 30 <= IMC < 34  OBESO
	 IMC > 34        MUITO OBESO
     -----------------------------------------------------	 
	 Exerc�cio realizado no dia 17/02/2023 �s 13:12 by Eli Santos

*/

int main(void){
	
	/*Declara��o de valores*/
	float a,imc,p;
    setlocale(LC_ALL,"Portuguese");
	
	/*Entrada de valores*/
	printf("\n");
	printf(" Digite seu peso: ");
	scanf("%f", &p);	
	printf(" Digite sua altura: ");
	scanf("%f",&a);
	
	/*Resolu��o do enunciado*/	
	a = pow(a,2);
	imc = p/a;
	
	printf("% .2f", imc);
	printf("\n");
	if(imc < 20)
		printf(" Voc� est� abaixo do peso\n");
		else if((imc >= 20) && (imc <25))
			printf(" Voc� est� no peso normal\n");
			else if((imc >= 25) && (imc < 30))
				printf(" Voc� est� acima do peso\n");
				else if((imc  >= 30) && (imc <34))
					printf(" Aten��o voc� est� Obeso\n");
				else				
					printf(" Muita Aten��o, voc� est�  Muito obeso");
				
	return 0;
}