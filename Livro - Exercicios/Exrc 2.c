#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3; 	//declarando as variaveis que vão ser usadas
	printf("Digite três valores: \n");	//informar o usuario o que sera preciso
	scanf("%d %d %d", &n1, &n2, &n3);	//guardando os valores para a multiplicação
	printf("Valor da multiplicação dos três números: %d", (n1*n2*n3));	//exibindo o resultado sem precisar de outra variavel
	
	return 0;
}
