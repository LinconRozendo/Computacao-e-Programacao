#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float s, v;
	printf("Digite o valor do seu sal�rio fixo e de suas vendas: \n");
	scanf("%f %f", &s, &v);
	printf("Valor da comiss�o sobre as vendas %.2f e seu sal�rio com comiss�o %.2f: ", (v * 0.04), (s + (v * 0.04)));
	
	return 0;
}
