/*
Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor. 
*/

#include <stdio.h>

int quant_divisores(int n){
	int count = 0, i;
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			count++;
		}
	}
	return count;
		
}

int main(){
	
	int num;
	
	printf("Digite um numero para ver a quantidade de divisores:\n");
	scanf("%d", &num);
	int result = quant_divisores(num);
	printf("O numero %d tem %d Divisores", num, result);
	
	return 0;
}
