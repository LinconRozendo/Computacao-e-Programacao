#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int aN, aA;
	printf("Digite o ano de seu nascimento e o ano atual: \n");
	scanf("%d %d", &aN, &aA);
	printf("Idade em anos: %d\nIdade em meses: %d\nIdade em dias: %d\nIdade em semanas: %d\n", (aA - aN), (aA - aN) * 12, ((aA - aN) * 365), (aA - aN) * 52,1429);
	
	return 0;
}
