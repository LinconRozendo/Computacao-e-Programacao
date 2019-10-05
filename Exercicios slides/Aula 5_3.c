#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	
	float a, b, c, delta = 0, raiz1 = 0, raiz2 = 0;
	
	printf("Digite os valores dos coeficientes da equação do segundo grau: \n");
	scanf("%f %f %f", &a, &b, &c);
	
	delta = ( b * b ) - 4 * a * c;
	
	raiz1 = ( - b + sqrt(delta)) / (2 * a); 
	
	raiz2 = ( - b - sqrt(delta)) / (2 * a);
	
	printf("Valores das raizes retiradas da equação digitada: \n");
	printf("Raiz 1: %.2f.\n", raiz1);
	printf("Raiz 2: %.2f.\n", raiz2);
	
	
	return 0;
}
