//Digital Clock with current time

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	while(1){
		
	system("cls");
	
	struct tm* current_time;
	time_t now = time(NULL);
	current_time = localtime(&now);
	
	printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
	
	sleep(1);
	}
	
	return 0;
}
