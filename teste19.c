#include <stdio.h>

int main(){
	unsigned int num;
	int i;
	
	printf("Digite um numero para verificar se Eh primo ou Nao:\n");
	scanf("%d", &num);
	 
	if (num < 1){
		printf("Digite um numero Valido");
	}else{
		for (i=2; i < num; i++){
			if (num % i == 0){
				printf("Não eh primo");
				break;
			}
		}
	}
		if (i == num){
			printf("Eh primo");
		}
}
 
