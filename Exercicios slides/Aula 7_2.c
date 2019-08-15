#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	float h, p, id, ht = 0, c3 = 0;
	int c1 = 0, c2 = 0, i;
	
	for(i = 0; i < 5; i++){
		printf("Digite sua idade, peso e altura: \n");
		scanf("%f %f %f", &id, &p, &h);
		
		if(id > 50){
			c1++;
		}
		if(id >= 10 && id <= 20){
			c2++;
			ht += h;
		}
		if(p < 40){
			c3++;
		}
			
	}
	
	printf("Quantidade com idade supeior a 50 anos: %d.\n", c1);
	printf("Média das alturas: %.1f.\n", ht / c2);
	printf("Porcentual com peso inferior a 40kg: %.1f%%.\n", (c3 / 5)*100);
		
	
	
	
	
	
	return 0;
}
