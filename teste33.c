//Uma loja deseja cadastrar 5 clientes e verificar se o faturamento da loja foi superior a loja B (faturamento = 54000).  
//Se o faturamento atingir esse valor mostre na tela uma mensagem contendo em quanto foi superado o faturamento.

#include <stdio.h>

int main(){
	int i;
	long int faturamento_B = 54000, faturamento_A, soma = 0;
	
	printf("**Cadastro de Clientes**\n\n");
	
	for(i = 0; i < 5; i++){
		printf("Cliente %d:\n", i+1);
		scanf("%ld", &faturamento_A);
		soma += faturamento_A;
	}
	if(soma > faturamento_B){
		printf("O faturamento da loja A superou o faturamento da loja B com uma diferença de %ld", soma - faturamento_B);
	}else{
		printf("O faturamento da loja A não superou o da loja B");
	}
}
