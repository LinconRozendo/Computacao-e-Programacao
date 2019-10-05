#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char s, r;
	float ch = 0;
	int i, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	
	for(i = 0; i < 5; i++){
		
		printf("Digite seu sexo e sua resposta: .\n");
		scanf(" %c", &s);
		scanf(" %c", &r);
		
		if(r == 's'){
			c1++;
			if(s == 'f'){
				c3++;
			}
			
		}
		
		if(r == 'n'){
			c2++;
			if(s == 'm'){
				ch++;
			}
		}
		
		if(s == 'm'){
			c4++;
		}
	}
	
	printf("Pessoas que responderam sim: %d.\n", c1);
	printf("Pessoas que responderam não: %d.\n", c2);
	printf("Mulheres que responderam sim: %d. \n", c3);
	printf("Porcentagem de homens que responderam não, entre todos os homens: %.2f%%.\n", (ch / c4) * 100);
	
	
	
	
	
	return 0;
}
