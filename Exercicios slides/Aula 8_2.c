#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int i, ms = 0, ps = 0, pn = 0, h = 0;
	float hn = 0;
	char s, r;
	
	for(i = 0; i < 10; i++){
		printf("Digite seu sexo e sua resposta: \n");
		scanf("%c", &s);
		scanf("%c", &r);
		
		if(r == 's'){
			ps++;
			if(s == 'm'){
				ms++;
			}
			if(s == 'h'){
				h++;
			}
		}else{
			if(r == 'n'){
				pn++;
				if(s == 'h'){
					h++;
					hn++;
				}
			}
		}
	}
	
	printf("N�meros de pessoas que responderam sim: %.0f.\n", ps);
	printf("N�meros de pessoas que responderam n�o: %.0f.\n", pn);
	printf("N�meros de mulheres que responderam sim: %.0f.\n", ms);
	printf("Percentual de homens que disseram n�o entre os homens: %.1f%%.\n", (hn/h)*100);
	
	
	
	return 0;
}
