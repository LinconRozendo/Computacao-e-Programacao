#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n;
	
	printf("Digite o valor do seu saldo m�dio: \n");
	scanf("%f", &n);
	
	if(n <= 200){
		printf("Valor do saldo m�dio: %.1f \nValor do cr�dito: %.1f\n", n, (n * 0.10));
	}else{
		if(n > 200 && n <= 300){
			printf("Valor do saldo m�dio: %.1f \nValor do cr�dito: %.1f\n", n, (n * 0.20));
		}else{
			if(n > 300 && n <= 400){
				printf("Valor do saldo m�dio: %.1f \nValor do cr�dito: %.1f\n", n, (n * 0.25));
			}else{
				if(n > 400){
					printf("Valor do saldo m�dio: %.1f \nValor do cr�dito: %.1f\n", n, (n * 0.30));
				}
			}
		}
	}
	
	return 0;
}
