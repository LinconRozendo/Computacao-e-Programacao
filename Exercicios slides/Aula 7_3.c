#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int x, i;
	float c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	
	for(i = 0; i < 8; i++){
		printf("Digite sua idade: \n");
		scanf("%d", &x);
		
		if(x <= 15){
			c1++;
		}else{
			if(x >= 16 && x <= 30){
				c2++;
			}else{
				if(x >= 31 && x <= 45){
					c3++;
				}else{
					if(x >= 46 && x <= 60){
						c4++;
					}else{
						c5++;
					}
				}
			}
		}	
	}
	
	printf("Quantidade de pessoas na faixa 1: %.1f\n", c1);
	printf("Quantidade de pessoas na faixa 2: %.1f\n", c2);
	printf("Quantidade de pessoas na faixa 3: %.1f\n", c3);
	printf("Quantidade de pessoas na faixa 4: %.1f\n", c4);
	printf("Quantidade de pessoas na faixa 5: %.1f\n", c5);
	printf("Porcentual de pessoas na primeira faixa: %.1f%%\n", (c1/8)*100);
	printf("Porcentual de pessoas na última faixa: %.1f%%\n", (c5/8)*100);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
