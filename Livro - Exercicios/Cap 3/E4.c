#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	float n1, n2, n3;
	
	printf("Digite tr�s n�meros: \n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("O maior n�mero, �: %.1f\n",fmax(n3, (fmax(n1, n2))));
	
	return 0;
}
