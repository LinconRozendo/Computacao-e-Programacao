#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a, b, c, s;
	
	printf("Digite três lados do triângulo:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	s = (a+b+c)/2;
	
	printf("Valor da área do triângulo: %.1f m/s²\n", sqrt(s*(s-a)*(s-b)*(s-c)));
		
	
	return 0;
}
