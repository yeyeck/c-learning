#include <stdio.h>

int main()
{
	int ten = 10;
	int two = 2;
	
	printf("正确打印方式：\n");
	printf("%d 减去 %d 等于 %d\n", ten, two, ten - two);
	printf("错误方式：\n");
	printf("%d 减去 %d 等于 %d\n", ten);   //遗漏2个参数 
	
	return 0; 
	 
}
/*
Output：
	正确打印方式：
	10 减去 2 等于 8
	错误方式：
	10 减去 -496805600 等于 6480528 
*/
