#include <stdio.h>
#include <locale.h>

/*  6 - ENUNCIADO:
	 ESCREVA UM ALGORITIMO QUE RECEBA O SAL�RIO DE UM FUNCION�RIO, CALCULE E 
	 MOSTRE O NOVO SAL�RIO, SABENDO-SE QUE ESTE SOFREU UM AUMENTO DE 33,7%.
	 Exerc�cio realizado no dia 17/02/2023 �s 15:37 by Eli Santos
*/

int main(void){
	
	//Declara��o de vari�veis
	float salario,porcentagem,calculo;
    setlocale(LC_ALL,"Portuguese");    
    //Entrada de valores
    printf("\n");
    printf(" Digite o sal�rio do funcion�rio: ");
    scanf("%f",&salario);
    //Calculo dos valores
    porcentagem = salario * 0.337;    
    calculo = salario +  porcentagem;
    //sa�da dos valores 
    printf(" O sal�rio do funcion�rio com o aumento de 33,7 por cento � de : %.2f", calculo);
    printf("\n");
    
	
	
	return 0;
}