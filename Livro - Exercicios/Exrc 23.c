#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a1, a2;
	printf("Digite os �ngulos do tri�ngulo: \n");
	scanf("%d %d", &a1, &a2);
	printf("Valor do terceiro �ngulo: %d", 180 - (a1 + a2));
	
	return 0;
}
