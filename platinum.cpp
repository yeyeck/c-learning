# include <stdio.h>

int main()
{
	float weight;
	float value;
	
	printf("Are you worth your weight in platinum? \n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	
	//scanf() �������ڶ�ȡ���̵����룬 %f ����Ҫ��ȡ���Ǹ������� &weight��ʾ ��scanf()������ȡ�ĸ�������ֵ�� weight�� 
	scanf("%f", &weight);
	
	value = 1700.0 * weight * 14.5833;
	
	//��printf() �����У�ʹ�� %f �������������%.2f ���ھ�ȷ���������ֻ���С�������λ 
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that ! If platinum price drop,\n");
	printf("eat more to maintain your value.\n");
}
/*
	λ��bit ��С�Ĵ洢��λ�����Դ洢0��1.λ�Ǽ�����ڴ�Ļ��������飻
	�ֽڣ� byte ���ڼ������еĻ�����1�ֽھ�Ϊ8λ�������ֽڵı�׼���塣��2^8�����
	�֣� word ��Ƽ����ʱ��������Ȼ �洢��λ������8λ��΢�ͼ������1���ֳ�ֻ��8λ�� ���ڸ��˼��������16λ��32λ��64λ����������ֳ�Խ��������ת��Խ�죬������ڴ����ҲԽ�ࡣ 

*/ 

/*
	�����͸�����
	1������û��С�����֡���������С������
	2�����������Ա�ʾ�ķ�Χ��������
	3������һЩ�������㣬��������ʧ���ȸ��ࡣ  
	 
*/ 



/*
Are you worth your weight in platinum?
Let's check it out.
Please enter your weight in pounds: 60
Your weight in platinum is worth $1487496.63.
You are easily worth that ! If platinum price drop,
eat more to maintain your value.
*/
