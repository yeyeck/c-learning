#include<stdio.h>

int main()
{
	int x = 100;
	
	printf("һ�����͵Ĵ�СΪ%d\n",sizeof(int));
	printf("һ������ָ��Ĵ�СΪ%d\n",sizeof(int*));
	printf("dec =%d; octal = %o; hex = %x\n", x, x, x);
	printf("dec =%d; octal = %#o; hex = %#x\n", x, x, x);
	return 0; 
	
} 

/*
output:
	һ�����͵Ĵ�СΪ4
	һ������ָ��Ĵ�СΪ8
	dec =100; octal = 144; hex = 64
	dec =100; octal = 0144; hex = 0x64
*/
