#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float s, c1, c2;
	printf("Digite seu sal�rio e os valores de cada conta: \n");
	scanf("%f %f %f", &s, &c1, &c2);
	printf("Quanto restar� do seu sal�rio: %.2f", s - ( c1 + c2 + (c1 * 0.02) + (c2 * 0.02)));
	
	return 0;
}
