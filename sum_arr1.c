//数组元素之和

#include <stdio.h>
#define SIZE 10

//声明函数原型 
int sum(int ar[], int n);

int main()
{
	int marbles[SIZE] = {15, 23, 24, 69, 14, 12, 15, 18, 16, 35};
	long answer;
	
	answer = sum(marbles, SIZE);
	
	printf("marbles 所有元素之和为 %1d.\n", answer);
	
	printf("marbles 的大小为%u bytes.\n", sizeof marbles);
	
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
	 printf("ar 的大小为 %u bytes.\n", sizeof ar);
	 return total;
 }
 
 
 /*
 Output:
 
ar 的大小为 8 bytes.
marbles 所有元素之和为 241.
marbles 的大小为40 bytes.

 */
