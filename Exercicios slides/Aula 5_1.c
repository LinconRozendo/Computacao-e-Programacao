#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, media = 0;
	
	printf("Digite suas notas: \n");
	scanf("%f %f", &nota1, &nota2);
	
	media = ( (nota1 + nota2) / 2);
	
	if(media >= 7){
		printf("Voc� foi aprovado, com m�dia: %.2f.\n", media);
	}else{
		printf("Voc� foi reprovado, com m�dia: %.2f.\n", media);
	}
	
	
	
	return 0;
}
