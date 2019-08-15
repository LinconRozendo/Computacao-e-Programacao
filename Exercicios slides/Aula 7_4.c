#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int i = -1, id = 2;
	float c1 = 0, c2 = 0;
	
	printf("Digite sua idade: \n");

	
	while(id != 0){
		scanf("%d", &id);
		
		if(id < 50 && id > 0){
			c1++;
		}else{
			if(id > 70){
				c2++;
			}
		}
		
		i++;
	}
	
	printf("Quantidade de pessoas com idade menor que 50 anos: %.0f.\n", c1);
	printf("Porcentual de pessoas com idade maior que 70 anos: %.1f%%.\n", (c2/i)*100);
	
	return 0;
}
