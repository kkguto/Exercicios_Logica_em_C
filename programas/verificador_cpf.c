// Verificador de CPF

#include <stdio.h>
#include <string.h>
#include <locale.h>

int todos_iguais(char cpf[]) {
	int i;
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            return 0; // Retorna falso se encontrar algum caractere diferente
        }
    }
    return 1; // Retorna verdadeiro se todos forem iguais
}

int verificador_cpf(char[]);

int main(){
	
	setlocale(LC_ALL, "");
	
	char cpf[15] = "222.222.222-22";
	
	if(verificador_cpf(cpf)){
		printf("Cpf Valido");
	}else{
		printf("Cpf invalido");
	}
	
	return 0;
}

int verificador_cpf(char cpf[]){
	char numeros[12];
	
	int i, j = 0;
	int soma = 0, soma2 = 0;
	
	for(i = 0; i < strlen(cpf); i++){
		if(isdigit(cpf[i])){
			numeros[j] = cpf[i];
			j++;
		}
	}
	
	if(strlen(numeros) != 11){
		printf("Cpf Invalido: Quantidade de Digitos Incorreta");
		return 0; // Retorna 0 para CPF inválido
	}
	
	if(todos_iguais(numeros)){
		printf("Cpf Invalido: contém todos os dígitos iguais.\n");
		return 0; // Retorna 0 para CPF inválido
	}
	
	//Validação do Primeiro digito
	for(i = 0; i<9; i++){
		soma += (numeros[i] - '0') * (10 - i); 
	}
	
	int result1 = (soma * 10) % 11;
	
	if(result1 == 10){
		result1 = 0;
	}
	
	////Validação do Segundo digito
	for(i = 0; i<10; i++){
		soma2 += (numeros[i] - '0') * (11 - i); 
	}
	
	int result2 = (soma2 * 10) % 11;
	
	if(result2 == 10){
		result2 = 0;
	}
	
	if(result1 == (numeros[9] - '0') && result2 == (numeros[10] - '0')){
		return 1; // Retorna 1 para CPF Valido
	}
	
	return 0; // Retorna 0 para CPF inválido
}
