#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	//ע�͵����ַ���--cpp�ƹ���c
//	/*ע�͵����ַ���--cԭʼ��*///--��֧��Ƕ��ע��
//	//ע��һ�����ڴ���Ƚ��Ѷ��ĵط�
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("��������\n");
//	printf("��Ҫ�ú�ѧϰ��(1����/0:��)>:\n");
//	scanf("%d", &input);//1\0
//	if (input == 1)//һ���Ⱥ��Ǹ�ֵ�������Ⱥ��ǵ���
//		printf("�Ǻã���������棡\n");
//	else
//		printf("ܳ����������鳣�\n");
//
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("��ʼѧϰ���\n");
//
//	while (line < 20000)
//	{
//		printf("��һ��ͷ��,�Ѿ�����%d��ͷ��\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��ϲ�㣬��ͺ�ˣ������ǿ�ˣ�\n");
//
//	return 0;
//}

//����
//��������Ϊһ��˼·���޷�����
//�Զ��庯��--������Add����
//�⺯��
//�ص��Ǽ򻯴��룬���븴��

//int Add(int x, int y)//Add--������  ������--�����Ĳ���  {}��--������--������ɸ���������
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
//	sum = Add(num1, num2);//Add--������������ֵ����
//	//sum=a+b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//����--����һ���ռ������һ����
//����--һ����ͬ����Ԫ�صļ���
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};//����һ�����10���������ֵ�����
	//�涨��{}�е�Ԫ�ض����±� 0,1,2,3,4,5,6,7,8,9
	//�±��Ǵ�0��ʼ�����ε���1����������n��Ԫ�أ����±���n-1
	printf("%d\n",arr[4]);
	//arr[�±�]
	//char ch[20];
	//float arr2[5];
	return 0;
}