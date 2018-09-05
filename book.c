#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {                   /*结构模板，标记是 book */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 

char * s_gets(char *, int);

int main()
{
	struct book library;    /* 把 library 声明为一个 book 类型的变量*/
	printf("请输入书的标题：\n");
	s_gets(library.title, MAXTITL);
	printf("现在输入书的作者姓名：\n");
	s_gets(library.author, MAXAUTL);
	printf("现在输入书本的价格：\n");
	scanf("%f", &library.value);
	
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");
	return 0;
 } 
 
 char * s_gets(char *st, int n)
 {
 	char * ret_val;
 	char * find;
 	ret_val = fgets(st, n, stdin);
 	if (ret_val)
 	{
 		find = strchr(st, '\n'); //查找换行符
		if (find)            //如果地址不是NULL 
			*find = '\0';   //在此放置一个空字符
		else
			while (getchar() != '\n')
				continue;    //处理输入行中剩余的字符 
	 }
	 return ret_val;
 }
 
 /*
 output:
 请输入书的标题：
我与地坛
现在输入书的作者姓名：
史铁生
现在输入书本的价格：
20
我与地坛 by 史铁生: $20.00
史铁生: "我与地坛"($20.00)
Done.
 */

