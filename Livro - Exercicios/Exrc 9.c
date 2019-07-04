#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float bMaior, bMenor, h;
	printf("Digite o valor da base maior, menor e da altura, respectivamente, para calcular a área do trapézio: \n");
	scanf("%f %f %f", &bMaior, &bMenor, &h);
	printf("Valor da área do trapézio: %.2f cm²", (((bMaior + bMenor) * h) / 2));
	
	return 0;
}
