#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x[8], r1[8], r2[8], c1 = 0, c2 = 0;;
	
	for(i = 0; i < 8; i++){
		printf("Digite um número inteiro: \n");
		scanf("%d", &x[i]);
		
		if(x[i] > 0){
			r1[c1] = x[i];
			c1++;
		}else{
			if(x[i] < 0){
				r2[c2] = x[i];
				c2++;		
			}
		}
	}
	
	for(i = 0; i < c1; i++){
		printf("Vetor com números positivos, Vetor [%d] = %d.\n", i, r1[i]);
	}
	
	for(i = 0; i < c2; i++){
		printf("Vetor com números negativos, Vetor [%d] =  %d.\n", i, r2[i]);
	}
	
	
	
	return 0;
}
