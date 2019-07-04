#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float p;
	printf("Digite seu peso: \n");
	scanf("%f", &p);
	printf("Seu peso caso você engorde 15%%: %.2f\nSeu peso caso você emagreça 20%%: %.2f", (p + (p * 0.15)), (p - (p * 0.20)));
	
	return 0;
}
