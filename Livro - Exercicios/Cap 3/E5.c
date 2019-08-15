#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	int n;
	
	printf("Digite dois números, depois digite outro número pra selecionar uma das seguintes operações:	\n");
	printf("1 - Média \n2 - Diferença entre os números \n3 - Produto \n4 - Divisão do primeiro pelo segundo\n");
	scanf("%f %f %d", &n1, &n2, &n);
	
	switch(n){
		case 1:
			printf("Média: %.1f\n", (n1+n2) / 2);
			break;
		case 2:
			if(n1 == n2){
				printf("Os números digitados são iguais.\n");
			}else{
				if(n1 > n2){
					printf("A diferença do maior pelo menor, é: %.1f", (n1 - n2));
				}else{
					printf("A diferença do maior pelo menor, é: %.1f", (n2 - n1));
				}
			}
			break;
		case 3:
			printf("Produto entre os números: %.1f\n", n1 * n2);
			break;
		case 4:
			printf("Divisão do primeiro pelo segundo: %.1f\n", n1 / n2);
			break;
		default:
			printf("zzZZzZZzZ");
	}
	return 0;
}
