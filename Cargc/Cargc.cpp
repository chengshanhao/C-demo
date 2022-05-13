
//命令行参数
//可以从命令行传值给 C 程序, 从外部控制程序，而不是在代码内对这些值进行硬编码
#include <iostream>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("参数个数为1");
	}
	else if (argc > 2)
	{
		printf("参数个数大于1");
	}
}
