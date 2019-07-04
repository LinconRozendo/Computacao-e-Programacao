#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float sMin, sFunc;
	printf("Digite o valor do salário mínimo e de seu salário: \n");
	scanf("%f %f", &sMin, &sFunc);
	printf("Você recebe %.1f salário(s) mínimo(s).", (sFunc / sMin));
	
	return 0;
}
