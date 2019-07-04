#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float s, v;
	printf("Digite o valor do seu salário fixo e de suas vendas: \n");
	scanf("%f %f", &s, &v);
	printf("Valor da comissão sobre as vendas %.2f e seu salário com comissão %.2f: ", (v * 0.04), (s + (v * 0.04)));
	
	return 0;
}
