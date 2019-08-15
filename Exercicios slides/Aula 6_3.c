#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "portuguese");
	
	char s;
	float h;
	
	printf("Digite seu sexo e altura: \n");
	scanf("%c %f", &s, &h);
	
	if(s == 'm'){
		printf("Peso ideal: %.1f\n", (72.7 * h) - 58);
	}else{
		if(s == 'f'){
			printf("Peso ideal: %.1f\n", (62.1 * h) - 44,7);
		}
	}
	
	
	
	
	return 0;
}
