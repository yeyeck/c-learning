# include <stdio.h>

int main()
{
	float weight;
	float value;
	
	printf("Are you worth your weight in platinum? \n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	
	//scanf() 方法用于读取键盘的输入， %f 表明要读取的是浮点数， &weight表示 把scanf()方法读取的浮点数赋值给 weight。 
	scanf("%f", &weight);
	
	value = 1700.0 * weight * 14.5833;
	
	//在printf() 方法中，使用 %f 来输出浮点数。%.2f 用于精确控制输出，只输出小数点后两位 
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that ! If platinum price drop,\n");
	printf("eat more to maintain your value.\n");
}
/*
	位：bit 最小的存储单位，可以存储0或1.位是计算机内存的基本构建块；
	字节： byte 对于几乎所有的机器，1字节均为8位，这是字节的标准定义。有2^8种组合
	字： word 设计计算机时给定的自然 存储单位，对于8位的微型计算机，1个字长只有8位。 现在个人计算机增至16位，32位，64位。计算机的字长越大，其数据转移越快，允许的内存访问也越多。 

*/ 

/*
	整数和浮点数
	1、整数没有小数部分。浮点数有小数部分
	2、浮点数可以表示的范围比整数大
	3、对于一些算术运算，浮点数损失精度更多。  
	 
*/ 



/*
Are you worth your weight in platinum?
Let's check it out.
Please enter your weight in pounds: 60
Your weight in platinum is worth $1487496.63.
You are easily worth that ! If platinum price drop,
eat more to maintain your value.
*/
