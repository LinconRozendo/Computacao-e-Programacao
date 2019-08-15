#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float r;
	printf("Digite o valor do raio: \n");
	scanf("%f", &r);
	printf("Valor do comprimento da esfera: %.1f\n", (2 * 3.14 * r));
	printf("Valor da área da esfera: %.1f\n", (3.14 * (r * r)));
	printf("Valor do volume da esfera: %.1f\n", ((4 * 3.14 * ( r * r * r)) / 3));
	
	return 0;
}
