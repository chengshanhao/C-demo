// Cexercise5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <direct.h>
#define row 2
#define col 3

char* dele(char* s) {
	char str[100] = "";
	int a = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		int num = s[i];
		if (num >= 65)
		{
			str[a] = s[i];
			a++;
		}
	}
	return str;
}

//1 2 3
//4 5 6
//函数矩阵转置
//1 4
//2 5
//3 6
void zh(double a[row][col], double b[col][row]) {
	int n1, n2;
	for (n1 = 0; n1 < col; n1++)
	{
		for (n2 = 0; n2 < row; n2++)
		{
			b[n1][n2] = a[n2][n1];
		}
	}
}

struct list_node {
	int data;
	list_node* next;
};

list_node* CreatNode(int data) {
	list_node* node = NULL;
	node = (list_node*)malloc(sizeof(list_node));
	if (node == NULL)
	{
		printf("malloc fair!\n");
		return NULL;
	}

	memset(node, 0, sizeof(list_node));
	node->data = data;
	node->next = NULL;
}

void add_before(list_node* oldnode, list_node* newnode) {
	list_node* p = oldnode;
	newnode->next = p->next;
	p->next = newnode;
}

void add_after(list_node* oldnode, list_node* newnode) {
	list_node* p = oldnode;
	while (NULL != p->next)
	{
		p = p->next;
	}
	p->next = newnode;
}

void printf_listnode(list_node* node) {
	list_node* p = node;
	p = p->next;
	while (p->next != NULL)
	{
		printf("data:%d\n", p->data);
		p = p->next;
	}
	printf("data:%d\n", p->data);
}

/// <summary>
/// 数组重组
/// </summary>
void RWB() {
	char color[] = "RWBBWRBBWWRR";//B蓝 W白 R红
	int c = 0, d = 0, f = 0;
	for (int i = 0; i < strlen(color); i++)
	{
		if (color[i] == 'B')
		{
			c++;
		}
		else if (color[i] == 'W')
		{
			d++;
		}
		else if (color[i] == 'R')
		{
			f++;
		}
	}
	for (int i = 0; i < c; i++)
	{
		color[i] = 'B';
	}
	for (int i = c; i < c + d; i++)
	{
		color[i] = 'W';
	}
	for (int i = c + d; i < c + d + f; i++)
	{
		color[i] = 'R';
	}
}

/// <summary>
/// 两文件内容追加
/// </summary>
void CatFileContent() {
	FILE* fp = NULL;
	char content[] = "";
	char content2[] = "";

	fp = fopen("E:/file1.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "%s", strerror(errno));
	}
	fgets(content, 2000, fp);
	fopen_s(&fp, "E:/file2.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "%s", strerror(errno));
	}
	fgets(content2, 2000, fp);
	strcat(content, content2);
	fp = fopen("E:/file1.txt", "w");
	fputs(content, fp);
	fclose(fp);
}

//去除字符串str中在字符串str2中存在的字符
void comparestr(char* str, char* str2) {
	for (int i = 0; i < strlen(str2); i++)
	{
		for (int n = 0; n < strlen(str); n++)
		{
			if (str[n] == str2[i])
			{
				*(str + n) = '\\';
			}
		}
	}
	int s = 0;
	for (int n = 0; n < strlen(str); n++)
	{
		if (str[n] != '\\')
		{
			*(str + s) = str[n];
			s++;
			str[n] = '\\';
		}
	}
	for (int n = 0; n < strlen(str); n++)
	{
		if (str[n] == '\\')
		{
			*(str + n) = '\0';
			break;
		}
	}
}

//分数序列求和
double sequence_sum(double sum) {
	static double num = 2, num2 = 1, cs = 1;
	int num3 = num;
	sum += num / num2;
	if (cs >= 10)
	{
		return sum;
	}
	else
	{
		num += num2;
		num2 = num3;
		cs++;
		sequence_sum(sum);
	}
}

//枚举
enum Transportation_light {
	red = 1, yellow = 2, green = 3
}light;

//输出21世纪所有的闰年。（判断闰年的条件：能被4整除但不能被100整除，或者能被400整除）
void runyear() {
	for (int i = 2001; i <= 2100; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d\n", i);
		}
	}
}

//1000以内完数（该数所有因子（不包含其本身）之和正好等于该数）
void wanshu() {
	for (int i = 1; i < 1000; i++)
	{
		int sum = 0;
		int num = i;
		for (int x = 1; x <= i / 2; x++)
		{
			if (i % x == 0)
			{
				sum += x;
			}
		}
		if (sum == i)
		{
			printf("%d:", i);
			for (int x = 1; x <= i / 2; x++)
			{
				if (i % x == 0)
				{
					if (x > 1)
					{
						printf(",");
					}
					printf("%d", x);
					if (x == i / 2)
					{
						printf("\n");
					}
				}
			}
		}
	}
}

//字符串的第m个字符开始的全部字符复制到另一个字符串中。
//要求在主函数中输入字符串及m值并输出结果，在被调用函数中完成复制
char* jiequstr(int index, char* str) {
	int len = strlen(str);
	char* strs = str;
	int x = 0;
	for (int i = 0; i < len; i++)
	{
		if (i >= index - 1)
		{
			strs[x] = str[i];
			x++;
		}
		if (i == len - 1)
		{
			strs[x] = '\0';
		}
	}
	return strs;
}

struct person {
	int id;
	char name[10];
}per, * mm = &per;

int main()
{
	/*1. 编写函数, 删除字符串 str 中的所有数字字符。
	要求：
	(1) 字符串 str 通过键盘输入；
	(2) 主函数 main 完成调用函数和输出结果的功能；
	(3) 函数数字字符操作在自定义函数 dele 中完成。
	例如，若输入的字符串为：asdf123ghj<CR>（<CR>表示回车）时，程序的输出结果应为：“The new
	string is : asdfghj”；*/

	/*char str[]="";
	char* str2;
	printf("请输入一串字符：\n");
	scanf("%s", str);
	str2 = dele(str);
	printf("The new string is : %s\n", str2);*/

	/*char str1[] = "gcdhiglgodvceddyhou", str2[] = "cfgh5d";
	comparestr(str1, str2);
	printf("%s\n", str1);*/

	/*int x = 3;
	printf("x=%d,x=%o,x=%x\n", x, x, x);*/

	/*double a[2][3] = { {1,2,3},{4,5,6} };
	double b[3][2] = { };
	zh(a, b);*/

	/*list_node* first_node = CreatNode(0);
	for (int i = 1; i < 5; i++)
	{
		add_after(first_node, CreatNode(i));
	}
	printf_listnode(first_node);*/

	/*int a = 0, b = 0;
	a++&& b++ || b++;*/

	//char ss[] = "";
	//_getcwd(ss, 100);//获取当前根目录

	/*int a = 42;
	printf("%d,%o,%X\n", a, a, a);*/

	/*
	double sum = sequence_sum(0);
	*/

	/*light = red;
	printf("%d\n", light);*/

	/*runyear();
	wanshu();*/

	/*char s[99];
	printf("请输入一个字符串：\n");
	scanf("%s", &s);
	int index = 0;
	printf("请输入需要从第几个字符开始截取：\n");
	bool re = scanf("%d", &index);
	if (re)
	{
		char* p = jiequstr(index, s);
		printf("结果：%s\n", p);
	}
	else
	{
		printf("Error:输出格式错误！");
	}*/
}