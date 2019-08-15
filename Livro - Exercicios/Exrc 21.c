#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float s, hT, hE, vT, vE;
	printf("Digite o valor do salário mínimo, a quantidade de horas trabalhadas e horas extras trabalhadas: \n");
	scanf("%f %f %f", &s, &hT, &hE);
	vT = (hT * (s * ((float)1/8)));
	vE = (hE * (s * ((float)1/4)));
	printf("Valor do seu salário: %.2f", (vT + vE));
	
	
	return 0;
}
