#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float cateto1, cateto2, hipotenusa;
	
	printf("Digite o valor do primero e segundo cateto: \n");
	scanf("%f %f", &cateto1, &cateto2);
	
	hipotenusa = sqrt( pow(cateto1, 2) + pow(cateto2, 2));
	//hipotenusa = sqrt( cateto1 * cateto1, cateto2 * cateto2);
	
	printf("Valor da hipotenusa: %.2f.", hipotenusa);
	
	
	
	
	return 0;
}
