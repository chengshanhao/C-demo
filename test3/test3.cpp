// test3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <direct.h>

//可变参数
void sum(int n, ...)
{
	va_list list;
	__crt_va_start(list,n);
	for (int i = 0; i < n; i++)
	{
		printf("%c\n", __crt_va_arg(list, char));
	}
	__crt_va_end(list);
}

int main()
{
	////当前根目录
	//char ss[100];
	//std::cout << _getcwd(ss, 100);

	//d(b)aabb d(b)dbbb(a) a(c)b(a)ddc bbcc(b)c
	char s[] = "\t\\name\\address\n";
	////指针指向二维数组，读取数据错误写法
	//int w[2][3] = { 1,2,3,4,5,6 }, (*pw)[3] = w; pw = w;
	//int y = *(w + 1)[1];//错误 *(w+1)为指针的值，并不是地址
	//y = *(pw + 1)[2];//错误

	////找出二维数组中最大与最小的数
	//char arr[3][3] = { 4,4,34,37,3,12,5,6,5 }, ch;
	//int i, j, max = arr[0][0], min = arr[0][0];
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] > max)
	//		{
	//			max = arr[i][j];
	//		}
	//		if (arr[i][j] < min)
	//		{
	//			min = arr[i][j];
	//		}
	//	}
	//}
	//printf("The max is:%d\nThe min is:%d\n", max, min);

	sum(5, 'a', 'b', 'c', 'd', 'f');

	printf("%d\n", printf("%d\n", printf("%d\n", 125)));
}
