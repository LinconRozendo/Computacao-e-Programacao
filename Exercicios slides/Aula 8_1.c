#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");	
	
	int i, id;
	float m_id, c1 = 0, c2 = 0, p, h;	
	
	for(i = 0; i < 4; i++){
		printf("Digite sua altura, idade e peso: \n");
		scanf("%f %d %f", &h, &id, &p);
		
		if(p > 90 && h < 1,5){
			c1++;
		}
		
		if(id >= 10 && id <= 30){
			c2++;
		}
		
		m_id += id;
	}
	
	printf("Media de idade: %.1f.\n", m_id / 8);
	printf("Quantidade com peso maior que 90 e altura menor que 1,5: %.0f.\n", c1);
	printf("Porcentual com idade entre 10 e 30 anos: %.1f%%.\n", (c2/8)*100);
	
	
	
	
	return 0;
}
