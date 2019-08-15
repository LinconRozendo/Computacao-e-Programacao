#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite um número inteiro: \n");
		scanf("%d", &x[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf("Elemento [%d] Valor = %d.\n", i, x[i]);
	}
	
	printf("-------------------------------\n");
	
	for(i = 9; i >= 0; i--){
		printf("Elemento [%d] Valor = %d.\n", i, x[i]);
	}
	
	return 0;
}
