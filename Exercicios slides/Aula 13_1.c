#include<math.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int m[3][3], i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um número: \n");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\nMatriz digitada.\n\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %d %d %d ||\n", m[i][0], m[i][1], m[i][2]);
	}
	
	printf("\n\nSoma dos elementos da terceira linha.\n\n");
	
	printf("Linha 3:   || %d %d %d ||  == %d.\n", m[2][0], m[2][1], m[2][2], (m[2][0] + m[2][1] + m[2][2]));
	
	printf("\n\nSoma dos elementos da diagona principal.\n\n");
	
	printf("Diagonal princiapl:\n||%d\t\t ||\n||\t\%d\t ||\n||\t\t%d|| == %d.\n", m[0][0], m[1][1], m[2][2], (m[0][0] + m[1][1] + m[2][2]));
	
	printf("\n\nSoma dos elementos da diagonal secundária.\n\n");
	
	printf("Diagonal secundária: \n||\t\t%d||\n||\t%d\t ||\n||%d\t\t || == %d.\n", m[0][2], m[1][1], m[2][0], (m[0][2] + m[1][1] + m[2][0]));
	
	
	return 0;
}
