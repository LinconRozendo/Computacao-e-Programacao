#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x[3][5], cont = 0, i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("Digite um número: \n");
			scanf("%d", &x[i][j]);
			if(x[i][j] >= 15 && x[i][j] <= 20){
				cont++;
			}
		}		
	}
	
	printf("Quantidade de números entre, ou igual a, 15 e 20: %d.\n", cont);
	
	
	return 0;
}
