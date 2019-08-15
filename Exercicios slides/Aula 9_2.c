#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x[10], y[10], i;
	
	for(i = 0; i < 8; i++){
		printf("Digite um número para ser armazenado no vetor X e outro no vetor Y:\n");
		scanf("%d %d", &x[i], &y[i]);			
	}
	
	for(i = 0; i < 8; i++){
		printf("Diferença entre %d e %d é: %d.\n", x[i], y[i], (x[i] - y[i]));
		printf("A soma entre %d e %d é: %d.\n", x[i], y[i], (x[i] + y[i]));
		printf("O produto entre %d e %d é: %d.\n", x[i], y[i], (x[i] * y[i]));
	}
	
	
	
	return 0;
}
