﻿// test3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include <direct.h>

//可变参数
void sum(int n, ...)
{
	va_list list;
	__crt_va_start(list, n);
	for (int i = 0; i < n; i++)
	{
		printf("%c\n", __crt_va_arg(list, char));
	}
	__crt_va_end(list);
}

void xiangjia() {
	long int num = 6, count, s = num;
	printf("请输入相加数的个数：");
	scanf("%d", &count);
	for (int i = 1; i < count; i++)
	{
		s += (num * 10 + num);
	}
	printf("结果为：%d\n", s);
}

void ifgrade() {
	float score;
	char level;
	printf("请输入一个百分制成绩：");
	scanf("%f", &score);
	if (score >= 90)
	{
		level = 'A';
	}
	else if (score >= 80 && score < 90) {
		level = 'B';
	}
	else if (score >= 70 && score < 80) {
		level = 'C';
	}
	else if (score >= 60 && score < 70) {
		level = 'D';
	}
	else
	{
		level = 'E';
	}
	printf("成绩等级为：%c", level);
}

struct listnode {
	int data;
	struct listnode* next;
};
listnode* intialnode() {
	listnode* node;
	node = (struct listnode*)malloc(sizeof(listnode));
	memset(node, 0, sizeof(node));
	node->data = 0;
	node->next = NULL;
	return node;
}

listnode* addnode(listnode* node) {
	listnode* r = node;
	for (int i = 1; i <= 5; i++)
	{
		listnode* p;
		p = (listnode*)malloc(sizeof(listnode));
		memset(p, 0, sizeof(p));
		p->data = i;
		p->next = NULL;
		while (NULL != r->next)
		{
			r = r->next;
		}
		r->next = p;
	}
	return node;
}

listnode* reseverlist(listnode* node) {
	listnode* r, * t, * y;
	r = node->next;
	t = r->next;
	r->next = NULL;
	while (t)
	{
		y = r;
		r = t;
		t = t->next;
		r->next = y;
	}
	node->next = r;
	return node;
}

void printlist(listnode* node) {
	listnode* p = node->next;
	while (NULL != p->next)
	{
		printf("%2d", p->data);
		p = p->next;
	}
	printf("%2d", p->data);
}

int fu(int n) {
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return fu(n - 1) + fu(n - 2);
	}
}

int main()
{
	fu(5);
	////当前根目录
	//char ss[100];
	//std::cout << _getcwd(ss, 100);

	//十二
	//d(b)aabb d(b)dbbb(a) a(c)b(a)ddc bbcc(b)c
	// 十一（84）
	//b(a)cd(c)bc(d) bac(d)da(d) aa(d)aab d(b)c(d)d(c)d(c)a -10
	//m (x%3==0&&x%7==0) 1次 4(3)次 tolower()(strlwr()) 1 j>=1 if(bb[j]<n)(bb[j]=bb[j-1]) break sizeof(struct node) (宏)定义 m  1021103 -6


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

	/*xiangjia();
	ifgrade();*/

	listnode* node;
	node = reseverlist(addnode(intialnode()));
	printlist(node);
}


