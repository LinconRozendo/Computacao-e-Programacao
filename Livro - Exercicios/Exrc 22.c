#include<stdio.h>
#include<locale.h>

int  main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	printf("Digite a quantidade de lados: \n");
	scanf("%d", &n);
	printf("Quantidade de diagonais: %d", ((n * (n - 3))/2));
	
	return 0;
}
