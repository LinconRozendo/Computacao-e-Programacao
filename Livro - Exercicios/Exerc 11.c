#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float dMaior, dMenor;
	printf("Digite os valores da diagonal maior e menor: \n");
	scanf("%f %f", &dMaior, &dMenor);
	printf("Valor da área do losango: %.2f", ((dMaior * dMenor) / 2) );
	
	return 0;
}
