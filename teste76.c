/* 
Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escreve-los.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char vetor[40] = "Boa noite a Todos, eu sou o guto";
	int tamanho = strlen(vetor); //tamanho da string
	int i;
	
	for(i = 0; i < tamanho; i++){
		if(vetor[i] != ' '){
			printf("%c", vetor[i]);
		}
	}
	
	return 0;	
}
