#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	printf("Digite o valor de cada dimens�o do c�modo: \n");
	scanf("%f %f", &n1, &n2);
	printf("Tamanho da �rea: %.2f�\nIlumina��o necess�ria: %.2f W", (n1 * n2), (n1 * n2) * 18);

	return 0;
}
