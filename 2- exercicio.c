#include <stdio.h>
#include <locale.h>

 /*  2 - ENUNCIADO:
 
 	 FAÇA UM PROGRAMA QUE SOLICITE UM VALOR EM GRAUS FAHRENHEIT E IMPRIMA O VA-
	  LOR CORRESPONDENTE EM GRAUS CELSIUS USANDO AS FÓRMULAS QUE SEGUEM:
	  
	  a) USAR UMA VARIÁVEL FLOAT PARA LER O VALOR EM FAHRENHEIT E A FÓRMULA:
	  C = (F - 32.0) *(5.0/9.0).
	  
	  b) USAR UMA VARIÁVEL INT PARA LER O VALOR EM FAHRENHEIT E A FÓRMULA:
	  C=(F- 32) * (5/9).
 */
 
int main(void){
	
	float c;
	int C,f;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n");
	printf(" Digite um valor em fahrenheit, representado como float:");
	scanf("%f",&f);		
	
    printf(" Digite um valor em fahrenheit, representado como int:");
	scanf("%d",&f);
    printf("\n");	
    
    
	c = (f-32.0)*(5.0/9.0);
    C= (f-32)*(5/9);
    
    printf(" O valor de fahrenheit representado em float é de: %f", c);
    printf("\n");
    printf(" O valor de fahrenheit representado em float é de: %f", C);
	printf("\n");
    return 0;	

}