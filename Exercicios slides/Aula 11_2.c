#include<math.h>
#include<locale.h>
#include<stdio.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x[5][5], i, j, s1, s2, s3, s4;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("Digite um número:\n");
			scanf("%d", &x[i][j]);
		}
	}
	
	s1 = x[4][0] + x[4][1] + x[4][2] + x[4][3] + x[4][4];
	s2 = x[0][1] + x[1][1] + x[2][1] + x[3][1] + x[4][1];
	s3 = x[0][0] + x[1][1] + x[2][2] + x[3][3] + x[4][4];]
	s4 = x[0][4] + x[1][3] + x[2][2] + x[3][1] + x[4][0];
	
	
	printf("Soma dos elementos da quarta linha: %d.\n", s1);
	printf("Soma dos elementos da segunda coluna: %d.\n", s2);
	printf("Soma dos elementos da diagonal principal: %d.\n", s3);
	printf("Soma dos elementos da diagonal secundária: %d.\n", s4);
	
	
	
	
	return 0;
}
