#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	printf("Digite dois valores para a divisão: \n");
	scanf("%d %d", &n1, &n2);
	printf("\nValor da divisão de %d por %d: %d", n1, n2, (n1/n2));
	
	return 0;
}
