#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op = 0;
	float n1, n2, n3, p1, p2, p3;
	
	while(op!=3){
		printf("Menu de opções:\n1. Média aritmética.\n2. Média ponderada.\n3. Sair\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("Digite duas notas: \n");
				scanf("%f %f", &n1, &n2);
				printf("Média aritmética: %.1f\n", (n1+n2)/2);
			break;
			case 2:
				printf("Digite três notas e seus pesos: \n");
				scanf("%f %f %f %f %f %f", &n1, &p1, &n2, &p2, &n3, &p3);
				printf("Méida ponderada: %.1f\n", ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));
			break;
			case 3:
			break;
			default:
				printf("Digite algo útil.\n");
		}
		
		
	}
	
	return 0;
}
