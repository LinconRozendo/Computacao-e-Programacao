#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("O n�mero � par.\n");
	}else{
		printf("N�mero �mpar.\n");
	}
	
	
	
	return 0;
}
