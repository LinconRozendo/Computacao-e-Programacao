#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, x[10], par[10], imp[10], c1 = 0, c2 = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um número inteiro.\n");
		scanf("%d", &x[i]);
		
		if(fmod(x[i],2) == 0){
			par[c1] = x[i];
			c1++;
		}else{
			imp[c2] = x[i];
			c2++;
		}
	}
	
	for(i = 0; i < c1; i++){
		printf("Vetor par: elemento [%d] e seu valor %d.\n", i, par[i]);
	}
	
	for(i = 0; i < c2; i++){
		printf("Vetor ímpar: elemento [%d] e seu valor %d.\n", i, imp[i]);
	}
	
	
	
	return 0;
}
