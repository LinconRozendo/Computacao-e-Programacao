#include<stdio.h>]
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	printf("Digite dois valores para calcular sua m�dia ponderada: \n");
	scanf("%f %f", &n1, &n2);
	printf("Valor da sua m�dia ponderada: %.2f", (((n1 * 2)+ (n2 * 3)) / 5));
	
	return 0;
}
