#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2;
	printf("Digite o valor de cada dimensão do cômodo: \n");
	scanf("%f %f", &n1, &n2);
	printf("Tamanho da área: %.2f²\nIluminação necessária: %.2f W", (n1 * n2), (n1 * n2) * 18);

	return 0;
}
