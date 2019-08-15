#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	float n1, n2;
	printf("Digite dois números: \n");
	scanf("%f %f", &n1, &n2);
	
	printf("O menor valor entre os dois números, é: %.1f\n", fmin(n1, n2));
	
	return 0;
}
