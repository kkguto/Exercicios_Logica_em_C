#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int potencia(int num, int p){
	if(p == 1){
		return 1;
	}
	return num *potencia(num, p - 1);
}




/*
int somatoria_interativa(int a, int b){
	int x = 0;
	int i;
	for (i = a; i <= b; i++){'
		x += i;
	}
	return x;
}
*/

/*
int fatorial_interativo(int n){
	int fatorial = 1, i;
	
	for(i = n; i > 1; i--){
		fatorial*=i;
	}
}
*/
int fatorial_recursivo(int n){
	if(n == 1){
		return 1;
	}
	return n * fatorial_recursivo(n - 1);
}

int somatoria_recursiva(int a, int b){
	if(a>b){
		return 0;
	}
	return a + somatoria_recursiva(a + 1, b);
}



int main(){
	
	int num = 2, p = 3;
	int x = potencia(num, p);
	printf("%d", x);
	
}
