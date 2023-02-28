#include <stdio.h>
#include <locale.h>

/*  6 - ENUNCIADO:
	 ESCREVA UM ALGORITIMO QUE RECEBA O SALÁRIO DE UM FUNCIONÁRIO, CALCULE E 
	 MOSTRE O NOVO SALÁRIO, SABENDO-SE QUE ESTE SOFREU UM AUMENTO DE 33,7%.
	 Exercício realizado no dia 17/02/2023 ás 15:37 by Eli Santos
*/

int main(void){
	
	//Declaração de variáveis
	float salario,porcentagem,calculo;
    setlocale(LC_ALL,"Portuguese");    
    //Entrada de valores
    printf("\n");
    printf(" Digite o salário do funcionário: ");
    scanf("%f",&salario);
    //Calculo dos valores
    porcentagem = salario * 0.337;    
    calculo = salario +  porcentagem;
    //saída dos valores 
    printf(" O salário do funcionário com o aumento de 33,7 por cento é de : %.2f", calculo);
    printf("\n");
    
	
	
	return 0;
}