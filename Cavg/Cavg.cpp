
#include <iostream>
#include <stdio.h>

int main()
{
	float nums[10], sum = 0;
	int n=(int)sizeof(nums)/sizeof(*nums);
	printf("请输入元素个数：\n");
	scanf("%d", &n);
	while (n < 0 || n > 8)
	{
		printf("元素个数需要1-8之间\n");
		printf("请重新输入：");
		scanf("%d", &n);
	}
	printf("---------------------------\n");
	printf("请输入%d个1-100内的数：\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("第%d个数： ", i + 1);
		scanf("%f", &nums[i]);
		while (nums[i] < 0 || nums[i]>100)
		{
			printf("数字需要在1-100之内：\n");
			printf("请重新输入第%d个数：", i + 1);
			scanf("%f", &nums[i]);
		}
		sum += nums[i];
	}
	printf("---------------------------\n");

	printf("该数组元素的和为：%.2f\n", sum);
	printf("该数组元素的平均数为：%.2f", sum / n);
	return 0;
}