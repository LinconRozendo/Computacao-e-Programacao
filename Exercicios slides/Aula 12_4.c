#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float m[3][3], vr1[3], vr2[3], vr3[3];
	int i, j;
	
	printf("Primeira Matriz.\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			
			printf("Digite um número: \n");
			scanf("%f", &m[i][j]);
			
			if(i == 0){
				vr1[j] = m[i][j];
			}
			
			if(i == 1){
				vr2[j] = m[i][j];
			}
			
			if(i == 2){
				vr3[j] = m[i][j];
			}
		}
	}
	
	
	printf("Matriz digitada.\n");
	
	for(i = 0; i < 3; i++){
		printf("|| %.1f || || %.1f || || %.1f ||\n", m[i][0], m[i][1], m[i][2]);
	}
	
	printf("\n\nVetores resultantes de cada linha da matriz.\n");
	
	
	
	for(i = 0; i < 3; i++){
		if(i == 0){
			printf("\n\nVetor da primeira linha.\n");
			
			printf("|| %.1f || || %.1f || || %.1f ||\n", vr1[0], vr1[1], vr1[2]);
			
		}
		
		if(i == 1){
			printf("\n\nVetor da segunda linha.\n");
			
			printf("|| %.1f || || %.1f || || %.1f ||\n", vr2[0], vr2[1], vr2[2]);
			
		}
		
		if(i == 2){
			printf("\n\nVetor da terceira linha.\n");
			
			printf("|| %.1f || || %.1f || || %.1f ||\n", vr3[0], vr3[1], vr3[2]);
			
		}
		
		
	}
	
	
	return 0;
}
