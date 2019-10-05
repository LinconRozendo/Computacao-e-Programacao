#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	float numero1, numero2, soma = 0, raiz = 0;
	
	printf("Menu de Opções:\n");
	printf("1 - Somar dois números.\n");
	printf("2 - Raiz quadrada de um número.\n\n\n");
	
	printf("Com base no menu acima, digite um número para realizar uma das duas operações: \n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("Digite dois números para serem somados: \n");
			scanf("%f %f", &numero1, &numero2);
			soma = numero1 + numero2;
			printf("Valor da somas dos números digitados: %.2f.\n", soma);
		break;
		
		case 2:
			printf("Digite um número para ser calculado sua raiz quadrada: \n");
			scanf("%f", &numero1);
			raiz = sqrt(numero1);
			printf("Valor da raiz do número digitado: %.2f.\n", raiz);
		break;
		
		default:
			printf("Digite algo coerente com o menu.\n");
		
	}
	
	
	
	
	
	return 0;
}
