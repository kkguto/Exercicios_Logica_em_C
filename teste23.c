#include <stdio.h>

int minutos(int, int);
int diferenca(int, int);

int main(){
	
	int hr1, hr2, min1, min2, conversao1, conversao2, resultado;
	
	printf("Digite o primeiro horario (hora:minutos):\n");
	scanf("%d:%d", &hr1, &min1);
	printf("Digite o segundo horario (hora:minutos):\n");
	scanf("%d:%d", &hr2, &min2);
	
	conversao1 = minutos(hr1, min1);
	conversao2 = minutos(hr2, min2);
	
	resultado = diferenca(conversao1, conversao2);
	
	printf("A diferença eh de %d minutos", resultado);
}

int minutos(hr, min){
	return (hr * 60) + min;
}

int diferenca(min1, min2){
	
	if (min1 > min2){
		return min1 - min2;
	}else{
		return min2 - min1;
	}
}
