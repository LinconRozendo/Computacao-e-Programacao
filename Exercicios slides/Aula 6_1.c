#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, s;
	
	printf("Digite tr�s lados do tri�ngulo:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	s = (a+b+c)/2;
	
	printf("Valor da �rea do tri�ngulo: %.1f m/s�\n", sqrt(s*(s-a)*(s-b)*(s-c)));
		
	
	return 0;
}
