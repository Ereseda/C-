#include <stdio.h>
#include <locale.h>

 /*  2 - ENUNCIADO:
 
 	 FA�A UM PROGRAMA QUE SOLICITE UM VALOR EM GRAUS FAHRENHEIT E IMPRIMA O VA-
	  LOR CORRESPONDENTE EM GRAUS CELSIUS USANDO AS F�RMULAS QUE SEGUEM:
	  
	  a) USAR UMA VARI�VEL FLOAT PARA LER O VALOR EM FAHRENHEIT E A F�RMULA:
	  C = (F - 32.0) *(5.0/9.0).
	  
	  b) USAR UMA VARI�VEL INT PARA LER O VALOR EM FAHRENHEIT E A F�RMULA:
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
    
    printf(" O valor de fahrenheit representado em float � de: %f", c);
    printf("\n");
    printf(" O valor de fahrenheit representado em float � de: %f", C);
	printf("\n");
    return 0;	

}