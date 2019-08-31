#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int m[4][3], vr[3] = {0, 0, 0}, i, j;

	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			
			printf("Digite um número: \n");
			scanf("%d", &m[i][j]);
			
			if(j == 0){
				vr[j] += m[i][j];
			}
			
			if(j == 1){
				vr[j] += m[i][j];
			}
			
			if(j == 2){
				vr[j] += m[i][j];
			}
		}
	}
	
	printf("Matriz digitada.\n");
	
	for(i = 0; i < 4; i++){
		printf("|| %d || || %d || || %d ||\n", m[i][0], m[i][1], m[i][2]);
	}
	
	printf("\n\nVetor resultante da matriz.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %d ||\n", vr[i]);
	}
	
	
	return 0;
}
