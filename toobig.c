#include<stdio.h>

int main()
{
	int x = 2147483647;
	unsigned int y = 4294967295; 
	
	
	printf("%d;  %d; %d\n", x, x+1, x+2);
	printf("%d;  %d; %d\n", y, y+1, y+2);
	return 0; 
	
} 

/*
output:
	2147483647;  -2147483648; -2147483647
	-1;  0; 1
*/
