#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	float n;
	printf("Digite a quantia que vossa excel�ncia ainda n�o gastou com alguma besteira: \n");
	scanf("%f", &n);
	printf("Valor convertido em d�lares: %.2f\nValor convertido em marco-alem�o: %.2f\nValor convertido em libras: %.2f",
		(n * (1.80)), (n * 2), (n * (1.57)));
	
	return 0;
}
