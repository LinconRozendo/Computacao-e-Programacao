#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float salario, aumento, salario_final, valor_aumento;
	
	printf("Digite seu salário e o aumento percentual: \n");
	scanf("%f %f", &salario, &aumento);
	
	valor_aumento = ((salario * aumento) / 100);
	
	salario_final = salario + valor_aumento;
	
	printf("Valor do aumento: %.2f.\n", valor_aumento);
	printf("Valor do salário após o aumento percentual: %.2f.\n", salario_final);
	
	
	return 0;
}
