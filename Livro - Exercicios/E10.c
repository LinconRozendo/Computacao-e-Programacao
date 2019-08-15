#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n;
	
	printf("Digite o preço de fábrica do carro: \n");
	scanf("%f", &n);
	
	if(n > 0 && n <= 12000){
		printf("Preço final: %.1f\n", n + ( n * 0.05));
	}else{
		if(n > 12000 && n <= 25000){
			printf("Preço final: %.1f\n", n + ( n * 0.10) + (n * 0.15));
		}else{
			printf("Preço final: %.1f\n", n + ( n * 0.15) + (n * 0.20));
		}
	}
	
	return 0;
}
