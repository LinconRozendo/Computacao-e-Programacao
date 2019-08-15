#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n[7];
	char nome[7][40];
	int i;
	
	for(i = 0; i < 7; i++){
		printf("Digite o seu nome e sua média final:\n");
		scanf("%s %f", &nome[i], &n[i]);
	}
	
	for(i = 0; i < 7; i++){
		if(n[i] < 5){
			printf("O aluno %s foi reprovado, sua média foi: %.1f.\n", nome[i], n[i]);
		}
	}
	
	
	
	return 0;
}
