#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int nota1, nota2, nota3, media = 0;
	
	printf("Digite sua primeira nota: \n");
	scanf("%d", &nota1);
	
	printf("Digite sua segunda nota: \n");
	scanf("%d", &nota2);
	
	printf("Digite sua segunda nota: \n");
	scanf("%d", &nota3);
	
	media = ((nota1 + nota2 + nota3) / 3);
	
	printf("Sua m�dia foi: %d\n", media);
	
	
	return 0;
}

// o c�digo abaixo � o usualmente usado para calcular m�dia, pois o mesmo considera a casa decimal.
/*int main(){
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, nota3, media = 0;
	
	printf("Digite sua primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("Digite sua segunda nota: \n");
	scanf("%f", &nota3);
	
	media = ((nota1 + nota2 + nota3) / 3);
	
	printf("Sua m�dia foi: %.2f\n", media);
	
	
	return 0;
}*/
