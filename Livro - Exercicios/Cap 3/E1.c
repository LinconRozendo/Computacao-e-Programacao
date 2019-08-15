#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3, n4;
	printf("Digite quatro notas, de 0 a 10: \n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	if((n1+n2+n3+n4)/4 >= 7){
		printf("Você foi aprovado, sua média: %.1f\n", (n1+n2+n3+n4)/4);
	}else{
		printf("Você foi reprovado, sua média: %.1f\n", (n1+n2+n3+n4)/4);
	}
	
	
	
	return 0;
}
