#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int id = 1, i = -1;
	float m;
	
	while(id!=0){
		printf("Digite a idade: \n");
		scanf("%d", &id);
		m += id;
		i++;
	}
	
	printf("Média das idades digitadas: %.1f.\n", m);
	
	return 0;
}
