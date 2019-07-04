#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n;
	printf("Digite o valor do produto: \n");
	scanf("%f", &n);
	printf("Valor do produto com desconto de 10%%: %.2f", (n - (n * (0.10))));
	
	return 0;
}
