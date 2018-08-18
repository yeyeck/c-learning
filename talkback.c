#include <stdio.h>
#include <string.h>             //提供strlen() 函数原型 

#define DENSITY 62.4            // 人体密度 （单位： 磅/立方英尺） 

int main() 
{
	float weight, volume;
	int size, letters;
	char name[40];     //声明一个可容纳40个字符的数组
	
	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	
	printf("Also, your first name has %d letters,\n", letters);
	
	printf("and we have %d bytes to store it.\n", size);
	
	return 0;
	
} 
/*
output:
	Hi! What's your first name?
	yeyeck
	yeyeck, what's your weight in pounds?
	100
	Well, yeyeck, your volume is 1.60 cubic feet.
	Also, your first name has 6 letters,
	and we have 40 bytes to store it.
*/
