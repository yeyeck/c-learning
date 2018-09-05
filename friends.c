#include <stdio.h>
#define LEN 20

struct names{
	char first[LEN];
	char last[LEN];
}; 

struct guy{
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main()
{
	struct guy fellows[2] = {
		{
			{"Ewen", "Villard"},
			"grilled salmon",
			"personality coach",
			68112.0
		},
		{
			{"Rondeny", "Swillbelly"},
			"tripe",
			"tabloid editor",
			432400.00
		}
	};
	
	struct guy * him; /* 声明一个指向结构的指针 */
	printf("address #1: %p #2: %p\n", &fellows[0], &fellows[1]);
	him = &fellows[0];  /* 告诉编译器该指针指向何处 */
	printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
	him++;
	printf("him->favfood is %s: (*him).handle.last is %s\n", him->favfood, (*him).handle.last);
	return 0;
}

/*
output:

address #1: 000000000062FD90 #2: 000000000062FDE4
him->income is $68112.00: (*him).income is $68112.00
him->favfood is tripe: (*him).handle.last is Swillbelly

*/
