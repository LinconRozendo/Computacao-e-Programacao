#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float sMin, sFunc;
	printf("Digite o valor do sal�rio m�nimo e de seu sal�rio: \n");
	scanf("%f %f", &sMin, &sFunc);
	printf("Voc� recebe %.1f sal�rio(s) m�nimo(s).", (sFunc / sMin));
	
	return 0;
}
