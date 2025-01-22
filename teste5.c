#include <stdio.h>
#include <stdlib.h>

#define text "Teste 5"

int main(){
	printf("%s", text);	
	int number = 10;
	
	printf("Numero inicial: %d\n", number);
	
	number++;
	printf("++ >> %d\n", number);
	
	number--;
	printf("-- >> %d\n", number);
	
	number+=5;
	printf("+= >> %d\n", number);
	
	number-=5;
	printf("-= >> %d\n", number);
	
	number*=5;
	printf("*= >> %d\n", number);
	
	number/=5;
	printf("/= >> %d\n", number);
	
	system("pause");
}
