#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define text "Registro de Livros em uma Biblioteca"

int main(){
	char title[61];
	unsigned int num_pag;
	int year, doble_numpage, year_adjusted;
	
	printf("\n**%s**\n", text);
	printf("Digite o Titulo do Livro:\n");
	fgets(title, sizeof(title), stdin);
	
	printf("Digite o numero de paginas do livro %s\n", title);
	scanf("%u", &num_pag);
	doble_numpage = num_pag << 1;
	printf("Digite o ano de sua publicaçao:\n");
	scanf("%d", &year);
	year_adjusted = year * 2;
	
	printf("Titulo do Livro >> %s\n", title);
	printf("O titulo possui %d caracteres\n", strlen(title));
	printf("Numero de paginas Dobrado >> %d paginas\n",doble_numpage);
	printf("Ano de Publicaçao ajustado >> %d", year_adjusted);
	
	system("pause");
}
