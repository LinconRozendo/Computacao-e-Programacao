#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float t;
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &t);
	printf("Temperatura convertida em Fahrenheit: %.2f", (180 * (t + 32)) / 100);
	
	return 0;
}
