#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double numero, parte_fracionaria = 0, parte_inteira = 0;
	
	printf("Digite um número real: \n");
	scanf("%lf", &numero);
	
	parte_fracionaria = modf(numero, &parte_inteira);
	
	printf("Parte inteira: %.0f.\n", parte_inteira);
	//printf("Parte inteira: %.0f.\n", parte_inteira); se fosse float
	printf("Parte fracionária: %.5f.\n", parte_fracionaria);
	
	
	return 0;
}
