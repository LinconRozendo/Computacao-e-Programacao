#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float x;
	
	printf("Digite o valor do X: \n");
	scanf("%f", &x);
	
	if(x < 1){
		printf("Valor de f(x) = 4 - x² quando x < 1 é == %.1f\n", (4 - pow(x,2)));
	}else{
		if(x > 1){
			printf("Valor de f(x) = 2 + x² quando x > 1 é == %.1f\n", (2 + pow(x, 2)));
		}else{
			printf("Valor de f(x) = 2 quando x = 1 é == %d\n", 2);
		}
	}
	
	return 0;
}
