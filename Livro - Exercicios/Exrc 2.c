#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, n3; 	//declarando as variaveis que v�o ser usadas
	printf("Digite tr�s valores: \n");	//informar o usuario o que sera preciso
	scanf("%d %d %d", &n1, &n2, &n3);	//guardando os valores para a multiplica��o
	printf("Valor da multiplica��o dos tr�s n�meros: %d", (n1*n2*n3));	//exibindo o resultado sem precisar de outra variavel
	
	return 0;
}
