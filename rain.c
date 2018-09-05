#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main()
{
	const float rain[YEARS][MONTHS] =
	{
		{4.3, 4.3, 4.3, 3.0, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 2.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3, 2.1},
		{9.1, 8.8, 5.5, 2.6, 4.4, 3.2, 4.3, 5.6, 7.9, 5.4, 6.2, 2.5, 5.6},
		{7.2, 5.3, 6.5, 3.0, 3.0, 2.0, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 1.4},
		{3.0, 3.0, 2.0, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 9.1, 8.8, 5.5},
		{1.2, 1.6, 2.4, 0.0, 5.2, 1.2, 1.6, 2.4, 0.0, 5.2, 6.5, 3.0, 3.0}
	};
	
	int year, month;
	float subtot, total;
	
	printf(" YEAR  RAINFALL (inches)\n");
	for(year = 0, total = 0; year < YEARS; year++)
	{
		for(month = 0, subtot = 0; month < MONTHS; month++)
			subtot += rain[year][month];
		printf("%5d %15.1f\n", 2013 + year, subtot);
		total += subtot;
	}
	printf("\n %d年到%d年%d年的总降水量为%.1f，平均每年降水量为%.1f.\n\n", 2013, 2013 + YEARS - 1, YEARS, total, total / YEARS );
	
	printf("每月平均降水量为\n\n"); 
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
	for(month = 0; month < MONTHS; month++)
	{
		for(year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%4.1f ", subtot / YEARS);
		
	}
	printf("\n");
	 
	return 0;
}

/*
Output:
 YEAR  RAINFALL (inches)
 2013            28.8
 2014            31.9
 2015            65.5
 2016            38.3
 2017            37.5

 2013年到2017年5年的总降水量为202.0，平均每年降水量为40.4.

每月平均降水量为

 Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec
 6.4  4.7  3.9  2.3  2.9  1.9  2.4  2.7  2.3  1.4  4.9  4.6

*/
