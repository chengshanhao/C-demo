// Cexercise3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<math.h>
enum en
{
	monday = '一', tuesday, wednesday, thursday, friday, saturday, sunday
}e;

//类
class lei
{
public:
	int ff();
	char dd();
private:
	int rr();
};

char lei::dd() {
	int s;
	return 'c';
}
int lei::ff()
{
	return 0;
}

//结构体所总占字节数
//对其值为n,小于n的变量变成n 大于n的以本身字节算 n的取值只能有1，2，4，8，其它数就按照正常方法运算(第一个取0,后一位必须是前面所算的字节的倍数，不够就补)，总数最大不超过正常运算值
#pragma back(push)
#pragma pack(4)
struct jgt
{
	char a;
	short d;
	static int b;
	struct jgt *next;
}j;

#define N 10
int main()
{
	char str[22] = "ab0cd*gfh*klr**jkdsfh";
	int len = strlen("\t\"\\\n'\065\08AB");
	lei ll;
	//std::cout << sizeof(ll) << "\n";
	
	int s=sizeof(j.next);//字节数
	
	int x = 1;
	for (int i = 1; i < N; i++)
	{
		if (i >= N - i)
		{
			x = N - i;
		}
		else
		{
			x = i;
		}
		for (int j = 1; j < N; j++)
		{
			if (j > x&&j <= N - x)
			{
				std::cout << x << "  ";
			}
			else
			{
				if (j > N - x)
				{
					x--;
					std::cout << x << "  ";
				}
				else
				{
					std::cout << j << "  ";
				}
			}
		}
		std::cout << "\n";
		/*int (*c)() = main;
		(*c)();*/
	}
}
