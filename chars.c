#include <stdio.h>

int main()
{
	char chars[26];
	int i,j;
	for(i = 0; i < 26; i++)
	{
		chars[i] = i + 97;
	}
	
	for(j = 0; j < 26; j++)
	{
		printf("%c\t", chars[j]);
	}
}

 /* C Primer Plus 6.16.1*/
 
 
 
 /*
OutPut:

a       b       c       d       e       f       g       h       i       j       k       l       m       n       o
p       q       r       s       t       u       v       w       x       y       z

 */ 
