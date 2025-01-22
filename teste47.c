/*
Fa�a uma fun��o que recebe por par�metro o tempo de dura��o de uma f�brica expressa em segundos e retorna tamb�m por par�metro esse tempo em horas, minutos e segundos.
*/

#include <stdio.h>
void conversao_tempo(int *, int *, int *, int);

int main(){
	
	int sec_total = 3600, min, hour, sec;
	
	conversao_tempo(&sec, &min, &hour, sec_total);
	
	printf("Horas >> %d hr\nMinutos >> %d min\nSegundos >> %d s\n", hour, min, sec);

}

void conversao_tempo(int *sec, int *min, int *hour, int sec_total){
	*hour = sec_total/3600;
	sec_total %= 3600;
	*min = sec_total/60;
	*sec = sec_total%60;
}


