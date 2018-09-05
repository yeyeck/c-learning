/*使用指针形参*/

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
 
 //使用指针算法 
 int sump(int * start, int * end)
 {
 	int total;
 	while (start < end)     // 越界判断 
 	{
 		total += * start;  //累加数组元素的值 
 		start++;           // 让指针指向下一个元素 
	 }
	 
	 return total;
 }
 
 
 /*
 Output:
 
 the total number of marbles is 241.

 */
