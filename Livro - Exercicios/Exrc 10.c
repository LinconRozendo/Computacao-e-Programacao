#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float l;
	printf("Digite o valor do lado: \n");
	scanf("%f",&l);
	printf("�rea do quadrado: %.2f", (l * l));
	
	return 0;
}
