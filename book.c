#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {                   /*�ṹģ�壬����� book */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 

char * s_gets(char *, int);

int main()
{
	struct book library;    /* �� library ����Ϊһ�� book ���͵ı���*/
	printf("��������ı��⣺\n");
	s_gets(library.title, MAXTITL);
	printf("���������������������\n");
	s_gets(library.author, MAXAUTL);
	printf("���������鱾�ļ۸�\n");
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
 		find = strchr(st, '\n'); //���һ��з�
		if (find)            //�����ַ����NULL 
			*find = '\0';   //�ڴ˷���һ�����ַ�
		else
			while (getchar() != '\n')
				continue;    //������������ʣ����ַ� 
	 }
	 return ret_val;
 }
 
 /*
 output:
 ��������ı��⣺
�����̳
���������������������
ʷ����
���������鱾�ļ۸�
20
�����̳ by ʷ����: $20.00
ʷ����: "�����̳"($20.00)
Done.
 */

