#include <stdio.h>

int main()
{
	int ten = 10;
	int two = 2;
	
	printf("��ȷ��ӡ��ʽ��\n");
	printf("%d ��ȥ %d ���� %d\n", ten, two, ten - two);
	printf("����ʽ��\n");
	printf("%d ��ȥ %d ���� %d\n", ten);   //��©2������ 
	
	return 0; 
	 
}
/*
Output��
	��ȷ��ӡ��ʽ��
	10 ��ȥ 2 ���� 8
	����ʽ��
	10 ��ȥ -496805600 ���� 6480528 
*/
