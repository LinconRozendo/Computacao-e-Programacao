#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
		
	float n;
	printf("Digite a quantidade de kg: \n");
	scanf("%f",&n);
	printf("Valor convertido em grama(s): %.2f", (n * 1000));
	
	return 0;
}
