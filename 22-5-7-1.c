#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
	//�ַ������ͣ���˫������������һ���ַ���Ϊ�ַ�������ֵ������ַ���
	//"abcdef";
	//"";
	//"hello worlf";
	//���϶����ַ���

	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
	//a--97
	//A--65
	//...--
	//ASCII����
	//ASCII��ֵ

	//char arr1[]="abc";//����
	////"abc"--'a','b','c','\0'--'\0'�ַ����Ľ�����־--/0��һ��ת���ַ�
	////'\0'���������ַ�����ĩβ�ģ������ַ���������
	//char arr2[] = {'a','b','c','\0'};//0Ҳok
	////'\0'--0
	////'a'--97
	//printf("%s\n", arr1);//��ӡ�ַ����õ���%s
	//printf("%s\n", arr2);
	
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	//strlen--string length--�����ַ������ȵ�
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}

//ת���ַ�--ת��ԭ������˼
//int main()
//{
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");

//	printf("C:\\test\\32\\test.c");//\����������ת��\
//	//\t--ˮƽ�Ʊ��������TAB����
//
//	//printf("abc\n");//\n--����
//	////printf("abcn");
//	return 0;
//}

int main()
{
	printf("%c\n", '\x61');
	//\xdd--�����16��������
	// \ddd--�����8��������
	//61-->ʮ����-->97-->a
	//printf("%d\n", strlen("C:\test\32\test.c"));
	//printf("%c\n", '\132');
	//\32--32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���Ǹ��ַ�
	//32--��10����--��26--����ΪASCII��ֵ������ַ�
	return 0;
}