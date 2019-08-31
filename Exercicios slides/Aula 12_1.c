#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float m1[3][2], m2[3][2], mr1[3][2], mr2[3][2];
	int i, j;
	
	printf("Primeira Matriz.\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			
			printf("Digite um número: \n");
			scanf("%f", &m1[i][j]);
			
		}
	}
	
	printf("Segunda Matriz.\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			
			printf("Digite um número: \n");
			scanf("%f", &m2[i][j]);
			
			if(i == 0){
				mr1[i][j] = m1[i][j] + m2[i][j];
				mr2[i][j] = m1[i][j] - m2[i][j];
			}
			
			if(i == 1){
				mr1[i][j] = m1[i][j] + m2[i][j];
				mr2[i][j] = m1[i][j] - m2[i][j];
			}
			
			if(i == 2){
				mr1[i][j] = m1[i][j] + m2[i][j];
				mr2[i][j] = m1[i][j] - m2[i][j];
			}
		}
	}
	
	printf("Matriz resultante da soma entre matrizes.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f || || %.1f ||\n", mr1[i][0], mr1[i][1]);
	}
	
	printf("\n\nMatriz resultante da diferença entre matrizes.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f || || %.1f ||\n", mr2[i][0], mr2[i][1]);
	}
	
	
	return 0;
}
