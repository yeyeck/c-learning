#include <stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum1(double, double);
double sum2(const struct funds *); 
double sum3(struct funds);

int main()
{
	struct funds stan = {
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total if $%.3f.\n", sum1(stan.bankfund, stan.savefund));  //向函数传递结构成员 
	printf("Stan has a total if $%.3f.\n", sum2(&stan));  //向函数传递结构的地址 
	printf("Stan has a total if $%.3f.\n", sum3(stan));  //向函数传递结构
	
	return 0;
}

double sum1(double x, double y)
{
	return (x + y);
}

double sum2(const struct funds * money)
{
	return (money->bankfund + money->savefund);
}
double sum3(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}

/*
output:

Stan has a total if $12576.210.
Stan has a total if $12576.210.
Stan has a total if $12576.210.

--------------------------------
*/
