#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int n1, n2; 	//declarando as variaveis que vão ser usadas
	printf("Digite os valores para n1 e n2: \n"); 	//informar o usuario o que sera preciso
	scanf("%d",&n1);	//guardando o primeiro valor digitado em n1
	scanf("%d",&n2);	//guardando o segundo valor digitado em n2
	printf("Resultado da subtração de n1 e n2: %d", (n1 - n2)); 	//exibindo o resultado sem precisar de outra variavel
	
	
	return 0;
}
