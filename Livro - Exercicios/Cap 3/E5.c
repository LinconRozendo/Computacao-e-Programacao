#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	int n;
	
	printf("Digite dois n�meros, depois digite outro n�mero pra selecionar uma das seguintes opera��es:	\n");
	printf("1 - M�dia \n2 - Diferen�a entre os n�meros \n3 - Produto \n4 - Divis�o do primeiro pelo segundo\n");
	scanf("%f %f %d", &n1, &n2, &n);
	
	switch(n){
		case 1:
			printf("M�dia: %.1f\n", (n1+n2) / 2);
			break;
		case 2:
			if(n1 == n2){
				printf("Os n�meros digitados s�o iguais.\n");
			}else{
				if(n1 > n2){
					printf("A diferen�a do maior pelo menor, �: %.1f", (n1 - n2));
				}else{
					printf("A diferen�a do maior pelo menor, �: %.1f", (n2 - n1));
				}
			}
			break;
		case 3:
			printf("Produto entre os n�meros: %.1f\n", n1 * n2);
			break;
		case 4:
			printf("Divis�o do primeiro pelo segundo: %.1f\n", n1 / n2);
			break;
		default:
			printf("zzZZzZZzZ");
	}
	return 0;
}
