#include <stdio.h>
#include <locale.h>
#include <math.h>

/*  5 - ENUNCIADO:
	ESCOLHA UMA FÓRMULA DA FÍSICA PARA CODIFICAR, SOLICITE AS INFORMAÇÕES 
	NECESSÁRIAS PARA O C[ALCULO E APRESENTE O RESULTADO.
	OBS:  PARA SOLUÇÃO DESTA QUESTÃO, FOI ESCOLHIDO O EXERCÍCIO DE COMO 
	CALCULAR A VELOCIDADE EM MRU (MOVIMENTO RETILÍNIO UNIFORME).
	Exercício realizado no dia 17/02/2023 ás 15:00 by Eli Santos
*/

int main(void){
	
	float Inicio, Final, TempoInicial, TempoFinal, Delta_s, Delta_t, Velocidade;
	setlocale(LC_ALL,"Portuguese");
    
    /*Leitura da posição Inicial e posição final*/
    printf(" Digite a posição inicial em Km: ");
    scanf("%f",&Inicio);
    printf(" Digite a posição final em Km: ");
    scanf("%f", &Final);
    
    /*Leitura do tempo inicial e tempo final*/
    printf(" Digite o tempo de inìcio em h: ");
    scanf("%f", &TempoInicial);
    printf(" Digite o tempo do fim em h: ");
    scanf("%f", &TempoFinal);
    
    /*Calculo do delta_s*/
    Delta_s =  Final - Inicio;
    /*Calculo do deta_t*/
    Delta_t = TempoFinal -  TempoInicial;
	/*Calculo da velocidade*/
	Velocidade = Delta_s / Delta_t;
	
	/*saída  dos resultados dos calculos*/ 
	
	printf(" A velocidade média é: %0.2f km/h", Velocidade);
	return 0;	
}