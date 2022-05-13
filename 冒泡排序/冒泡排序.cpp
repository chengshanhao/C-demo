
#include <iostream>

void mppx(int sz[], int len) {
	int arr;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
			if (sz[j] < sz[j + 1]) {
				arr = sz[j];
				sz[j] = sz[j + 1];
				sz[j + 1] = arr;
			}
	}
}

void sushu();
void huiwen();
bool ss(int x);
int main()
{
	int sz[] = { 3,5,2,6,8,1,4,7,9 };
	int len = (int) sizeof(sz) / sizeof(*sz);
	mppx(sz, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", sz[i]);
	}
	printf("\n");
	//A、B、C、D、E 五人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，于是各自找地方睡觉。
	//日上三杆，A 第一个醒来，他将鱼分为五份，把多余的一条鱼扔掉，拿走自己的一份。
	//B 第二个醒来，也将鱼分为五份，把多余的一条鱼扔掉拿走自己的一份。 。
	//C、D、E依次醒来，也按同样的方法拿鱼。
	//问他们合伙至少捕了多少条鱼 ? 以及每个人醒来时见到了多少鱼？
	int a, b, c, d, e;
	for (int a = 5; ; a++)
	{
		b = ((a - 1) / 5) * 4;
		c = ((b - 1) / 5) * 4;
		d = ((c - 1) / 5) * 4;
		e = ((d - 1) / 5) * 4;
		if (a % 5 == 1 && b % 5 == 1 && c % 5 == 1 && d % 5 == 1 && e % 5 == 1)
		{
			printf("他们合伙至少捕了：%d条鱼\n", a);
			printf("他们每个人醒来时见到了的鱼数量分别为%d，%d，%d，%d，%d\n", a, b, c, d, e);
			break;
		}
	}

	/*sushu();
	huiwen();*/

	//判断一个数是否由两个素数组成
	int h;
	printf("-----分解数为两素数判断----\n");
	printf("请输入一个正整数：");
	scanf("%d", &h);
	bool bl = false;//true:可以；flase：不可以
	for (int i = 2; i < h; i++)
	{
		if (ss(i))
		{
			if (ss(h - i))
			{
				bl = true;
				printf("%d=%d+%d\n", h, i, h - i);
				break;
			}
		}
	}
	if (!bl)
	{
		printf("%d不能分解成两个素数\n", h);
	}
}

void huiwen() {
	//回文数
	int n1, n2 = 0, n3, n4;
	printf("-----回文数判断----\n");
	printf("请输入一个数：");
	scanf("%d", &n1);
	n3 = n1;
	n4 = n1;
	while (n1 != 0)
	{
		n3 = n1 % 10;
		n2 = n2 * 10 + n3;
		n1 = n1 / 10;
	}

	if (n2 == n4)
	{
		printf("%d是一个回文数\n", n4);
	}
	else
	{
		printf("%d不是一个回文数\n", n4);
	}
}

void sushu() {
	//素数即实数，大于1的数总除1与它本身，没有其他的因子的数
	int num = 0;
	bool re = true;
	printf("-----素数判断----\n");
	printf("请输入一个正整数：");
	scanf_s("%d", &num);
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			re = false;
			break;
		}
		else
		{
			re = true;
		}
	}
	if (re == true)
	{
		printf("%d是一个素数\n", num);
	}
	else
	{
		printf("%d不是一个素数\n", num);
	}
}

bool ss(int x) {
	//素数即实数，大于1的数总除1与它本身，没有其他的因子的数
	bool re = true;//true:是素数；flase：不是素数
	for (int i = 2; i < x; i++)
	{
		if (x%i == 0)
		{
			re = false;
			break;
		}
	}
	return re;
}
