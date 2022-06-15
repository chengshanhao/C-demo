// test3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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

//1000以内的超级素数（将数从个位开始去除，剩余的数一直是素数），谨记1不是素数
void supersushu() {
	for (int i = 2; i <= 1000; i++)
	{
		int re = 1;
		int num = i;
		while (num)
		{
			for (int j = 1; j <= i / 2; j++)
			{
				if (num % j == 0 && num != j && j != 1 || num == 1)
				{
					re = 0;
					break;
				}
			}
			if (!re)
			{
				break;
			}
			num /= 10;
		}
		if (re)
		{
			printf("%d\n", i);
		}
	}
}

//选择排序法
void selectorderby() {
	int g[7] = { 2,5,6,7,3,4,10 };
	int maxindex, i, j, temp;
	for (i = 0; i < 6; i++)//只需进行7-1次
	{
		maxindex = i;
		for (j = i + 1; j < 7; j++)
		{
			if (g[j] < g[maxindex])
			{
				maxindex = j;//获取最小数的索引
			}
		}
		if (i != maxindex)
		{
			temp = g[i];
			g[i] = g[maxindex];
			g[maxindex] = temp;
		}
	}
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
	printf("%2d\n", p->data);
}

union fg {
	double f;
	float fr[2];
};

struct stru
{
	fg g;
	static int p[3];
};
void cs(int y) {};

int main(int argc, char* argv[])
{
	stru pl;
	int yu = sizeof(pl);

	////实例，不同计算机位数下的指针字节数
	////32位计算机下，指针字节数为4，64位下是8
	//long long *r1 =&yu;
	//printf("%d",sizeof(r1));//字节为8
	//printf("%d\n",sizeof(*r1));//未指向指针的内存地址，字节数为其数据类型字节数

	////（n+1）移动二维数组的首元素地址
	//int n[4][2] = { 11,24,37,45,56,54,6 };
	//int(*t)[2] = n;
	//int f = *(n+1)[0];

	//右结合性
	/*int a = 10, b = 9;
	printf("%d,%d,%d,%d\n", a += 5, a--, --b, b++);*/

	char r[] = "Apple Ipad";
	strcpy(r, strlwr(r));

	////当前根目录
	//char ss[100];
	//std::cout << _getcwd(ss, 100);

	//十二
	//d(b)aabb d(b)dbbb(a) a(c)b(a)ddc bbcc(b)c
	// 十一（84）
	//b(a)cd(c)bc(d) bac(d)da(d) aa(d)aab d(b)c(d)d(c)d(c)a -10
	//m (x%3==0&&x%7==0) 1次 4(3)次 tolower()(strlwr()) 1 j>=1 if(bb[j]<n)(bb[j]=bb[j-1]) break sizeof(struct node) (宏)定义 m  1021103 -6
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

	////可变参数
	//sum(5, 'a', 'b', 'c', 'd', 'f');

	/*xiangjia();
	ifgrade();*/

	/*listnode* node;
	node = reseverlist(addnode(intialnode()));
	printlist(node);*/

	//char lk[5] = "abc";
	//char* kk;
	//kk = (char*)malloc(sizeof(char));
	//strcpy(kk, "abcdef");//赋值
	//int y = strcmp(kk, "abcdef");//比对 相等为0 大于1 小于-1
	//char* l = strcat(lk, kk + 1);//追加
	//strupr(kk);//字符串大写
	//printf("%s\n", lk);

	////二维数组的地址移动运算
	//int sd[2][2] = { 1,2,3,4 };
	//int *rt = (int *)(&sd+1);
	//int *rt2 = (int*)(&sd-1);
	//int rt3 = *(rt2+4);

	//2020
	//dbc(a)bc ddcba cdbca dabaa d(b)a(d)abc -3
	//baccd bdb(a)ba acbdb(c) ac(d)bdc  -6
	//8 years old injury many stores $15 and $100 shoulder bacbb -1 -4 4486
	//cbca(b)a bcddb(c) babaa caa(d)dc b(d)cd(b)a(b)d -6
	//cd(a)dcc abbcd ab(a)ad(a)a(b) add(c)a(b)d bbccb -6

	//Badca(b) ab(d)cda(c) (x>z&&y>z)||(x==z&&y==z)
	//返回参数类型 函数名 函数体
	//for while do-while if(a%s==0&&a%7==0){} 12 7
	//11 13 3
	//3 2 -1
	//dc(b)abc b(d)dcba cdbca dab(d)aa(c) c(b)dabc

	FILE* fp;
	char t[12] = "";
	//fp = fopen("E://1.txt", "w+");
	//fputs("abcd", fp);
	//fseek(fp, 3L, SEEK_CUR);//abcd efg
	//fputs(t, fp);
	//fclose(fp);

	/*fp=fopen("E://1.txt", "r");
	fseek(fp, -2L, SEEK_END);
	fgets(t,9,fp);
	printf("%s\n",t);
	fclose(fp);
	system("pause");*/
	/*void (*tr)() = supersushu;
	tr();*/

	//77
	//daccb baddb abb(c)b(a)a bccdc b(d)caac -3
	//dccc(b)a bcbad dcbac dd(a)a(b)d(c)c 64,500 2.6 million the United States global reliable energy
	//a(c)bacc -10
	//学生新闻报刊正在寻找一位编辑(记者)。申请人必须现在大学学习并且写新闻报道有至少一年的经验。成功通过的申请者将
	//被要求去报道在这座城市和在各个地点（校园）发生的新闻.如果你感兴趣，请在6月（底）之前发送你的简历给学生新闻报刊办公室。
	//想了解更多的信息，请访问我们的网站。-5
	//-5

	//cb(d)dcd b(d)dac(d)d bc(a)c(b)d(c)d(c) d(b)dbb(a)b dd(c)cba -10
	//a(b)cc(d)ac adbca b(a)caab bbab(c)d -8
	//spas here sweet shops garlic dishes opportunities -1
	//acbaa
	char tt = '012';
	char** qq, * p, q;
	q = 'a';
	p = &q; qq = &p;

	int tu = 2;
	printf("%d%d%d%d", tu *= 2, ++tu, tu++, --tu);

	//卷一：87
	//dadcc dbaac(a)b ddcbc -2
	//2.75（2.5） for do-while while *(p+6) 返回参数为int指针类型的名为f1自定义无参数函数 反回int类型函数的名为f2的指针 -4
	//n!=0 i++ j++ break(scanf("%d",&n))-2
	//i/10%10 pow(a,3)*pow(b,3)*pow(c,3)==i
	//scanf("%d",(&)a[i]) i<=9 a[j]>a[i] a[i]=[j]; a[j]=t;-5
	//***** 39 6 9 16
	// 卷二
	//cbcd(b)c cbaca cbbac bd(a)dbb -1
}


