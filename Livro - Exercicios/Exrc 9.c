#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float bMaior, bMenor, h;
	printf("Digite o valor da base maior, menor e da altura, respectivamente, para calcular a �rea do trap�zio: \n");
	scanf("%f %f %f", &bMaior, &bMenor, &h);
	printf("Valor da �rea do trap�zio: %.2f cm�", (((bMaior + bMenor) * h) / 2));
	
	return 0;
}
