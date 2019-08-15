#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	float n;
	printf("Digite a quantia que vossa excelência ainda não gastou com alguma besteira: \n");
	scanf("%f", &n);
	printf("Valor convertido em dólares: %.2f\nValor convertido em marco-alemão: %.2f\nValor convertido em libras: %.2f",
		(n * (1.80)), (n * 2), (n * (1.57)));
	
	return 0;
}
