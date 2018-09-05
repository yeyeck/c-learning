#include <stdio.h>

#define PARAM 60

int main()
{
	int minutes;
	
	int hours;
	int mins;
	
	while(scanf("%d", &minutes)) {
		if(minutes <= 0) break;
		hours = minutes / PARAM;
		mins = minutes % PARAM;
		printf("%d minutes is %d hours and %d minutes;\n", minutes, hours, mins); 
	}
	printf("Bye!");
	return 0;
 } 
 
 /* C Primer Plus 5.11.1*/
 
 
 
 /*
OutPut:

555
555 minutes is 9 hours and 15 minutes;
444
444 minutes is 7 hours and 24 minutes;
777
777 minutes is 12 hours and 57 minutes;
0
Bye!

 */ 
