#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//单目操作符-
//int main()
//{
//	//sizeof
//	//复习
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//int 在在这里指的是数组arr中每个元素的类型是int，但数组顶顶顶类型-->int[6]
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//err
//	printf("%d\n", sizeof(arr));//计算数组大小，单位字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算arr数组中每个元素的个数
//	//arr[0],--数组对应下标，第一个元素为0
//	return 0;
//}

//int main()
//{ 
//	//~--对一个数的二进制按位取反
//	//按位取反示例
//	//1010
//	//0101
//	int a = 0;//1个字节，32个bit位
//	int b = ~a;//b是有符号的整形
//	//有符号的整形最高位，表示符号位--（0）000000000
//	// 0-为正数，1-为负数
//	// 负数说明内存中储存的是补码
//	// int的储存是补码储存
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//源码、反码、补码
//	// 源码符号位不变，其他位按位取反，得到反码，反码加1得到补码
//	//补码符号位不变，减一，得到反码，反码按位取反得到源码 
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的，打印的是这个数的源码
//	//补码求源码
//	//得到-1结果的原因
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	return 0;
//}

//-- ++ 符号
//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++,先使用，再++
//	////a的值先赋给b再,a再自增，a变成11--先使用再自增
//	//printf("a=%d b=%d\n",a,b);//11 10
//
//	//int a = 10;
//	//int b = ++a;//前置++,先++，再使用
//	////先自增再使用
//	//printf("a=%d b=%d", a, b);
//	//return 0;
//
//	//int a = 10;
//	//int b = a--;//后置--，先使用再自减
//	//printf("a=%d b=%d", a, b);
//	//return 0;
//	
//	int a = 10;
//	int b = --a;//前置--，先减再使用
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//()类型-强制类型转换
//int main()
//{
//	int a = (int)3.14;//double-->int
//	printf("%d\n", a);
//	return 0;
//}

//关系操作符
//实际就是表示--比较大小
//>
//<
//>=
//<=
//!=  ---用于测试“不相等”
//==  ---用于测试“相等”

//逻辑操作符
//int main()
//{
//	//真--非0
//	//假--0
//	//&&-逻辑与
//	//int a = 3;
//	//int b = 5;
//	//int c=a&&b;//a为真，并且b为真，结果才为真
//	//printf("c=%d\n", c);
//
//	//||--逻辑或
//	int a = 0;
//	int b = 5;
//	int c = a || b;//a与b其一为真，结果真
//	//全为假，才为假
//	printf("c=%d\n", c);
//	return 0;
//}

//条件操作符--三目操作符
//exp1?exp2:exp3;
//若exp1为真，那exp2要执行，exp2的结果是整个表达式的结果
//若exp1为假，那exp3要执行，exp3的结果是整个表达式的结果

//int main()
//{
//	int a =10 ;
//	int b = 20;
//	int max = 0;
////1
//	max = (a > b ? a : b);
////2
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//以上二者表达含义相同
//	return 0;
//}

//逗号表达式
//exp1,exp2,exp3,......,expN

//下标引用、函数调用和结构成员
//[] , () , . , ->
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);//函数名后的这个()--函数调用操作符
//	return 0;
//}

//& * . ->