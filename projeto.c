#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> // Para usar ceil

#define MAX_WIDTH 1024
#define MAX_HEIGHT 768

int i, j;
int **lerImagemPBM(const char *nomeArquivo, int *largura, int *altura);
char verificarHomogeneidade(int **imagem, int linhaInicial, int colunaInicial, int largura, int altura);
void codificarImagem(int **imagem, int linhaInicial, int colunaInicial, int largura, int altura);
void liberarImagem(int **imagem, int altura);

int main() {
    int largura, altura;
    int **imagem;

    char nomeArquivo[] = "image.pbm";
    imagem = lerImagemPBM(nomeArquivo, &largura, &altura);
    if (!imagem) return 1;

    printf("Código da Imagem: ");
    codificarImagem(imagem, 0, 0, largura, altura);
    printf("\n");

    liberarImagem(imagem, altura);
    return 0;
}

// Função para ler imagem do arquivo PBM
int **lerImagemPBM(const char *nomeArquivo, int *largura, int *altura) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo!\n");
        return NULL;
    }

    char tipo[3];
    fscanf(arquivo, "%s", tipo);
    if (strcmp(tipo, "P1") != 0) {
        printf("Formato de arquivo inválido!\n");
        fclose(arquivo);
        return NULL;
    }

    fscanf(arquivo, "%d %d", largura, altura);
    int *imagem = (int *)malloc(*altura * sizeof(int *));
    for (i = 0; i < *altura; i++) {
        imagem[i] = (int *)malloc(*largura * sizeof(int));
        for (j = 0; j < *largura; j++) {
            fscanf(arquivo, "%d", &imagem[i][j]);
        }
    }

    fclose(arquivo);
    return imagem;
}

// Função para verificar se a subimagem é homogênea
char verificarHomogeneidade(int **imagem, int linhaInicial, int colunaInicial, int largura, int altura) {
    int cor = imagem[linhaInicial][colunaInicial];
    for (i = linhaInicial; i < linhaInicial + altura; i++) {
        for (j = colunaInicial; j < colunaInicial + largura; j++) {
            if (imagem[i][j] != cor) return 'X';
        }
    }
    return (cor == 1) ? 'P' : 'B';
}

// Função recursiva para codificar a imagem
void codificarImagem(int **imagem, int linhaInicial, int colunaInicial, int largura, int altura) {
    char resultado = verificarHomogeneidade(imagem, linhaInicial, colunaInicial, largura, altura);
    if (resultado != 'X') {
        printf("%c", resultado);
        return;
    }

    printf("X");

    int larguraMeia = (int)ceil(largura / 2.0); // Usando ceil para garantir o arredondamento correto
    int alturaMeia = (int)ceil(altura / 2.0);   // Usando ceil para garantir o arredondamento correto

    codificarImagem(imagem, linhaInicial, colunaInicial, larguraMeia, alturaMeia);
    codificarImagem(imagem, linhaInicial, colunaInicial + larguraMeia, largura - larguraMeia, alturaMeia);
    codificarImagem(imagem, linhaInicial + alturaMeia, colunaInicial, larguraMeia, altura - alturaMeia);
    codificarImagem(imagem, linhaInicial + alturaMeia, colunaInicial + larguraMeia, largura - larguraMeia, altura - alturaMeia);
}

// Função para liberar a memória alocada para a imagem
void liberarImagem(int **imagem, int altura) {
    for (i = 0; i < altura; i++) {
        free(imagem[i]);
    }
    free(imagem);
}
