#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x, j, c = 0, r = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um número qualquer: .\n");
		scanf("%d", &x);
		r = 0;
		for(j = 2; j < x; j++){
			if(x % j == 0){
				r++;
			}
		}
		
		if(r == 0){
			c++;
		}
	}
	
	printf("Quantidade de números primos: %d.\n", c);
	
	
	return 0;
}
