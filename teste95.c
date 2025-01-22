/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

struct datas{
	char name[40];
	int age;
	char address[40];
};

void sort_datas(struct datas *datas){
	int i, j;
	
	for(i = 0; i < 3 - 1; i++){
		for(j = 0; j < 3 - i - 1; i++){
			if(datas[j].age > datas[j+1].age){
				struct datas temp = datas[j];
				datas[j] = datas[j+1];
				datas[j+1] = temp;
			}
		}
	}
}

int main(){
	
	setlocale(LC_ALL, "");
	
	int i;
	struct datas datas[3];
	
	for(i = 0; i < 3; i++){
		printf("\nPessoa %d:\n", i+1);
		
		fputs("Nome: ", stdout);
		getchar();
		fgets(datas[i].name, sizeof(datas[i].name), stdin);
		datas[i].name[strcspn(datas[i].name, "\n")] = 0;
		
		fputs("Endereço: ", stdout);
		fgets(datas[i].address, sizeof(datas[i].address), stdin);
		datas[i].address[strcspn(datas[i].address, "\n")] = 0;
		
		printf("Idade: ");
		scanf("%d", &datas[i].age);	
	}
	
	sort_datas(datas);
	
	int soma = 0;
	for(i = 0; i < 3; i++){
		printf("\nNome           Idade                 Endereço");
   		printf("\n%-10s      %-20d %-20s \n\n", datas[i].name, datas[i].age, datas[i].address);
   		soma += datas[i].age;
	}
	
	float media = soma/3.0;
	printf("%.2f", media);
	
	return 0;
}
