#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x[6], i, p = 0, im = 0;
	
	for(i = 0; i < 6;i++){
		printf("Digite um número inteiro: \n");
		scanf("%d", &x[i]);
		
		if(x[i] % 2 == 0){
			p++;
		}else{
			im++;
		}
	}
	
	for(i = 0; i < 6; i++){
		printf("Elemento %d e seu valor: %d.\n", i, x[i]);
		if(x[i] % 2 == 0){
			printf("O Elemento %d é par e seu valor é: %d.\n", i, x[i]);
		}else{
			printf("O Elemento %d é ímpar e seu valor é: %d.\n", i, x[i]);
		}
	}
	
	printf("Quantidade de números pares: %d.\n", p);
	printf("Quantidade de números ímpares: %d.\n", im);
	
	
	
	return 0;
}
