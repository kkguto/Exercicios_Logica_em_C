#include <stdio.h>
#include <unistd.h>

int main(){
	int num, i, fatorial;
	do {
		printf("Digite um numero inteiro positivo:\n");
		scanf("%d", &num);
	} while(num < 0);
	//5! = 5 * 4 * 3 * 2 * 1 = 120
	
	for (i = 1; i <= num; i++){
		fatorial*=i;
	}
	printf("Fatorial de %d >> %d", num, fatorial);
}
