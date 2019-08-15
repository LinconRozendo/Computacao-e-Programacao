#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x[5], v = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um número: \n");
		scanf("%d", &x[i]);
		v += x[i];
	}
	
	printf("Os números digitados, somados, são: %d + %d + %d + %d + %d = %d.\n", x[0], x[1], x[2], x[3], x[4], v);
	
	
	return 0;
}
