#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite um número: \n");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("O número é par.\n");
	}else{
		printf("Número ímpar.\n");
	}
	
	
	
	return 0;
}
