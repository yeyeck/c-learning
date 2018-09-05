#include <stdio.h>

#define MONTHS 12

int main()
{
	
	int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	//声明一个只读数组， 一旦初始化，不能对数组里的值进行更改. 如果省略放括号中的数字，编译器会根据初始化列表中的数量来确定数组的大小 
	const int days2[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	int index;
	
	printf("遍历 days:\n");
	for(index = 0; index < MONTHS; index++)
	{
		printf("Month %2d has %2d days.\n", index + 1, days[index]);
	}
	
	printf("\n\n遍历 days2:\n");
	for(index = 0; index < sizeof days / sizeof days2[0]; index++)
	{
		printf("Month %2d has %2d days.\n", index + 1, days2[index]);
	 } 
	return 0; 
}

/*
Output:
遍历 days:
Month  1 has 31 days.
Month  2 has 28 days.
Month  3 has 31 days.
Month  4 has 30 days.
Month  5 has 31 days.
Month  6 has 30 days.
Month  7 has 31 days.
Month  8 has 31 days.
Month  9 has 30 days.
Month 10 has 31 days.
Month 11 has 30 days.
Month 12 has 31 days.


遍历 days2:
Month  1 has 31 days.
Month  2 has 28 days.
Month  3 has 31 days.
Month  4 has 30 days.
Month  5 has 31 days.
Month  6 has 30 days.
Month  7 has 31 days.
Month  8 has 31 days.
Month  9 has 30 days.
Month 10 has 31 days.
Month 11 has 30 days.
Month 12 has 31 days.

*/
