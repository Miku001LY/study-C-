#include<stdio.h>

//char-字符类型
int mum2 = 20;//全局变量-定义于代码块{}之外的变量
int main()
{
	//变量的作用域和生命周期
	//作用域哪里能用就是哪里的作用域
	//局部变量的作用域便是{}内
	//全局变量作用域是整个工程
	//未声明的标识符-如同工程内其他项目的标识
	//声明--extern外部符号的
	//例extern int global;
	
	//生命周期-出范围则不能用
	//对于局部变量的声明周期，进入作用域生命周期开始，出作用域则结束
	//全局变量的生命周期，则是整个工程的生命周期
	

	////变量的使用
	////计算两个数的相加
	//int num1 = 0;//=0是给予一个初始值
	//int num2 = 0;
	////输入数据-使用输入函数scanf
	//scanf_s("%d%d", &num1, &num2);//&-取地址符号
	////该语法意思将第一个%d放在地址处，第二个%d放在地址处
	//int sum = 0;
	////C语言语法规定，变量要定义在当前代码块的最前面
	//sum = num1 + num2;
	//printf("sum=%d\n",sum);
	
	//int num1 = 10;//局部变量-定义于代码块内部的变量
	//int mum2 = 21;
	//printf("%d\n", mum2);//局部变量与全局变量名字建议不要相同-容易误会，产生bug
	//当局部变量与全局变量名字相同时，局部变量优先
	// 局部变量仅能在局部{}范围内使用
	
	//short age = 20;//向内存申请2个字节=16个bit位，用来存放20
	//float weight = 95.6f;//向内存申请四个字节存放小数
	//仅希望单精度浮点型则数值后加f
	
	//printf("%d\n", sizeof(char)); //1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4&8---C语言标准规定sizeof(long)>=sizeof(int)
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8
	//以上数字表示字节
	
	//char ch = 'A';//内存申请一块空间存放字符A
	//printf("%c\n",ch);//%c--打印字符格式的数据//我以字符形式打印ch
	
	//short int-短整形
	//int-整形
	
	//int age = 20;
	//printf("%d\n",age);//%d--打印整形十进制数据//%f--打印浮点型
	//%p--以地址形式打印
	//%x--打印16进制数字
	
	//float f = 5.0;
	//printf("%f\n", f);
	
	//double d = 3.14;
	//printf("%lf\n", d);//%lf--打印双精度浮点型
	return 0;
}