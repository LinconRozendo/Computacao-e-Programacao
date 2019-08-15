#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int cA, cO;
	printf("Digite os valores de cada cateto: \n");
	scanf("%d %d", &cA, &cO);
	printf("Valor da hipotenusa: %d", (cA * cA) + (cO * cO));
	
	return 0;
}
