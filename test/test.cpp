// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <string.h>

#define N 15
#define N2 3

char* hh(char* g) {
	char* s = g;
	*s = '122';//取最后一个字符
	return s;
}
struct stds { char ch; int id; float t; double f;  stds* next; char a; };

//请编写一个函数fun,它的功能是:计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。
void fun(int n) {
	if (n <= 1000)
	{
		int sum = 0;
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				sum += i;
			}
		}
		printf("%d的所有因子之和为:%d\n", n, sum);
	}
}

//用switch语句实现，输入某年某月某日，输出是这一年的第几天。
void days() {
	int year, month, day, sum = 0, eryue = 28;
	printf("请输入日期（例如：2000/02/10）:");
	scanf("%d/%d/%d", &year, &month, &day);
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) {
		eryue = 29;
	}
	switch (month) {
	case 1:
		sum += day; break;
	case 2:
		sum += 31 + day; break;
	case 3:
		sum += 31 + eryue + day; break;
	case 4:
		sum += 31 + eryue + 31 + day; break;
	case 5:
		sum += 31 + eryue + 31 + 30 + day; break;
	case 6:
		sum += 31 + eryue + 31 + 30 + 31 + day; break;
	case 7:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + day; break;
	case 8:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + 31 + day; break;
	case 9:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + 31 + 31 + day; break;
	case 10:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day; break;
	case 11:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day; break;
	case 12:
		sum += 31 + eryue + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day; break;
	}
	printf("%d年%d月%d日是今年的第%d天\n", year, month, day, sum);
}

//数组内元素首尾置换
void zhihuan() {
	char er[10] = "132456";
	char qq;
	int i, j;
	for (i = 0, j = strlen(er) - i - 1; i < strlen(er) / 2; i++, j--)
	{
		qq = er[i];
		er[i] = er[j];
		er[j] = qq;
	}
}

//中文倒序
void chinesechange() {
	typedef std::string ch;
	ch str = "撒打发哈萨克房间都是分开部署多个开发商手机卡看似简单就是大家咖啡哈萨克就发哈看似简单";
	for (int i = 0, j = str.size() - 1 - i; i < str.size() / 2; i += 2, j -= 2)
	{
		char dd = str[i];
		str[i] = str[j - 1];
		str[j - 1] = dd;

		dd = str[i + 1];
		str[i + 1] = str[j];
		str[j] = dd;
	}

	for (int i = 0; i < str.size(); i++)
	{
		printf("%c", str[i]);
	}
}

//菱形
void lingxing() {
	for (int i = 1; i <= 7; i++)
	{
		for (int a = i; a <= 7; a++)
		{
			std::cout << "/";
		}
		for (int a = 1; a <= (i - 1) * 2 + 1; a++)
		{
			std::cout << "*";
		}
		for (int a = i; a <= 7; a++)
		{
			std::cout << "/";
		}
		std::cout << "\n";
	}
	for (int i = 1; i <= 6; i++)
	{
		for (int a = 0; a <= i; a++)
		{
			std::cout << "/";
		}
		for (int a = 1; a <= (6 - i) * 2 + 1; a++)
		{
			std::cout << "*";
		}
		for (int a = 0; a <= i; a++)
		{
			std::cout << "/";
		}
		std::cout << "\n";
	}
}

//杨辉三角
void yhsj() {
	int number[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				number[i][j] = 1;
			}
			else
			{
				number[i][j] = number[i - 1][j - 1] + number[i - 1][j];
			}
			std::cout << number[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//魔方阵
void mfzeng() {
	int a[N2][N2] = { 0 };
	int count = 1;
	int row = 0, cul = N2 / 2;
	while (count <= N2 * N2)
	{
		a[row][cul] = count;
		int i = row;
		int j = cul;
		if (i == 0)
		{
			i = N2 - 1;
		}
		else
		{
			i = i - 1;
		}
		j = (j + 1) % N2;
		if (a[i][j] != 0 || (row == 0 && cul == N2 - 1))
		{
			i = row + 1;
			j = cul;
		}
		row = i;
		cul = j;
		count++;
	}

	for (int i = 0; i < N2; i++)
	{
		for (int j = 0; j < N2; j++)
		{
			printf("%3d", a[i][j]);
		}
		std::cout << "\n";
	}
}

//折半查找法
void zbsearch() {
	int num[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int len = (int)(sizeof(num) / sizeof(*num));
	std::cout << "请输入一个数：";
	int n;
	scanf("%d", &n);
	int left = len - 1;
	int right = 0;
	bool re = false;
	while (left >= right)
	{
		len = (left + right) / 2;
		if (n < num[len])
		{
			left = len - 1;
		}
		else if (n > num[len])
		{
			right = len + 1;
		}
		if (n == num[len])
		{
			printf("%d是此数组中第%d个元素的值", n, len + 1);
			re = true;
			break;
		}
	}
	if (!re)
	{
		std::cout << "无此数";
	}
}

//找寻二维数组中鞍点（行中最大，列中最小的数）
void xunzandian() {
	const int rows = 5, cols = 3;
	int num[rows][cols] = { {11,10,3},{12,15,5},{11,12,9},{7,11,12},{7,9,1} };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%3d", num[i][j]);
		}
		printf("\n");
	}
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		int col = 0;
		int n = 0;
		bool re = false;
		for (int j = 0; j < cols; j++)
		{
			if (num[i][j] > n)
			{
				col = j;
				n = num[i][j];
			}
		}
		for (int j = 0; j < rows; j++)
		{
			if (num[j][col] < n)
			{
				re = true;
				break;
			}
		}
		if (!re)
		{
			printf("num[%d][%d]=%d是一个鞍点\n", i, col, n);
			count++;
		}
	}
	if (count == 0)
	{
		printf("数组无鞍点\n");
	}
}

//找寻相邻且最长的不重复的字符串
void xunbcfstr() {
	char str[] = "qassrefggdss";
	int i = 1;
	int count = 0;
	int indexstart = 0;
	int indexend = 0;
	int len = 0;
	char s = '0';
	int j = 0/*起始索引*/, z = 0;/*末索引*/
	while (i <= strlen(str))
	{
		if (s == str[i])
		{
			count++;//实际会获取重复的(gg)的g
			if (len < count)
			{
				len = count;
				indexstart = j;
				indexend = z;
			}
			i++;
			count = 0;
			continue;
		}
		else
		{
			if (str[i - 1] != str[i])
			{
				count++;
				z = i;
				j = z - count;
				s = str[i];
			}
		}
		i++;
	}

	for (int x = indexstart; x <= indexend; x++)
	{
		std::cout << str[x];
	}
}

#pragma region 长度为n的链表
struct list_node {
	int id;
	list_node* next;
};
void addlist(list_node* li, list_node* oli) {
	list_node* p = li;
	while (NULL != p->next)
	{
		p = p->next;
	}
	p->next = oli;
}
list_node* creatlist(int n) {
	list_node* lists, * lists2;
	lists = (list_node*)malloc(sizeof(list_node));
	memset(lists, 0, sizeof(lists));
	lists->next = NULL;

	for (int i = 1; i <= n; i++)
	{
		lists2 = (list_node*)malloc(sizeof(list_node));
		memset(lists2, 0, sizeof(lists2));
		lists2->id = i;
		lists2->next = NULL;
		addlist(lists, lists2);
	}
	return lists;
}
#pragma endregion

#pragma region 学生信息
struct Student {
	char id[5];
	char name[5];
	float math;
	float chinese;
	float english;
	float avg;
}info[3] = { {"1001","小李",82,90,66}, {"1002","小菜",75,98,80}, {"1003","小晓",88,90,87} };

void input() {
	std::cout << "学号\t" << "姓名\t" << "语文\t" << "数学\t" << "英语\t" << "平均分\n";
	for (int i = 0; i < 3; i++)
	{
		info[i].avg = (info[i].chinese + info[i].math + info[i].english) / 3;
		printf("%s\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", info[i].id, info[i].name, info[i].chinese, info[i].math, info[i].english, info[i].avg);
	}
}

void max() {
	int max = 0, index = 0;
	for (int i = 0; i < 3; i++)
	{
		if (info[i].avg > max)
		{
			max = info[i].avg;
			index = i;
		}
	}
	printf("平均分最高的学生是：%s，其平均分是%.1f\n", info[index].name, info[index].avg);
}

void print() {
	int cmax = 0, cindex;
	int mmax = 0, mindex;
	int emax = 0, eindex;
	for (int i = 0; i < 3; i++)
	{
		if (info[i].chinese > cmax)
		{
			cmax = info[i].chinese;
			cindex = i;
		}
		if (info[i].math > mmax)
		{
			mmax = info[i].chinese;
			mindex = i;
		}
		if (info[i].chinese > emax)
		{
			emax = info[i].chinese;
			eindex = i;
		}
	}
	printf("语文成绩最高的学生是：%s，其分数是%.1f\n", info[cindex].name, info[cindex].chinese);
	printf("数学成绩最高的学生是：%s，其分数是%.1f\n", info[mindex].name, info[mindex].math);
	printf("英语成绩最高的学生是：%s，其分数是%.1f\n", info[eindex].name, info[eindex].english);
}
#pragma endregion


int main()
{
	char r = 6;
	char* size = &r;
	char rr = *size;
	int le = sizeof(stds);

	char ss[] = "4545";
	hh(ss);

	int g = 97;
	g = pow(16, 0.25);//开放

	/*zhihuan();
	days();
	fun(10);
	chinesechange();
	lingxing();
	yhsj();
	mfzeng();
	zbsearch();
	xunzandian();
	xunbcfstr();
	*/

	//int n = 15;//链表长度
	//list_node* list = creatlist(n);

	input();
	max();
	print();

	void funs(int* a, int* b);

	int x = 3, y = 5, * p = &x, * q = &y;
	funs(p, q);
	printf("%d, %d，", *p, *q);
	funs(&x, &y);
	printf("%d, %d\n", *p, *q);
}
void funs(int* a, int* b)
{
	int *c;
	c = a; a = b; b = c;//aaaad ac(a)dad(c) ab(c)a(c)d(b)a(b) d(b)a(d)cbc
}