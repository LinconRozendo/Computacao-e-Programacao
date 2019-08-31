#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float m1[3][3], mr[3][3], m;
	int i, j;
	
	printf("Primeira Matriz.\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			
			printf("Digite um número: \n");
			scanf("%f", &m1[i][j]);
			
		}
	}
	
	printf("Digite um número para multiplicar a matriz: \n");
	scanf("%f", &m);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mr[i][j] = m1[i][j] * m;  /// isso é igual a m1[i][j] = m1[i][j] * m;
		}
	}
	
	printf("Matriz digitada.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f || || %.1f || || %.1f ||\n", m1[i][0], m1[i][1], m1[i][2]);
	}
	
	printf("\n\nMatriz resultante da multiplicação.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f || || %.1f || || %.1f ||\n", mr[i][0], mr[i][1], mr[i][2]);
	}
	
	
	return 0;
}
