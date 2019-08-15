#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i;
	float x;
	
	printf("Digite um número: \n");
	scanf("%f", &x);
	
	for(i = 0; i <= 10; i++){
		printf("%0.f + %d == %.0f ||| ", x, i, (x + i));
		printf("%0.f - %d == %.0f ||| ", x, i, (x - i));
		printf("%0.f x %d == %.0f ||| ", x, i, (x * i));
		if(i == 0){
			printf("%0.f / 0 == %.1f |||\n", x, i, (x / 0));
		}else{
			printf("%0.f / %d == %.1f |||\n", x, i, (x / i));
		}
		
	}
	
	
	
	return 0;
}
