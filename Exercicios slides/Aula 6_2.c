#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float v, a;
	
	printf("Digite o valor da velocidade inicial e do ângulo: \n");
	scanf("%f %f", &v, &a);
	
	printf("Valor do alcance: %.1f\n", (v/9.8)*sin(2*a));
	
	
	return 0;
}
