#include<iostream>
#include<stdio.h>

int add(int n, int m) {
	return n + m;
}

//ֱ��������
void sjx() {
	for (int i = 0; i < 7; i++)
	{
		for (int a = 0; a < i; a++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//����
void lx() {
	for (int i = 1; i <= 7; i++)
	{
		for (int a = 7; a >= i; a--)
		{
			printf(" ");
		}
		for (int a = 1; a <= i * 2 - 1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 6; i >= 1; i--)
	{
		for (int a = 7; a >= i; a--)
		{
			printf(" ");
		}
		for (int a = 1; a <= i * 2 - 1; a++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*for (int i = 1; i <= 6; i++)
	{
		for (int a = 6 - i; a <= 6; a++)
		{
			printf(" ");
		}
		for (int a = (5 - i) * 2 + 1; a >= 1; a--)
		{
			printf("*");
		}
		printf("\n");
	}*/
}

//�����
void wjx(int num, int num2, int num3) {
	/*int num = 20;
	int num2 = 15;
	int num3 = 18;*/
	//�ϰ벿
	for (int i = 1; i <= num; i++)
	{
#pragma region �ϰ벿���ͼ
		//��iΪnumʱ��Ϊ���һ�У����������а�ԭ�������

		if (i == num)
		{
			for (int a = i; a <= num * 3; a++)
			{
				//aԽ���ֵԽС����Ҫ���һ�е����20����Ϊ*
				if (num * 3 - a < 20)
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
		}
		else
		{
			for (int a = i; a <= num * 4; a++)
			{
				printf(" ");
			}
		}
#pragma endregion
#pragma region �ϰ벿�м�ͼ
		for (int a = 0; a < i * 2 - 1; a++)
		{
			//���aΪ0������ÿ�еĵ�һ����aΪi*2-1������ÿ�е����һ��
			if (a == 0)
			{
				printf("*");
			}
			else if (a + 1 == i * 2 - 1)
			{
				//���Ϊ���һ�еĵ����һ�������20��*
				if (i == num)
				{
					for (int b = 0; b < num + 1; b++)
					{
						printf("* ");
					}
				}
				else
				{
					printf("*");
				}
			}

			else
			{
				printf(" ");
			}

		}
		printf("\n");
#pragma endregion
	}

	//�м䲿
	for (int i = 1; i <= num2; i++)
	{
		//������������
		for (int a = 1; a <= i * 2 + 21; a++)
		{
			//ÿ�����һ������Ϊ*
			if (a == i * 2 + 21)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		//�м���䵹����
		for (int a = num2 * 3 + 15; a >= i; a--)
		{
			printf(" ");
		}
		//�м���䵹����
		for (int a = num2; a >= i; a--)
		{
			printf(" ");
		}
		for (int a = num2 * 2 + 12; a >= i * 2; a--)
		{
			if (a == i * 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	for (int i = 1; i <= num3; i++)
	{
		for (int a = i; a <= num3 * 2 + 14; a++)
		{
			//ÿ�����һ������Ϊ*
			if (a == num3 * 2 + 14)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		for (int a = 9 * 2 + 1; a >= i; a--)
		{
			if (a == 9 * 2 + 1)
			{
				for (int a = 0; a <= 41; a++)
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
		}
		for (int a = 3; a <= i * 2 + 1; a++)
		{
			printf("0");
		}
		for (int a = 0; a <= i * 2 + 1; a++)
		{
			printf("2");
		}
		printf("\n");
	}
}

int main() {
	int i = 10;
	float f = 10;
	double d = 123;
	int c;
	c = add(5, 8);
	if (i > c)
	{
		printf("%d>%d\n", i, c);
	}
	else if (i == c)
	{
		printf("%d=%d\n", i, c);
	}
	else
	{
		printf("%d<%d\n", i, c);
	}
	sjx();
	lx();

	int e, h, g;

	printf("��������������:");
	scanf_s("%d %d %d", &e, &h, &g);
	printf_s("e=%d,h=%d,g=%d\n", e, h, g);
	wjx(e, h, g);
	int(*xj)(int, int) = add;
	g = xj(2, 9);
	printf_s("g�����¸�ֵΪ%d\n", g);
	(g != 0) ? printf("gΪ����") : printf("gΪ������");
	return 0;
}

