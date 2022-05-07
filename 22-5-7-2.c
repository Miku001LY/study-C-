#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	//注释的两种方法--cpp推广至c
//	/*注释的两种方法--c原始的*///--不支持嵌套注释
//	//注释一般用在代码比较难懂的地方
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("接下来，\n");
//	printf("你要好好学习吗？(1：是/0:否)>:\n");
//	scanf("%d", &input);//1\0
//	if (input == 1)//一个等号是赋值，两个等号是等于
//		printf("那好，给你个甜枣！\n");
//	else
//		printf("艹，给你个大棒槌！\n");
//
//	return 0;
//}


//循环语句
//int main()
//{
//	int line = 0;
//	printf("开始学习编程\n");
//
//	while (line < 20000)
//	{
//		printf("掉一根头发,已经掉了%d根头发\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("恭喜你，你秃了，但你变强了！\n");
//
//	return 0;
//}

//函数
//以下内容为一个思路，无法运行
//自定义函数--如以下Add函数
//库函数
//特点是简化代码，代码复用

//int Add(int x, int y)//Add--函数名  （）内--函数的参数  {}内--函数体--是在完成给定的任务
//{
//	int z=x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);//Add--能完成两个数字的相加
//	//sum=a+b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//数组--创建一个空间来存放一组数
//定义--一组相同类型元素的集合
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};//定义一个存放10个整形数字的数组
	//规定的{}中的元素都有下标 0,1,2,3,4,5,6,7,8,9
	//下标是从0开始，依次递增1，若数组有n个元素，则下标至n-1
	printf("%d\n",arr[4]);
	//arr[下标]
	//char ch[20];
	//float arr2[5];
	return 0;
}