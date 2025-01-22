//Bank Account Management System

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

//Declarando Fun��es para a verifica��o do CPF
int todos_iguais(char[]);
int verificador_cpf(char[]);

struct Conta{
	char nome[50];
	char senha[15];
	char cpf[15];
	float dinheiro;
};

//Menu Principal
void exibir_menu() {
    printf("\n========================================\n");
    printf("       SISTEMA DE GESTÃO BANCÁRIA\n");
    printf("========================================\n");
    printf("[1] Criar Conta\n");
    printf("[2] Mostrar Todas as Contas\n");
    printf("[3] Buscar Conta\n");
    printf("[4] Depositar Dinheiro\n");
    printf("[5] Sacar Dinheiro\n");
    printf("[0] Sair\n");
    printf("----------------------------------------\n");
    printf("Sua escolha: ");
}

//Fun��o para criar uma Conta
int criar_conta(struct Conta *contas, int *count, int max){
	
	if(*count >= max){
		printf("Limite maximo atingido\n");
		return 0;
	}
	
	struct Conta nova_conta;

	printf("Nome: ");
	scanf(" %[^\n]s", nova_conta.nome);
	
	printf("CPF (formato XXX.XXX.XXX-YY): ");
	scanf("%14s", nova_conta.cpf);
	
	if(verificador_cpf(nova_conta.cpf) == 0){
	    printf("\nCPF Inv�lido\n");
	    return 0;
	}
	
	printf("Senha: ");
	scanf("%15s", nova_conta.senha);
	printf("Deposito Inicial: ");
	scanf("%f", &nova_conta.dinheiro);
	
	contas[*count] = nova_conta;//Copia os dados da nova conta para posi��o correta
	printf("\nNome: %s\n CPF: %s\n Senha: %s\n Saldo Inicial: R$%.2f\n", contas[*count].nome, contas[*count].cpf, contas[*count].senha, contas[*count].dinheiro);
	(*count)++; //incrementando +1 no contador;
	printf("\nConta Criada com Sucesso\n");
	return 1;
}

//Fun��o para exibir as Contas
void exibir_contas(struct Conta *contas, int count){
	int i; 
	for(i = 0; i<count; i++){
		printf("Conta %d: ", i+1);
		printf("Nome: %s, CPF: %s\n", contas[i].nome, contas[i].cpf);
	}
}

//Fun��o para buscar uma conta a partir do CPF
int buscar_conta(struct Conta *conta, int count){
	int i;
	char cpf_buscar[15];
	int encontrado = -1;
	printf("Digite o CPF da conta(formato XXX.XXX.XXX-YY): ");
	scanf("%14s", cpf_buscar);
	for(i = 0; i < count; i++){
		if(strcmp(cpf_buscar, conta[i].cpf) == 0){
			printf("\nConta Encontrada:\n");
			printf("Nome: %s, CPF: %s\n", conta[i].nome, conta[i].cpf);
			encontrado = i; // Armazena o indice da conta na variavel
			break;
		}
	}
	
	if(encontrado == -1){
		printf("Nenhuma conta encontrada com o CPF fornecido.\n");
	}
	
	return encontrado;
}

//Fun��o para a valida��o de senha
int validacao(struct Conta *conta, int count){
	
	int indice = buscar_conta(conta, count);
	if (indice == -1){
		return -1; //Retorna -1 para conta n�o encontrada 
	}
	
	char senha_valida[15];
	
	printf("Digite a senha da conta %s: ", conta[indice].cpf);
	scanf("%14s", senha_valida);
		
	if(strcmp(senha_valida, conta[indice].senha) == 0){
		printf("\nAcesso v�lidado.\n");
		return indice;
	}else{
		printf("\nSenha Incorreta\n");
		return -1;
	}
}

//Fun��o para depositar
int depositar(struct Conta *conta, int count){
	float valor_deposito;
	
	int indice = validacao(conta, count);
	
	if(indice < 0){
		return; //A valida�ao n�o deu certo, entao encerra a fun��o
	}
	
	printf("\nDigite o valor a ser depositado: ");
	scanf("%f", &valor_deposito);
	
	if(valor_deposito <= 0){
		printf("\nValor inv�lido para dep�sito.\n");
        return;
	}
	
	conta[indice].dinheiro += valor_deposito;
	printf("\nDep�sito realizado com sucesso! Saldo atual: R$%.2f\n", conta[indice].dinheiro);
}

//Fun��o de saque
int sacar(struct Conta *conta, int count){
	float valor_sacar;
	int indice = validacao(conta, count);
	
	if(indice < 0){
		return; //A valida�ao n�o deu certo, entao encerra a fun��o
	}
	
	printf("\nDigite o valor a ser Sacado: ");
	scanf("%f", &valor_sacar);
	
	if(valor_sacar > conta[indice].dinheiro || valor_sacar <= 0){
		printf("\nValor inv�lido para saque. Verifique seu Saldo\n");
        return;
	}
	
	conta[indice].dinheiro -= valor_sacar;
	printf("\nSaque realizado com sucesso! Saldo atual: R$%.2f\n", conta[indice].dinheiro);
}

int main(){
	setlocale(LC_ALL, "");
	int max = 5;
	struct Conta contas[max];
	int count = 0;
	int escolha;
	
	while(1){
		
		exibir_menu();
		scanf("%d", &escolha);
		
		if(escolha == 0){
			printf("\nEncerrado");
			break;
		}
		
		if(escolha == 1){
			criar_conta(contas, &count, max);
		}else if(escolha == 2){
			exibir_contas(contas, count);
		}else if(escolha == 3){
			buscar_conta(contas, count);
		}else if(escolha == 4){
			depositar(contas, count);
		}else if(escolha == 5){
			sacar(contas, count);
		}else{
			printf("\n**Op��o Inv�lida**\n");
		}
	}
	
	return 0;
} 

//fun�oes para a verifica��o de cpf
int todos_iguais(char cpf[]) {
	int i;
    for (i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            return 0; // Retorna falso se encontrar algum caractere diferente
        }
    }
    return 1; // Retorna verdadeiro se todos forem iguais
}

int verificador_cpf(char cpf[]){
	char numeros[12];
	
	int i, j = 0;
	int soma = 0, soma2 = 0;
	
	//Guardando os numeros do cpf no vetor numeros[] usando isdigit()
	for(i = 0; i < strlen(cpf); i++){
		if(isdigit(cpf[i])){
			numeros[j] = cpf[i];
			j++;
		}
	}
	
	numeros[j] = '\0';
	
	if(strlen(numeros) != 11){
		printf("Cpf Invalido: Quantidade de Digitos Incorreta");
		return 0; // Retorna 0 para CPF inv�lido
	}
	
	if(todos_iguais(numeros)){
		printf("Cpf Invalido: cont�m todos os d�gitos iguais.\n");
		return 0; // Retorna 0 para CPF inv�lido
	}
	
	//Valida��o do Primeiro digito
	for(i = 0; i<9; i++){
		soma += (numeros[i] - '0') * (10 - i); 
	}
	
	int digito1 = (soma * 10) % 11;
	
	if(digito1 == 10){
		digito1 = 0;
	}
	
	////Valida��o do Segundo digito
	for(i = 0; i<10; i++){
		soma2 += (numeros[i] - '0') * (11 - i); 
	}
	
	int digito2 = (soma2 * 10) % 11;
	
	if(digito2 == 10){
		digito2 = 0;
	}
	
	if(digito1 == (numeros[9] - '0') && digito2 == (numeros[10] - '0')){
		return 1; // Retorna 1 para CPF Valido
	}
	
	return 0; // Retorna 0 para CPF inv�lido
}
