/*
Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:    

Idade	Categoria
5 a 7 anos	Infantil A
8 a 10 anos	Infantil B
11-13 anos	Juvenil A
14-17 anos	Juvenil B
Maiores de 18 anos (inclusive)	Adulto
*/

#include <stdio.h>
#include <string.h>

int categoria_nadador(int age, char *categoria){
	
	
	if (age >= 5 && age <=7){
		strcpy(categoria, "Infantil A");
	}else if(age >= 8 && age <= 10){
		strcpy(categoria, "Infantil B");
	}else if(age >= 11 && age <=13){
		strcpy(categoria, "Juvenil A");
	}else if(age >= 14 && age <=17){
		strcpy(categoria, "Juvenil B");
	}else if(age >= 18){
		strcpy(categoria, "Adulto");
	}else{
		strcpy(categoria, "Sem Categoria");
	}
}


int main(){
	int age = 54;
	char categoria[30];
	categoria_nadador(age, categoria);
	
	printf("Categoria >> %s", categoria);
	
	return 0;
}
