#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//原码-->反码——>补码
//只要是整数，内存中储存的都是二进制的补码
//正数--原码、反码、补码 相同
//负数：
//原码（直接按照正负写出的二进制序列）--反码（原码的符号位不变，其他位按位取反得到的）--补码（反码加1得到的）
//-2
//10000000000000000000000000000010--原码
//11111111111111111111111111111101--反码
//11111111111111111111111111100010--补码

//常见关键字
// auto
//int main()
//{
//	auto int a = 10;//局部变量--自动变量--默认省略掉了auto
//	return 0;
//}

//register
//signed
// struct--结构体关键字
// union--联合体或共用体
//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//  int 定义的变量实际是有符号的
//  signed int  
//  unsigned int num=0;//无符号关键字
//	return 0;
//}

//int main()
//{
//	//int float;//err
//	//自己定义的符号名是不能和关键字冲突的，所以要避免
//	return 0;
//}

//typedef--类型定义--类型重定义
//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num = 2;
//	return 0;
//}

//static--修饰局部变量
// 局部变量的生命周期变长
// void--无或者空关键字
//void test()
//{
//	static int a = 1;//a变成一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static 修饰全局变量
//改变了变量的作用域--让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就无法使用了
//int main()
//{
//	//extern--声明外部符号的
//	extern int g_val;
//	printf( "g_val=%d\n",g_val );
//	return 0;
//}

//声明外部函数
//extern int Add(int, int);
////static 修饰函数改变了函数的链接属性
////普通的函数是可以外部链接属性
////外部链接属性--内部链接属性
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}