//Fa�a um programa que verifique e mostre os n�meros entre 1.000 e 2.000 (inclusive) que, quando divididos por 11 produzam resto igual a 2.

#include <stdio.h>

int main(){
	int i;
	
	for(i = 1000; i <= 2000; i++){
		if(i % 11 == 2){
			printf("%d ", i);
		}	
	}	
}
