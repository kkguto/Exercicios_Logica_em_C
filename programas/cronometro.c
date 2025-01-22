#include <stdio.h>
#include <Windows.h>

void cronometro(int, int);

int main(){
	int min, seg;
	printf("Digite o tempo do cronometro (min:seg):\n");
	scanf("%d:%d", &min, &seg);
	cronometro(min, seg);
    return 0;
}

void cronometro(int min, int seg){
	
	int tempo = (min*60) + seg, i;
	printf("\nCRONOMETRO DE %d\n", tempo);
	
	for (i = tempo; i >= 0; i--){
		printf("** %d seg **\n", i);
		Sleep(1000);
	}
	printf("\n**TEMPO!**\n");
}
