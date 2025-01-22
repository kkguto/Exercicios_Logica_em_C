//Gustavo Melo Silva - 10438415
//Marcus Ruiz Nishimura Baena - 10426044

#include <math.h> // Para usar ceil
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **lerImagemPBM(const char *nomeArquivo, int *largura, int *altura);
char verificarHomogeneidade(int **imagem, int linhaInicial, int colunaInicial,
                            int largura, int altura);
void codificarImagem(int **imagem, int linhaInicial, int colunaInicial,
                     int largura, int altura);
void liberarImagem(int **imagem, int altura);

int main() {
  int largura, altura;
  int **imagem;

  char nomeArquivo[100];
  int escolha;

  do {
    printf("\nMenu:\n");
    printf("1. Codificar imagem PBM\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
      printf("Digite o nome do arquivo PBM: ");
      scanf(" %s", nomeArquivo);

      imagem = lerImagemPBM(nomeArquivo, &largura, &altura);
      if (!imagem) {
        printf("\nErro ao carregar a imagem. Tente novamente.\n");
        break;
      }

      printf("\nCódigo da Imagem: ");
      codificarImagem(imagem, 0, 0, largura, altura);
      printf("\n");

      liberarImagem(imagem, altura);
      imagem = NULL;
      break;

    case 2:
      printf("\nSaindo do programa.\n");
      break;

    default:
      printf("Opção inválida! Tente novamente.\n");
      break;
    }
  } while (escolha != 2);

  return 0;
}

// Função para ler imagem do arquivo PBM
int **lerImagemPBM(const char *nomeArquivo, int *largura, int *altura) {
  FILE *arquivo = fopen(nomeArquivo, "r");
  if (!arquivo) {
    printf("Erro ao abrir o arquivo %s!\n", nomeArquivo);
    return NULL;
  }

  char tipo[3];
  if (fscanf(arquivo, "%s", tipo) != 1 || strcmp(tipo, "P1") != 0) {
    printf("Formato de arquivo inválido ou erro ao ler o tipo do arquivo!\n");
    fclose(arquivo);
    return NULL;
  }

  if (fscanf(arquivo, "%d %d", largura, altura) != 2) {
    printf("Erro ao ler as dimensões da imagem!\n");
    fclose(arquivo);
    return NULL;
  }

  int **imagem = (int **)malloc(*altura * sizeof(int *));
  for (int i = 0; i < *altura; i++) {
    imagem[i] = (int *)malloc(*largura * sizeof(int));
    for (int j = 0; j < *largura; j++) {
      if (fscanf(arquivo, "%d", &imagem[i][j]) != 1) {
        printf("Erro ao ler o pixel [%d][%d]!\n", i, j);
        liberarImagem(imagem, i);
        fclose(arquivo);
        return NULL;
      }
    }
  }

  fclose(arquivo);
  return imagem;
}

// Função para verificar se a subimagem é homogênea
char verificarHomogeneidade(int **imagem, int linhaInicial, int colunaInicial,
                            int largura, int altura) {
  int cor = imagem[linhaInicial][colunaInicial];
  for (int i = linhaInicial; i < linhaInicial + altura; i++) {
    for (int j = colunaInicial; j < colunaInicial + largura; j++) {
      if (imagem[i][j] != cor)
        return 'X';
    }
  }
  return (cor == 1) ? 'P' : 'B';
}

// Função recursiva para codificar a imagem
void codificarImagem(int **imagem, int linhaInicial, int colunaInicial,
                     int largura, int altura) {
  char resultado = verificarHomogeneidade(imagem, linhaInicial, colunaInicial,
                                          largura, altura);
  if (resultado != 'X') {
    printf("%c", resultado);
    return;
  }

  printf("X");

  int larguraMeia = (int)(largura + 1) / 2;
  int alturaMeia = (int)(altura + 1) / 2;

  codificarImagem(imagem, linhaInicial, colunaInicial, larguraMeia, alturaMeia);
  codificarImagem(imagem, linhaInicial, colunaInicial + larguraMeia,
                  largura - larguraMeia, alturaMeia);
  codificarImagem(imagem, linhaInicial + alturaMeia, colunaInicial, larguraMeia,
                  altura - alturaMeia);
  codificarImagem(imagem, linhaInicial + alturaMeia,
                  colunaInicial + larguraMeia, largura - larguraMeia,
                  altura - alturaMeia);
}

// Função para liberar a memória alocada para a imagem
void liberarImagem(int **imagem, int altura) {
  for (int i = 0; i < altura; i++) {
    free(imagem[i]);
  }
  free(imagem);
}
