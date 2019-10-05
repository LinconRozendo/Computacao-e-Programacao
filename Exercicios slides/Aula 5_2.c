#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	float numero1, numero2, soma = 0, raiz = 0;
	
	printf("Menu de Op��es:\n");
	printf("1 - Somar dois n�meros.\n");
	printf("2 - Raiz quadrada de um n�mero.\n\n\n");
	
	printf("Com base no menu acima, digite um n�mero para realizar uma das duas opera��es: \n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			printf("Digite dois n�meros para serem somados: \n");
			scanf("%f %f", &numero1, &numero2);
			soma = numero1 + numero2;
			printf("Valor da somas dos n�meros digitados: %.2f.\n", soma);
		break;
		
		case 2:
			printf("Digite um n�mero para ser calculado sua raiz quadrada: \n");
			scanf("%f", &numero1);
			raiz = sqrt(numero1);
			printf("Valor da raiz do n�mero digitado: %.2f.\n", raiz);
		break;
		
		default:
			printf("Digite algo coerente com o menu.\n");
		
	}
	
	
	
	
	
	return 0;
}
