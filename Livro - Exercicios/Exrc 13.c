#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i = 0, n;
	
	printf("Digite um número: \n");
	scanf("%d", &n);
	
	for(i = 0; i <= 10; i++){
		printf("|| %d + %d = %d || || %d - %d = %d || || %d x %d = %d ||", n, i, (n + i), n, i, (n - i), n, i, (n * i));
		if(i == 0){
			printf(" || %d / %d = %.1f ||\n", n, i, 0);
		}else{
			printf(" || %d / %d = %.1f ||\n", n, i, ((float)n / i));
		}
		
	}
	printf("Fim.");
	return 0;
}
