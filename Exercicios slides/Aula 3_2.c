#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &numero);
	
	printf("O n�mero digitado ao quadrado: %.2f.\n", pow(numero,2));
	//printf("O n�mero digitado ao quadrado: %d", (numero * numero));
	printf("O n�mero digitado ao cubo: %.2f.\n", pow(numero,3));
	//printf("O n�mero digitado ao cubo: %d", (numero * numero *numero));
	printf("A raiz quadrado do n�mero digitado: %.2f.\n", sqrt(numero));
	
	printf("A raiz c�bica do n�mero digitado: %.2f.\n", cbrt(numero));
	
	
	
	
	return 0;
}
