#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float area = 0, raio;
	
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	
	area = 3.14 * ( pow(raio, 2)) ;
	
	printf("A área do circulo é: %.2f.\n", area);
	
	
	return 0;
}
