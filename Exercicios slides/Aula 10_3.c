#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char nome[8][30];
	int i;
	float n[8];
	
	for(i = 0; i < 8; i++){
		printf("Digite seu nome e sua nota: \n");
		scanf("%s %f", &nome[i], &n[i]);
	}
	
	printf("Relatório de notas.\n");
	
	for(i = 0; i < 8; i++){
		printf("%s %.1f.\n", nome[i], n[i]);
	}
	
	
	return 0;
}
