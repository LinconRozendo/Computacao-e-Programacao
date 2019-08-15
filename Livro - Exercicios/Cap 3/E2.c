#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3;
	
	printf("Digite duas notas, de 0 a 10: \n");
	scanf("%f %f", &n1, &n2);
	
	if(n1 && n2 >= 0 &&  n2 && n1<=10){
		if((n1+n2)/2 >= 0  && (n1+n2)/2 < 4){
			printf("Reprovado, média: %.1f", (n1+n2)/2);
		}else{
			if((n1+n2)/2 >= 4 && (n1+n2)/2 < 7){
				printf("Exame Final, média: %.1f", (n1+n2)/2);
			}else{
				printf("Aprovado, média: %.1f", (n1+n2)/2);
			}
		}
		
	}else{
		printf("ZzzZZZZZZ\n");
	}
	
	
	return 0;
}
