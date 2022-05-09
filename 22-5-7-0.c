//在文件开头添加#define _CRT_SECURE_NO_WARNINGS 1
//或在项目--属性--C--预处理器--<编辑>中添加_CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//常量
		//3;//1.字面常量
	//2.const修饰变常量
	//const-常属性
	//const int n = 10;//n是变量，但是又有常属性，所以这里说n是常变量
	//int arr[n] = { 0 };//但n本质还是一个变量，故[]内n不能用

	//const int num = 4;//不可改
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);

//	int num1=0;
//	int num2=0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h> 
//	//3.#define 定义的标识符常量
//#define MAX 10
//
//int main()
//	{
//		int arr[MAX] = { 0 };
//		printf("%d\n", MAX);
//		return 0;
//	}

#include<stdio.h>

//4.枚举常量
//枚举--一一列举
//性别：男、女、保密
//三原色：红、黄、蓝
//星期；1234567

//枚举关键字-enum
//枚举常量--下方
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
////enum Sex s = FEMALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	//他们每个符号都是有值的，他们是不可被改变的--枚举常量
//	return 0;
//}
//例子2
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;//color这个变量是可以改的
//	color = YELLOW;//枚举常量不能改，但枚举类型创建的变量可改
//	printf("%d", color);
//	return 0;
//}
