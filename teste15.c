#include <stdio.h>
#include <stdbool.h> 
int main(){
	unsigned int a, b, c;
	bool triangulo;
	
	printf("Digite o valor do primeiro lado do triangulo:\n");
	scanf("%u", &a);

	printf("Digite o valor do segundo lado do triangulo:\n");
	scanf("%u", &b);

	printf("Digite o valor do terceiro lado do triangulo:\n");
	scanf("%u", &c);
	
	triangulo = (a < b + c) && (b < a + c) && (c < a + b);
	
	if (triangulo){
		printf("Eh um triangulo");
	}else{
		printf("Nao eh triangulo");
	}
	
}
