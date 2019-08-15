#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float c1, c2, t;
	
	printf("Digite a quantidade de voto do candidato 1 e 2 depois a quantidade de eleitores:\n");
	scanf("%f %f %f", &c1, &c2, &t);
	
	printf("Percentual de votos do candidato 1: %.2f%%\n", (c1/t)*100);
	printf("Percentual de votos do candidato 2: %.2f%%\n", (c2/t)*100);
	printf("Percentual de votos nulos: %.2f%%\n", t - (c1+c2));
	
	
	
	
	return 0;
}
