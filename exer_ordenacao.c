#include <stdio.h>

int i, j;
int bubble_sort(int[], int);

int main(){
	
}

int bubble_sort(int v[], int n){
	for(i = 0; i < n ; i++){
		for(j = 0; j < n - i -1; j++){
			if (v[j] > v[j+1]){
				int teste = v[j+1];
				v[j+1] = v[j];
				v[j] = teste;
			}	
		}	
	}
}
