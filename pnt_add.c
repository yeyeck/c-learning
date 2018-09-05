//指针地址

#include <stdio.h>
#define SIZE 4

int main()
{
	short dates[SIZE];
	//声明一个short类型的指针变量 
	short * pti;	
	short index;

	double bills[SIZE];
	double * ptf;
	
	pti = dates;
	ptf = bills;
	
	printf("%23s %15s\n", "short", "double");
	for(index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index); 
	return 0;
 } 
 /*
 Output:
                   short          double
pointers + 0: 000000000062FE30 000000000062FE10
pointers + 1: 000000000062FE32 000000000062FE18
pointers + 2: 000000000062FE34 000000000062FE20
pointers + 3: 000000000062FE36 000000000062FE28
 */
