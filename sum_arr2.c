/*ʹ��ָ���β�*/

#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);

int main()
{
	int marbles[SIZE] = {15, 23, 24, 69, 14, 12, 15, 18, 16, 35};
	
	long answer;
	
	answer = sump(marbles, marbles + SIZE);
	
	printf("the total number of marbles is %1d.\n", answer);
	
	return 0;
 }
 
 //ʹ��ָ���㷨 
 int sump(int * start, int * end)
 {
 	int total;
 	while (start < end)     // Խ���ж� 
 	{
 		total += * start;  //�ۼ�����Ԫ�ص�ֵ 
 		start++;           // ��ָ��ָ����һ��Ԫ�� 
	 }
	 
	 return total;
 }
 
 
 /*
 Output:
 
 the total number of marbles is 241.

 */
