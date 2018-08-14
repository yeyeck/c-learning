#include<stdio.h>

int main()
{
	int x = 100;
	
	printf("一个整型的大小为%d\n",sizeof(int));
	printf("一个整型指针的大小为%d\n",sizeof(int*));
	printf("dec =%d; octal = %o; hex = %x\n", x, x, x);
	printf("dec =%d; octal = %#o; hex = %#x\n", x, x, x);
	return 0; 
	
} 

/*
output:
	一个整型的大小为4
	一个整型指针的大小为8
	dec =100; octal = 144; hex = 64
	dec =100; octal = 0144; hex = 0x64
*/
