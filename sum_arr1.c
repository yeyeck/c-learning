//����Ԫ��֮��

#include <stdio.h>
#define SIZE 10

//��������ԭ�� 
int sum(int ar[], int n);

int main()
{
	int marbles[SIZE] = {15, 23, 24, 69, 14, 12, 15, 18, 16, 35};
	long answer;
	
	answer = sum(marbles, SIZE);
	
	printf("marbles ����Ԫ��֮��Ϊ %1d.\n", answer);
	
	printf("marbles �Ĵ�СΪ%u bytes.\n", sizeof marbles);
	
	return 0;
 }
 
 int sum(int ar[], int n)
 {
 	int i;
 	int total = 0;
 	
 	for(i = 0; i < n; i++)
 	{
 		total += ar[i];
	 }
	 printf("ar �Ĵ�СΪ %u bytes.\n", sizeof ar);
	 return total;
 }
 
 
 /*
 Output:
 
ar �Ĵ�СΪ 8 bytes.
marbles ����Ԫ��֮��Ϊ 241.
marbles �Ĵ�СΪ40 bytes.

 */
