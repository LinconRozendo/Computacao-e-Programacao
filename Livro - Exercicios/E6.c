#include<stdio.h>
#include<locale.h>
#include<math.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	int n;
	
	printf("digite dois números depois escolha uma operação, sendo elas: \n1 - Média \n2 - Diferença \n3 - Produto\n");
	scanf("%f %f %d", &n1, &n2, &n);
	
	switch(n){
		case 1:
			printf("Média: %.1f\n", (n1+n2)/2);
			break;
		case 2:
			if(n1 == 2){
				printf("Os números são iguais.\n");
			}else{
				if(n1 > n2){
					printf("Diferença: %.1f\n", n1 - n2);
				}else{
					if(n2 > n1){
						printf("Diferença: %.1f\n", n2 - n1);
					}					
				}
			}
		break;
		case 3:
			printf("Produto: %.1f\n", n1 * n2);
		break;
		default:
			printf("Mensagem de erro. :)\n");
	}
	
	
	return 0;
}
