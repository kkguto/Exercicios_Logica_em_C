/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. 
The same principle applies to the number nine, which is written as IX. 
There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char num_romano[20];
	int i;
	int total = 0;
	int count_i = 0;
	
	printf("Digite um Numero em Romano: ");
	scanf(" %s", num_romano);
	
	for(i = 0; i<strlen(num_romano); i++){
		if(num_romano[i] == 'I'){
			count_i++;
		}
	}
	
	if(count_i > 3){
		printf("Numeros de I não permitido.");
		return 1;
	}else{
		for(i = 0; i<strlen(num_romano); i++){
			
			if(num_romano[i] == 'I' && num_romano[i+1] == 'V' || num_romano[i+1] == 'X'){
				total-=1;
			}else if(num_romano[i] == 'X' && num_romano[i+1] == 'L' || num_romano[i+1] == 'C'){
				total-=10;
			}else if(num_romano[i] == 'C' && num_romano[i+1] == 'D' || num_romano[i+1] == 'M'){
				total-=100;
			}else if(num_romano[i] == 'I'){
				total += 1;
			}else if(num_romano[i] == 'V'){
				total += 5;
			}else if(num_romano[i] == 'X'){
				total += 10;
			}else if(num_romano[i] == 'L'){
				total += 50;
			}else if(num_romano[i] == 'C'){
				total += 100;
			}else if(num_romano[i] == 'D'){
				total += 500;
			}else if(num_romano[i] == 'M'){
				total += 1000;
			}else{
				printf("ERRO");
				return 1;;
			}
		}
		printf("Total: %d", total);		
	}	
	return 0;
}
