// Ctypechange.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <stdarg.h>

//可变参数
int cz(int s, ...) {
	va_list list;
	__crt_va_start(list, s);
	int sum=0;
	for (int i = 1; i <= s; i++)
	{		
		/*sum += __crt_va_arg(list, int);*/
		printf("%d:%d\n",i, __crt_va_arg(list, int));
	}
	__crt_va_end(list);
	return 0;
}

int main()
{
	std::cout << "Hello World!\n";
	
	FILE *fp;
	//类型强制转换
	char ss = 'a';
	int num = 4;std::wcout<<num;
	double sum = (double)(num + ss);
	printf("%.2f\n", sum);

	//错误处理
	fp = fopen("E:/数据库密码本（勿删）.txt", "r");
	if (fp == NULL)
	{
		ss = errno;
		fprintf(stderr, "错误号: %d\n", errno);
		perror("通过 perror 输出错误");
		fprintf(stderr, "打开文件错误: %s\n", strerror(ss));	
	}
	else
	{
		char buff[200];
		fscanf(fp, "%s", buff);
		fgets(buff,225,fp);
		printf("%s\n", buff);
		fclose(fp);

		fp = fopen("E:/demo.doc", "w");
		fputs("这是一个word文档",fp);
		fclose(fp);
	}
	cz(6,55,11,44,45,8,8,5);
}
