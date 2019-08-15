#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int h, m;
	printf("Digite a hora e o(s) minuto(s): \n");
	scanf("%d %d", &h, &m);
	printf("Valor da hora em minutos: %d\nValor total dos minutos: %d\nValor total em segundos: %d.", (h * 60), (h * 60) + m, ((h * 60) + m) * 60);
	printf("\n\n\n\n\nEU SOU UM ESTUDANTE PROFISSIONAL!!!\n\n\nACABOU O MEL.");
	
	return 0;
}
