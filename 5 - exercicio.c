#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  5 - ENUNCIADO:
	ESCOLHA UMA F�RMULA DA F�SICA PARA CODIFICAR, SOLICITE AS INFORMA��ES 
	NECESS�RIAS PARA O C[ALCULO E APRESENTE O RESULTADO.
	OBS:  PARA SOLU��O DESTA QUEST�O, FOI ESCOLHIDO O EXERC�CIO DE COMO 
	CALCULAR A VELOCIDADE EM MRU (MOVIMENTO RETIL�NIO UNIFORME).
	Exerc�cio realizado no dia 17/02/2023 �s 15:00 by Eli Santos
*/

int main(void){
	
	float Inicio, Final, TempoInicial, TempoFinal, Delta_s, Delta_t, Velocidade;
	setlocale(LC_ALL,"Portuguese");
    
    /*Leitura da posi��o Inicial e posi��o final*/
    printf(" Digite a posi��o inicial em Km: ");
    scanf("%f",&Inicio);
    printf(" Digite a posi��o final em Km: ");
    scanf("%f", &Final);
    
    /*Leitura do tempo inicial e tempo final*/
    printf(" Digite o tempo de in�cio em h: ");
    scanf("%f", &TempoInicial);
    printf(" Digite o tempo do fim em h: ");
    scanf("%f", &TempoFinal);
    
    /*Calculo do delta_s*/
    Delta_s =  Final - Inicio;
    /*Calculo do deta_t*/
    Delta_t = TempoFinal -  TempoInicial;
	/*Calculo da velocidade*/
	Velocidade = Delta_s / Delta_t;
	
	/*sa�da  dos resultados dos calculos*/ 
	
	printf(" A velocidade m�dia �: %0.2f km/h", Velocidade);
	return 0;	
}