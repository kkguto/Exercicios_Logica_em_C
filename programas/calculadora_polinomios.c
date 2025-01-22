#include <stdio.h>
#include <math.h>
#include <stdbool.h>



void calcular_valor_de_polinomio(int, int [], int);
void soma_de_polinomios(int, int[], int, int[], int);
void multiplicar_polinomio(int, int[], int, int[], int);

int main() {
  int i;
  int tamanho, tamanho1;
  int polinomio[tamanho + 1], polinomio1 [tamanho1 + 1]; // +1 para incluir o elemento do grau 0
  int escolha, repetir = true;
  int resultado_soma;

  do{
	printf("\nDigite a opção que dejesa executar:\n");
	printf("[1] Calcular o Valor do Polinomio\n[2] Soma de Polinomios\n[3] Calcular Multiplicaçãoo de Polinomios\n[4] Sair\n");
	scanf("%d",&escolha);
	  
	switch(escolha){
		case 1:
			printf("Digite o grau do polinomio que deseja calcular:\n");
  			scanf("%d",&tamanho);
  			printf("Insira os elementos desse Polinomio:\n");
  			for(i = tamanho;i >= 0;i--){
				printf("Elemento do %dº grau: ",i);
				scanf("%d",&polinomio[i]);
  			}
	    	calcular_valor_de_polinomio(i, polinomio, tamanho);
	    	break;
	    case 2:
			printf("Digite o grau do Primeiro polinomio:\n");
			scanf("%d",&tamanho);
			
			printf("\nInsira os Elementos desse Polinomio:\n");
			for(i = tamanho; i >= 0; i--){
			  printf("Elemento do grau %dº:\n",i);
			  scanf("%d",&polinomio[i]);
			}
			
			printf("Digite o grau do Segundo polinomio:\n");
			scanf("%d", &tamanho1);
			
			printf("\nInsira os Elementos desse Polinomio:\n");	
			for(i = tamanho1;i >= 0;i--){
			  printf("Elemento do grau %dº:\n",i);
			  scanf("%d",&polinomio1[i]);
			}		
	        soma_de_polinomios(i, polinomio, tamanho, polinomio1, tamanho1);
	    	break;
	    case 3:
	    	printf("Digite o grau do Primeiro polinomio:\n");
			scanf("%d",&tamanho);
			
			printf("\nInsira os Elementos desse Polinomio:\n");
			for(i = tamanho; i >= 0; i--){
			  printf("Elemento do grau %dº:\n",i);
			  scanf("%d",&polinomio[i]);
			}
			
			printf("Digite o grau do Segundo polinomio:\n");
			scanf("%d", &tamanho1);
			
			printf("\nInsira os Elementos desse Polinomio:\n");	
			for(i = tamanho1;i >= 0;i--){
			  printf("Elemento do grau %dº:\n",i);
			  scanf("%d",&polinomio1[i]);
			}		
			multiplicar_polinomio(i, polinomio, tamanho, polinomio1, tamanho1);
			break;
			
		case 4:
			printf("\n*ENCERRADO*\n");
			repetir = false;
			break;
			
		default:
			printf("\n*Opção Invalida*\n");
		}
		
	}while(repetir);
	return 0;
  }
  
void calcular_valor_de_polinomio(int i, int polinomio[], int tamanho){
  int resultado = 0, x;
  
  printf("insira o valor de x: ");
  scanf("%d",&x);
  
  for (i = tamanho;i >= 0;i--){
    resultado += polinomio[i]*pow(x,i); 
  }
  for(i = tamanho; i >= 0; i--){
	printf("%dx^%d +", polinomio[i], i);
  }
  printf("\n\nO resultado do polinomio acima sendo x = %d eh %d\n", x, resultado);
}

void soma_de_polinomios(int i, int polinomio1[], int tam1, int polinomio2[], int tam2){
	int n_max;
  
	//verificador do polinomio com o maior grau
	if(tam1 >= tam2){
		n_max = tam1;
		int soma[n_max + 1]; // +1 para incluir o elemento do grau 0
	
	//Adciona o primeiro polinomio
	for (i = 0; i <= tam1; i++){
		soma[i] = polinomio1[i];	
	}
	  //Adciona o segundo polinomio
	for(i = 0; i <= tam2; i++){
		soma[i] += polinomio2[i];
	}
	printf("\n");
	for(i = n_max; i >= 0; i--){
		printf("%dx^%d + ", soma[i], i);
	}
	printf("\n");
	
  }else{
	n_max = tam2;
	int soma[n_max + 1];
	//Adciona o segundo polinomio
	for(i = 0; i <= tam2; i++){
		soma[i] = polinomio2[i];
	}
	//Adciona o primeiro polinomio
	for (i = 0; i <= tam1; i++){
		soma[i] += polinomio1[i];	
	}
	printf("\n");
	for(i = n_max; i >= 0; i--){
		printf("%dx^%d + ", soma[i], i);
	}
	printf("\n");
  }
}

void multiplicar_polinomio(int i, int polinomio1[], int tam1, int polinomio2[], int tam2){

	int n_max, j;
	n_max = tam1 + tam2;
  	int multiplicacao[n_max + 1]; // +1 para incluir o elemento do grau 0
	
	//inicializa todos os indices do vetor multiplicaçao com 0
  	for (i = 0; i <= n_max; i++) {
  	    multiplicacao[i] = 0;
  	}
  
  	for (i = 0; i <= tam1; i++) {
    	for (j = 0; j <= tam2; j++) {
    	  multiplicacao[i + j] += (polinomio1[i] * polinomio2[j]);
        }
    }
    
  	for(i = n_max; i >= 0; i--){
    	printf("%dx^%d + ", multiplicacao[i], i);
    }
    printf("\n");
}
