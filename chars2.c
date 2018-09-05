#include <stdio.h>

int main()
{
	char chars[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
//	for(i = 0; i < 26; i++)
//	{
//		chars[i] = i + 97;
//	}
	
	for(i = 0; i < 26; i++)
	{
		printf("%c\t", chars[i]);
	}
	return 0;
}

 /* C Primer Plus 6.16.1*/
 
 
 
 /*
OutPut:

a       b       c       d       e       f       g       h       i       j       k       l       m       n       o
p       q       r       s       t       u       v       w       x       y       z

 */ 
