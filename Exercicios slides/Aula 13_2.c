#include<math.h>
#include<locale.h>
#include<stdio.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float m[3][3], n;
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um número: \n");
			scanf("%f", &m[i][j]);
		}
	}
	
	printf("Digite um número para dividir a matriz: \n");
	scanf("%f", &n);
	
	printf("Matriz digitada.\n");
	
	for(i = 0; i < 3; i++){
		
		printf("|| %.1f %.1f %.1f ||\n", m[i][0], m[i][1], m[i][2]);
		
		for(j = 0; j < 3; j++){
			m[i][j] =  m[i][j] / n; // esse código não interfere na exibição da matriz pq ela é mostrada antes da divisão dos elementos
		}
		
	}
	
	printf("\n\n");
	
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f %.1f %.1f ||\n", m[i][0], m[i][1], m[i][2]);
	}
	
	
	
	return 0;
}
