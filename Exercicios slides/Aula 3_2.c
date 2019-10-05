#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	printf("O número digitado ao quadrado: %.2f.\n", pow(numero,2));
	//printf("O número digitado ao quadrado: %d", (numero * numero));
	printf("O número digitado ao cubo: %.2f.\n", pow(numero,3));
	//printf("O número digitado ao cubo: %d", (numero * numero *numero));
	printf("A raiz quadrado do número digitado: %.2f.\n", sqrt(numero));
	
	printf("A raiz cúbica do número digitado: %.2f.\n", cbrt(numero));
	
	
	
	
	return 0;
}
