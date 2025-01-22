#include <stdio.h>
#include <math.h>

void baskara(int a, int b, int c, int *tem_raiz, float *raiz1, float *raiz2) {
    int delta = pow(b, 2) - 4 * a * c;  
    
    if (delta < 0) {
        *tem_raiz = 0;  
    } else if (delta == 0) {
        *tem_raiz = 1;  
        *raiz1 = -b / (2.0 * a);  
    } else {
        *tem_raiz = 2;
        *raiz1 = (-b + sqrt(delta)) / (2.0 * a);  
        *raiz2 = (-b - sqrt(delta)) / (2.0 * a); 
    }
}

int main() {
    int a, b, c;
    int tem_raiz;
    float raiz1, raiz2;
    
    printf("Digite os valores a, b e c abaixo (a, b, c):\n");
    scanf("%d %d %d", &a, &b, &c);
    
    baskara(a, b, c, &tem_raiz, &raiz1, &raiz2);
    
    if (tem_raiz == 0) {
        printf("Nao tem Raizes\n");
    } else if (tem_raiz == 1) {
        printf("A equacao tem uma raiz >> %.2f\n", raiz1);
    } else if (tem_raiz == 2) {
        printf("A equacao tem duas raizes >> %.2f e %.2f\n", raiz1, raiz2);
    }

    return 0;
}
