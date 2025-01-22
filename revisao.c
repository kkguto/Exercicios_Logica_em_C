#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int vetor[7] = {2,5,7,3,4,1,6}, i;
	int maior = vetor[0], indice;
	for(i = 1; i < 7; i++){
		if(maior > vetor[i]){
			maior = maior;
			indice = i;
		}else{
			maior = vetor[i];
		}
	}
	
	printf("%d", maior);
}



/*
#define LINHA (3)
#define COLUNA (3)

void soma_matriz(int A[LINHA][COLUNA], int B[LINHA][COLUNA], int C[LINHA][COLUNA]){
	int i, j, k;
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			C[i][j] = A[i][j];
		}
	}
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			C[i][j] += B[i][j];
		}
	}
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int i, j;
	int matriz_A[LINHA][COLUNA];
	int matriz_B[LINHA][COLUNA];
	int matriz_C[LINHA][COLUNA];
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("Digite o valor do indice %d%d:\n", i, j);
			scanf("%d", &matriz_A[i][j]);
		}
	}
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("Digite o valor do indice %d%d:\n", i, j);
			scanf("%d", &matriz_B[i][j]);
		}
	}
	
	soma_matriz(matriz_A, matriz_B, matriz_C);
	
		
}
*/
/*
#define LINHA (3)
#define COLUNA (3)

void multi_matriz(int A[LINHA][COLUNA], int B[LINHA][COLUNA], int C[LINHA][COLUNA]){
	int i, j ,k;
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			C[i][j] = 0;
		}
	}
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			for(k = 0; k < LINHA; k++){
				C[i][j] += A[i][j] * B[i][j];
			}
		}
	}
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	int i, j;
	int matriz_A[LINHA][COLUNA];
	int matriz_B[LINHA][COLUNA];
	int matriz_C[LINHA][COLUNA];
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("Digite o valor do indice %d%d:\n", i, j);
			scanf("%d", &matriz_A[i][j]);
		}
	}
	
	for(i = 0; i < LINHA; i++){
		for(j = 0; j < COLUNA; j++){
			printf("Digite o valor do indice %d%d:\n", i, j);
			scanf("%d", &matriz_B[i][j]);
		}
	}
	
	
	multi_matriz(matriz_A, matriz_B, matriz_C);
}
*/

/*
int bubble_sort(int v[], int n){
	int i, j;
	for(i = 0; i < n - 1 ; i++){
		for(j = 0; j < n - 1; j++){
			if (v[j] > v[j+1]){
				int teste = v[j+1];
				v[j+1] = v[j];
				v[j] = teste;
			}	
		}	
	}
}

int busca_binaria(int vetor[], int tamanho, int valor){
	int inicio = 0;
	int final = tamanho - 1;
	
	while(inicio <= final){
		
		int meio = (inicio + final)/2;
		if(vetor[meio] == valor){
			return meio;
		} else if (vetor[meio] < valor){
			inicio = meio + 1;
		} else{
			final = meio - 1;
		}
	}
	return -1;
}

int busca_linear(int vetor[], int tamanho, int valor){
	int i;
	for(i = 0; i < tamanho; i++){
		if(vetor[i] == valor){
			return 1;
		}
	}
	return -1;
}

void adcionando_num(int vetor[], int tamanho){
	int i, num;
	printf("Digite o numero de Inscriçao:\n");
	scanf("%d", &num);
	vetor[tamanho] = num ;
    tamanho++;
    for(i = 0; i < tamanho; i++){
    	printf("%d ", vetor[i]);
	}
}

int main(){
	int escolha = 0, num;
	int incricoes[11] = {2,5,1,3,4,6,8,9,11,10,7};
	int tamanho = 11;
	do{
		printf("[1] Verificação de Inscrição\n[2] Consulta de Números de Inscrição\n[3] Sair\n");
		scanf("%d", &escolha);	
		if (escolha == 1){
			printf("Digite o numero de Inscriçao:\n");
			scanf("%d", &num);
			int x = busca_linear(incricoes, tamanho, num);
			if(x == -1){
				adcionando_num(incricoes, tamanho);
				
			}else{
				printf("O numero da incricao ja esta cadastrado");
			}
				
		} else if(escolha == 2){
			bubble_sort(incricoes, tamanho);
			printf("Digite o numero de Inscriçao:\n");
			scanf("%d", &num);
			int x = busca_binaria(incricoes, tamanho, num);
			if(x == -1){
				printf("O numero nao esta cadastrado\n");
			}else{
				printf("O numero da incricao ja esta cadastrado\n");
			}
		}
	}while(escolha != 3);	
}
*/
/*
void incrementar(int *n) {
    (*n)++;  // Incrementa o valor da variável apontada por n
}

int main() {
    int numero = 5;
    
    printf("Antes: %d\n", numero);  // Imprime 5
    
    incrementar(&numero);  // Passa o endereço de numero
    
    printf("Depois: %d\n", numero);  // Imprime 6
    
    return 0;
}
*/

/*
int main(){
	int vetor[10] = {2, 4,1,0,3,7,10,8,9,6}, i;
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	
	bubble_sort(vetor, tamanho);
	int x = busca_binaria(vetor, tamanho, 8);
	
	if (x == -1){
		printf("Elemento nao encontrado");
	} else{
		printf("Elemento encontrado no indice %d", x);
	}
}
*/

/*
int i, j;
int busca_linear(int[], int, int[], int);

int main() {

  int vetor[10], v[5] = {10, 15, 60, 65, 90};
  int tam = sizeof(vetor) / sizeof(vetor[0]), tam_valor = sizeof(v) / sizeof(v[0]);
  srand(time(NULL));
  for (i = 0; i < tam; i++) {
    vetor[i] = 1 + rand() % 100;
  }
  for (i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  if (busca_linear(vetor, tam, v, tam_valor)) {
    printf("Tem pelo menos um valor");

  } else {
    printf("Nao tem valor nenhum");
  }
    return 0;
}

int busca_linear(int vetor[], int tam, int valor[], int tam_valor) {
	int count = 0;
    // Para cada elemento em vetor
    for (i = 0; i < tam; i++){
        // Verificar se esse elemento estÃ¡ presente em valor
        for (j = 0; j < tam_valor; j++) {
            if (vetor[i] == valor[j]) {
                // Se encontrar uma correspondÃªncia, retorna 1
                return 1;
            }
        }
    }
    // Se nenhum valor for encontrado, retorna 0
    return 0;
}
*/


/*
int main(){
	int i, vetor[5] = {3,2,1,5,8};
	
	for (i = 4; i >= 0; i--){
		printf("%d ", vetor[i]);	
	}
}
*/

/*
int main(){
	char titulo[51];
	int pagina, ano;
	
	printf("Digite o titulo do livro, a quantidade de paginas e o ano que lançou (titulo:paginas:ano):\n");
	fgets(titulo, sizeof(titulo), stdin);
	titulo[strcspn(titulo, "\n")] = 0;
	scanf("%d", &pagina);
	scanf("%d", &ano);
	
	int n_caracter = strlen(titulo);
	int pag_dupli = pagina << 1;
	int ano_ajustado = ano * 2;
	
	printf("%d\n%d\n%d", n_caracter, pag_dupli, ano_ajustado);
}
*/

/*
int main(){
	char nome_linha[51];
	unsigned int itens_hora;
	unsigned int horas_trabalhadas;
	
	printf("Digite o nome da linha de  montagem:\n");
	fgets(nome_linha, sizeof(nome_linha), stdin);
	nome_linha[strcspn(nome_linha, "\n")] = 0;
	
	printf("Digite o número de itens produzidos por hora:\n");
	scanf("%u", &itens_hora);
	printf("Digite o número de horas trabalhadas no dia:\n");
	scanf("%u", &horas_trabalhadas);
	
	int producao_total = itens_hora * horas_trabalhadas;
	
	int produtivo = producao_total >= 1000;
	int producao_tripl = (producao_total << 1) + producao_total;
	printf("%d\n", producao_tripl);
	printf("%d", produtivo);
}
*/
/*
int main(){
	int i, n, fatorial;
	printf("Digite um n positvio para calcular seu Fatorial:\n");
	scanf("%d", &n);
	
	if(n < 0){
		printf("Fatorial nao pode ser negativo\n");
	}else{
		for (i = 1; i <= n; i++){
			fatorial *= i;
		}
		printf("%d! >> %d", n, fatorial);	
	}
}
*/
/*
int main(){
	int x = 11, i, primo = 1;
	
	for(i = 2; i < x; i++){
		if(x % i == 0){
			primo = 0;
			break;
		}
	}
	if(primo == 1){
		printf("eh primo");
	}else{
		printf("Nao eh primo");
	}
}
*/
/*
int main(){
	//bubble sort
	int i, j;
	int vetor[11] = {2, 4,1,0,3,7,10,8,9,5,6};
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho - 1; j++){
			if(vetor[j] > vetor[j+1]){
				int x = vetor[j+1];
				vetor[j+1] = vetor[j];
				vetor[j] = x;
			}
		}
	}
	for(i = 0; i < tamanho; i++){
		printf("%d ", vetor[i]);
	}
}
*/


