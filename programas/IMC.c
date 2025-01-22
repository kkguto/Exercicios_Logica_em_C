# include <stdio.h>

void calculo_IMC(float peso, float altura){
	
	float imc = peso/(altura*altura);
	
	if (imc <= 18.5){
		printf("Abaixo do peso\n");
	}else if(imc > 18.5 && imc <= 24.9){
		printf("Peso ideal (parabéns)\n");
	}else if(imc > 25 && imc <= 29.9){
		printf("Levemente acima do peso\n");
	}else if(imc > 30 && imc <= 34.9){
		printf("Obesidade grau I\n");
	}else if(imc > 35 && imc <= 39.9){
		printf("Obesidade grau II (severa)\n");
	}else{
		printf("Obesidade grau III (mórbida)\n");
	}
}
int main(){
	float peso, altura;
	
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);
	printf("Digite sua altura:\n");
	scanf("%f", &altura);
	
	calculo_IMC(peso, altura);
	return 0;
}


