#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op = 0;
	float n1, n2, n3, p1, p2, p3;
	
	while(op!=3){
		printf("Menu de op��es:\n1. M�dia aritm�tica.\n2. M�dia ponderada.\n3. Sair\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
				printf("Digite duas notas: \n");
				scanf("%f %f", &n1, &n2);
				printf("M�dia aritm�tica: %.1f\n", (n1+n2)/2);
			break;
			case 2:
				printf("Digite tr�s notas e seus pesos: \n");
				scanf("%f %f %f %f %f %f", &n1, &p1, &n2, &p2, &n3, &p3);
				printf("M�ida ponderada: %.1f\n", ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));
			break;
			case 3:
			break;
			default:
				printf("Digite algo �til.\n");
		}
		
		
	}
	
	return 0;
}
