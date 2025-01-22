
// #include <stdbool.h>
// #include <stdio.h>
// int main() {
//   unsigned int valor_sacar, carteira, escolha = 1, nota100, nota50, nota20,
//                                       nota10, resto;
//   bool sacar;

//   // printf("Digite o valor que deseja sacar(entre R$10 e R$1000, multiplos
//   de
//   // 10):\n"); scanf("%d", valor_sacar);
//   valor_sacar = 270;
//   carteira = 1000;
//   sacar = (valor_sacar % 10 == 0) && (valor_sacar <= carteira);

//   nota100 = valor_sacar / 100;
//   resto = valor_sacar % 100;
//   nota50 = valor_sacar / 50;
//   resto = valor_sacar % 50;

//   printf("%d", resto);
// }

// #include <stdio.h>

// int main(){
//                                     int num = 3, num1 = 2, num2 = 5 ;
//                                     if ((num>num1) && (num > num2)){
//                                                                         printf("%d",
//                                                                         num);
//                                     }else if((num1>num) && (num1 > num2)) {
//                                                                         printf("%d",
//                                                                         num1);
//                                     }else if ((num2>num) && (num2 > num1)){
//                                                                         printf("%d",
//                                                                         num2);
//                                     }
// }

// #include <stdio.h>

// int main() {
//   int escolha = 0;
//   char movimento;
//   printf("Digite o movimento do personagem:\n");
//   printf("I ou W");
//   printf("M ou Z");
//   printf("J ou A");
//   printf("S ou K");
//   printf("Q");
//   scanf("%c", &movimento);

//   switch (movimento) {
//   case 'I':
//   case 'W':
//     printf("Andou para cima\n"); break;

//   case 'M':
//   case 'Z':
//     printf("Andou para Baixo\n");break;
//   case 'J':
//   case 'A':
//     printf("Andou para Esquerda\n"); break;
//   case 'S':
//   case 'K':
//     printf("Andou para Direita\n"); break;
//   }
// }

/*
#include <stdio.h>

int media(float, float);

int main() {
                                 int i, n ;
                                 printf("Digite a quantidade de notas que ira
digitar:\n"); scanf("%d", &n);

                                 float nota[n], soma = 0, x;

                                 for (i = 0; i < n; i++) {
                                                 printf("Digite as notas:\n");
                                                 scanf("%f", &nota[i]);
                                                 soma += nota[i];
                                 }

                                 x = media(soma, n);
                                 printf("Media >> %.2f", x);
}
int media(float soma, float n) { return soma / n;}
*/

/*
#include <stdio.h>

int ordem_direta(int[], int);

int main(){
                                 int vetor[] = {9, 6, 3, 2, 1};
                                 int tamanho = sizeof(vetor)/sizeof(vetor[0]);


                                 ordem_direta(vetor, tamanho);
}

int ordem_direta(int arr[], int n){

}
*/

/*
#include <stdio.h>
void pares(int[], int tamanho);
int main() {
        int tamanho = 10;
        int vetor[10], i;

        pares(vetor, tamanho);
}

void pares(int vetor[], int tamanho) {
        int i;
        for (i = 0; i < tamanho; i++) {
                vetor[i] = i * 2;
        }
        for (i = 0; i < tamanho; i++) {
                printf("%d ", vetor[i]);
        }
}
*/

// busca linear -> usado em arrays desgornizados e busca binaria
//  bibliotecas Isearch, lfind e bsearch


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i;
int busca_linear(int[], int, int[], int);

int main() {

  int vetor[10], v[5] = {10, 15, 60, 65, 90};
  int tam = sizeof(vetor) / sizeof(vetor[0]),
      tam_valor = sizeof(vetor) / sizeof(vetor[0]);
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
    // Para cada elemento em vetor
    for (int i = 0; i < tam; i++) {
        // Verificar se esse elemento está presente em valor
        for (int j = 0; j < tam_valor; j++) {
            if (vetor[i] == valor[j]) {
                // Se encontrar uma correspondência, retorna 1
                return 1;
            }
        }
    }
    // Se nenhum valor for encontrado, retorna 0
    return 0;
}


/*
#include <stdio.h>

int i;
void exibir(int[]);
int somar(int []);

int main(){
  int vetor[5], x;

  for (i = 0; i<5; i++){
    printf("Digite o valor %d\n", i+1);
    scanf("%d", &vetor[i]);
  }
  x = somar(vetor);
  printf("A soma entre esses elementos é %d\n", x);

  exibir(vetor);

}

int somar(int v[]){
  int soma = 0;
  for (i = 0; i<5; i++){
    soma += v[i];
  }
  return soma;
}

void exibir(int v[]){
  for(i=0; i<5; i++){
    printf("%d ", v[i]);
  }
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA (3)
#define COLUNA (3)

int main() {

  int matriz[LINHA][COLUNA], i, j;
  srand((time(NULL)));
  for (i = 0; i < LINHA; i++) {
    for (j = 0; j < COLUNA; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
  printf("\n");

  for (i = 0; i < LINHA; i++) {
    for (j = 0; j < COLUNA; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
  int i, j;
  srand((time(NULL)));
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      matriz[i][j] = rand() % 100 + 1;
    }
  }
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int verificarMaior(int linhas, int colunas, int matriz[linhas][colunas]) {
  int i, j, maior = matriz[0][0];
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      if (maior < matriz[i][j]) {
          maior = matriz[i][j];
      }
    }
  }
  return maior;
}

int main() {
  int linhas, colunas;

  printf("Digite o numero de linhas:\n");
  scanf("%d", &linhas);

  printf("Digite o numero de colunas:\n");
  scanf("%d", &colunas);

  int matriz[linhas][colunas];

  criarMatriz(linhas, colunas, matriz);
  int maior = verificarMaior(linhas, colunas, matriz);
  printf("\n");
  printf("%d", maior);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas (3)
#define colunas (3)

int diagonal(int matriz[linhas][colunas]) {
 int i, soma = 0;
 printf("\n");
 for (i = 0; i < linhas; i++) {
   printf("%d ", matriz[i][i]);
   soma += matriz[i][i];
 }
 return soma;
}

int main() {

 int i, matriz[linhas][colunas], j, soma;

 srand(time(NULL));
 for (i = 0; i < linhas; i++) {
   for (j = 0; j < colunas; j++) {
     matriz[i][j] = rand() % 100 + 1;
   }
 }

 for (i = 0; i < linhas; i++) {
   for (j = 0; j < colunas; j++) {
     printf("%d ", matriz[i][j]);
   }
   printf("\n");
 }
 soma = diagonal(matriz);

 printf("\n%d", soma);
}
*/

