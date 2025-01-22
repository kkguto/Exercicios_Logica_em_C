#include <stdio.h>
#include <string.h>

int bubble_sort(int vetor[], int tam){
	int i, j;
	
	for(i = 0; i < tam - 1; i++){
		for(j = 0; j < tam - i - 1; j++){
			if(vetor[j] > vetor[j+1]){
				int temp = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temp;
			}
		}
	}
}

void bubble_sort_string(char vetor[][5], int tam){
	int i, j;
	
	for(i = 0; i< tam - 1; i++){
		for(j = 0; j < tam - i -1; j++){
			if(strcmp(vetor[j], vetor[j+1]) > 0){
				char temp[5];
				strcpy(temp, vetor[j]);
				strcpy(vetor[j], vetor[j+1]);
				strcpy(vetor[j+1], temp);
			}
		}
	}
}

int busca_binaria(int vetor[], int tam, int valor){
	int inicio = 0;
	int fim = tam - 1;
	
	int cont = 0;
	
	while(inicio <= fim){
		cont++;
		int meio = (inicio + fim)/2;
		if(vetor[meio] == valor){
			return meio; //retorna o indice do valor encontrado
		} else if(vetor[meio] < valor){
			inicio = meio + 1; // metade direita
		}else{
			fim = meio - 1; // metade esquerda
		}
	}
	
	return -1;
}

int busca_linear(int vetor[], int tam, int valor){
	int i;
	int encontrado = 0;
	
	for(i = 0; i<tam; i++){
		if(vetor[i] == valor){
			encontrado = 1;
			printf("Valor encontrado\n");
			return i;
			break;
		}
	}
	return -1;
}

int counting_sort(int vetor[], int tam){
	int i, j;

	int vetor2[tam];
	int maior = vetor[0];
	
	for(i = 0; i<tam; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	int contagem[maior + 1];
	
	for(i = 0; i <= maior; i++){
		contagem[i] = 0;
	}
	
	
	for(i = 0; i<tam; i++){
		contagem[vetor[i]]++;
	}
	
	for(i = 1; i <= maior; i++){
		contagem[i] += contagem[i-1];
	}
	
	for(j = tam - 1; j >= 0; j--){
		vetor2[contagem[vetor[j]] - 1] = vetor[j];
        contagem[vetor[j]]--;
	}
	
	for (i = 0; i < tam; i++){
        vetor[i] = vetor2[i];
    }
}

void counting_sort_string(char vetor[][5], int tam){
	int i, j;

	char vetor2[tam];
	char maior = vetor[0];
	
	for(i = 0; i<tam; i++){
		if(strcmp(vetor[i], maior) > 0){
			maior = vetor[i];
		}
	}
	
	 contagem[maior + 1];
	
	for(i = 0; i <= maior; i++){
		contagem[i] = 0;
	}
	
	
	for(i = 0; i<tam; i++){
		contagem[vetor[i]]++;
	}
	
	for(i = 1; i <= maior; i++){
		contagem[i] += contagem[i-1];
	}
	
	for(j = tam - 1; j >= 0; j--){
		vetor2[contagem[vetor[j]] - 1] = vetor[j];
        contagem[vetor[j]]--;
	}
	
	for (i = 0; i < tam; i++){
        vetor[i] = vetor2[i];
    }
}

int main(){
	
	int i;
	char vetor[5][5] = {'bbbb', 'oooo', 'aaaa', 'cccc', 'pppp'};
	int tam = sizeof(vetor)/sizeof(vetor[0]);
	
	counting_sort(vetor, tam);
	
	for(i = 0; i<7; i++){
		printf("%s ", vetor[i]);
	}

//	int num;
//	char livros[10][5];
//	int i;
//	while(1){
//		
//		printf("Digite o numero de livro que deseja cadastrar: ");
//		scanf("%d", &num);
//		
//		if(num == 0){
//			break;
//		}
//		
//		for(i = 0; i < num; i++){
//			printf("Livro %d: ", i+1);
//			scanf(" %s", livros[i]);
//		}
//		
//		bubble_sort_string(livros, num);
//		
//		for(i = 0; i < num; i++){
//			printf("%s\n", livros[i]);
//		}
//	}
	 
	return 0;
}
