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
