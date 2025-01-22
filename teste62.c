/*
Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N. Mostre a tabuada na forma:

1 x N = N 2 x N = 2N ... N x N = N2
*/

#include <stdio.h>
#include <locale.h>

int tabuadas(int n){
	int i, result, j;
	
	for(i = 1; i <= n; i++){
		printf("Tabuada %d\n", i);
		for(j = 1; j <= 10; j++){
			printf("%d X %d = %d\n",i, j, j*i);
		}
		printf("\n");
	}
}

int main(){
	tabuadas(10);
}
