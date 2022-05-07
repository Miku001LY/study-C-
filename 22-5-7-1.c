#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
	//字符串类型，由双引号引起来的一串字符称为字符串字面值，简称字符串
	//"abcdef";
	//"";
	//"hello worlf";
	//以上都是字符串

	//数据在计算机上存储的时候，存储的是二进制
	//a--97
	//A--65
	//...--
	//ASCII编码
	//ASCII码值

	//char arr1[]="abc";//数组
	////"abc"--'a','b','c','\0'--'\0'字符串的结束标志--/0是一个转义字符
	////'\0'是隐藏在字符串的末尾的，不算字符串的内容
	//char arr2[] = {'a','b','c','\0'};//0也ok
	////'\0'--0
	////'a'--97
	//printf("%s\n", arr1);//打印字符串用的是%s
	//printf("%s\n", arr2);
	
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	//strlen--string length--计算字符串长度的
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}

//转义字符--转变原来的意思
//int main()
//{
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");

//	printf("C:\\test\\32\\test.c");//\还可以用来转义\
//	//\t--水平制表符（类似TAB键）
//
//	//printf("abc\n");//\n--换行
//	////printf("abcn");
//	return 0;
//}

int main()
{
	printf("%c\n", '\x61');
	//\xdd--后面跟16进制数字
	// \ddd--后面跟8进制数字
	//61-->十进制-->97-->a
	//printf("%d\n", strlen("C:\test\32\test.c"));
	//printf("%c\n", '\132');
	//\32--32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的那个字符
	//32--》10进制--》26--》作为ASCII码值代表的字符
	return 0;
}