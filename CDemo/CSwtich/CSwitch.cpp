

#include <iostream>
#include <stdio.h>

int main()
{
	int num1, num2, result;
	char fh;
	char re = 'Y';
	while (re != 'N'||re!='n')
	{
		do
		{
			printf("-------------自定义计算机--------------\n-------------自定义计算机--------------\n-------------自定义计算机--------------\n");
			printf("请输入第一个数：");
			scanf("%d", &num1);
			printf("请输入计算操作符(+,-,*,/)：");
			scanf("%*c%c", &fh);
			printf("请输入第二个数：");
			scanf("%d", &num2);
			switch (fh)
			{
			case '-':
				result = num1 - num2;
				printf("计算结果：%d-%d=%d\n", num1, num2, result);
				break;
			case '+':
				result = num1 + num2;
				printf("计算结果：%d+%d=%d\n", num1, num2, result);
				break;
			case '/':
				result = (float)(num1 / num2);
				printf("计算结果：%d/%d=%d\n", num1, num2, result);
				break;
			case '*':
				result = num1 * num2;
				printf("计算结果：%d*%d=%d\n", num1, num2, result);
				break;
			default:
				printf("输入计算操作符错误！(+,-,*,/)\n");
				result = 0;
				break;
			}
		} while (result == 0);
		printf("是否继续使用自定义计算机？（Y/N）\n");
		scanf("%*c%c", &re);
	}
}