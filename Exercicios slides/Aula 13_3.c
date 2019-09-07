#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int m[4][3], i, j, v[4] = {0, 0, 0, 0};
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um número: \n");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("Matriz digitada.\n");
	
	for(i = 0; i < 4; i++){
		
		printf("|| %d %d %d ||\n", m[i][0], m[i][1], m[i][2]);
		
		for(j = 0; j < 3; j++){
	
			v[i] += m[i][j];	
			
		}
	}
	
	printf("Vetor com a soma de cada linha.\n");
	
	for(i = 0; i < 4; i++){
		
		printf("Vetor com a soma da linha %d: %.d.\n", (i+1), v[i]);
		
	}
	
	
	
	return 0;
}
