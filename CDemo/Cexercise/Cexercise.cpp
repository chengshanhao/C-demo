
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <list>

enum IG
{
	kk, ll
}ig;
//30 个人在一条船上，超载，需要 15 人下船。
//于是人们排成一队，排队的位置即为他们的编号。
//报数，从 1 开始，数到 9 的人下船。
//如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？
void anli1() {
	printf("---------案例一----------\n");
	int bianhao[30];
	int a, b = 0, num = 0;
	int len = (int)sizeof(bianhao) / sizeof(*bianhao);
	//初始化数组1-30
	for (int i = 0; i < len; i++)
	{
		bianhao[i] = i + 1;
	}
	for (a = 0; a < len; a++)
	{
		if (num == 15)
		{
			break;
		}
		if (bianhao[a] != 0)
		{
			b++;
		}
		if (b % 9 == 0 && b > 0)
		{
			printf("%d号被逼迫下了船\n", bianhao[a]);
			bianhao[a] = 0;
			b = 0;
			num++;
		}
		if (a == len - 1)
		{
			a = -1;
		}
	}
}

//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
void anli2() {
	printf("---------案例二----------\n");
	int num = 0;
	for (int i = 1; i <= 4; i++)
	{
		for (int a = 1; a <= 4; a++)
		{
			for (int b = 1; b <= 4; b++)
			{
				if (i != a && i != b && a != b)
				{
					printf("%d%d%d\n", i, a, b);
					num++;
				}
			}
		}
	}
	printf("共能组成%d个数字\n", num);
}

//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
void anli3() {
	printf("---------案例三----------\n");
	int num = 4;
	int num2 = 0;
	bool re = true;
	while (re)
	{
		for (int i = 1; i < (num + 100) / 2; i++)
		{
			if (num2*num2 == num + 100)
			{
				for (int i = 1; i < (num + 100 + 168) / 2; i++)
				{
					if (num2*num2 == num + 100 + 168)
					{
						printf("%d\n", num);
						re = false;
						break;
					}
					else
					{
						num2 = (num + 100 + 168) / i;
					}
				}

			}
			else
			{
				num2 = (num + 100) / i;
			}
		}
		num++;
	}
}

//输入某年某月某日，判断这一天是这一年的第几天？
void anli4() {
	printf("---------案例四----------\n");
	int year, month, day;
	int sum = 0, months = 0;
	bool re = true;
	do {
		printf("请输入日期：注意时间格式（2021-10-1）\n");
		printf("输入：");
		scanf("%d-%d-%d", &year, &month, &day);
		if (month > 12 || month < 1)
		{
			printf("月份错误!(大小在1-12之间)\n");
			re = false;
		}
		if (day > 31 || day < 1)
		{
			printf("日错误！(大小在1-31之间)\n");
			re = false;
		}
		else
		{
			re = true
				;
		}
	} while (re == false);
	printf("您输入的日期是：%d年%d月%d日\n", year, month, day);
	for (int i = 1; i < month; i++)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			months += 30;
		}
		else if (i == 2)
		{
			if (year % 4 == 0 || year % 400 == 0)
			{
				months += 29;
			}
			else
			{
				months += 28;
			}
		}
		else
		{
			months += 31;
		}
	}
	sum = months + day;
	printf("经查询，结果显示是：\n");
	printf("%d年%d月%d日是该年的第%d天\n", year, month, day, sum);
}

//输入三个整数x,y,z，请把这三个数由小到大输出
void anli5() {
	int x, y, z, d;
	printf("请输入三个整数：");
	scanf("%d,%d,%d", &x, &y, &z);
	int num[] = { x,y,z };
	for (int i = 0; i < 2; i++)
	{
		for (int a = i; a < 2; a++)
		{
			if (num[a] > num[a + 1])
			{
				d = num[a];
				num[a] = num[a + 1];
				num[a + 1] = d;
			}
		}
	}

	printf("三个数由小到大：%d>%d>%d", num[0], num[1], num[2]);

	/*if (x > y)
	{
		d = x;
		x = y;
		y = d;
	}
	if (y > z)
	{
		d = y;
		y = z;
		z = d;
	}
	if (x > z)
	{
		d = x;
		x = z;
		z = d;
	}*/


}

//输出9 * 9口诀
void anli6() {
	for (int x = 1; x <= 9; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d*%d=%d \t", y, x, x*y);
		}
		printf("\n");
	}
}

//判断 101 到 200 之间的素数
void anli7() {
	bool re = false;
	for (int i = 101; i <= 12899; i++)
	{
		for (int x = 2; x < 101; x++)
		{
			if (i%x == 0)
			{
				re = false;
				break;
			}
			else
			{
				re = true;
			}
		}
		if (re) {
			printf("%d是一个素数\n", i);
		}
	}
}

//打印出所有的"水仙花数"
void anli8() {
	for (int i = 100; i <= 999; i++)
	{
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("%d\n", i);
		}
	}
}

//将一个正整数分解质因数
void anli9() {
	int p;
	printf("请输入一个正整数：");
	scanf("%d", &p);
	printf("%d=", p);
	for (int i = 2; i <= p; i++)
	{
		while (p%i == 0)
		{
			printf("%d", i);
			p /= i;
			if (p != 1)
			{
				printf("*");
			}
		}
	}
}

//有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），
//计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中
typedef struct
{
	int studentID;
	char studentname[2];
	int chinese;
	int math;
	int enlish;
	int avg;
}project;
void anli10() {
	project pro[5];
	printf("请输入5名学生的学号，姓名，三门课成绩\n");
	for (int i = 0; i < 5; i++)
	{
		printf("第%d同学\n", i + 1);
		printf("学号：");
		scanf("%d", &pro[i].studentID);
		printf("姓名：");
		scanf("%s", &pro[i].studentname);
		printf("语文：");
		scanf("%d", &pro[i].chinese);
		printf("英语：");
		scanf("%d", &pro[i].enlish);
		printf("数学：");
		scanf("%d", &pro[i].math);
		pro[i].avg = (pro[i].math + pro[i].enlish + pro[i].chinese) / 3;

	}
	FILE *fe;
	if ((fe = fopen("E:/stud.txt", "w")) == NULL)
	{
		printf("error :cannot open file!\n");
		exit(0);
	}
	fprintf(fe, "学号\t姓名\t语文\t英语\t数学\t平均分\n");
	for (int i = 0; i < 5; i++)
	{
		fprintf(fe, "%d\t%s\t%d\t%d\t%d\t%d\n", pro[i].studentID, pro[i].studentname, pro[i].chinese, pro[i].enlish, pro[i].math, pro[i].avg);
	}
	fclose(fe);
	printf("录入完毕！请检查stud文件内容");
}

//随机数结合指针指向数组
int *sjs() {
	static int shuzhu[6];
	time_t times;
	srand((unsigned)time(&times));
	for (int i = 0; i < (int)sizeof(shuzhu) / sizeof(*shuzhu); i++)
	{
		shuzhu[i] = rand();
	}
	return shuzhu;
}

typedef struct
{
	char english[20];
	char chinese[20];
}dc;
void words() {
	dc dcs[10];
	for (int i = 0; i < 10; i++)
	{
		printf("请输入单词与其意思(格式-do+空格+意思)\n");
		printf("%d.", i + 1);
		scanf("%s %s", &dcs[i].english, &dcs[i].chinese);
	}
	FILE *fp;
	if ((fp = fopen("E:/words.txt", "w")) == NULL)
	{
		printf("error :cannot open file!\n");
		exit(0);
	}
	for (int i = 0; i < 10; i++)
	{
		fprintf(fp, "%s  %s\n", dcs[i].english, dcs[i].chinese);
	}
	fclose(fp);
	printf("默写完毕！");
}
#define add(x) x+x
int main()
{
	/*int f = abs(-5);
	char kk[] = "\\sss";
	char *s = NULL;
	printf("%s\n", s);
	printf("%d\n", f);
	anli1();
	anli2();
	anli3();
	anli4();
	int i = 1, j = 1, k = 2;
	if ((j++ || i++) && k++)
	{
		printf("%d,%d,%d\n", i, j, k);
	}
	anli5();
	anli6();
	anli7();
	anli8();
	anli9();
	anli10();*/

	/*int b = 3;
	char c = 'A' + '6' - '3';
	double d;
	bool re = (b % 2 == 1);
	printf("%d\n", re);
	if (b++ > 3)
	{
		printf("%d\n", b);
	}
	else
	{
		printf("%d\n", --b);
	}*/

	//int i, *pi = &i;
	//&i;

	//char s1[] = "abcdef";
	//char s2[] = { 'a','b','c','d','e','f' };

	//int x = 10, y = 20, z = 30;
	//if (x > y)
	//{
	//	z = x;
	//	x = y;
	//	y = z;
	//}
	//printf("%d,%d,%d\n", x, y, z);
	//int sum = add(x + y)*z;//x+y+x+y*z 10+20+10+20*30
	//printf("%d\n", sum);

	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,13 };
	int(*ptr)[4];
	int sums = 0;
	ptr = a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sums += *(*(ptr + i) + j); rand();
			printf("%d\n", *(*(ptr + i)));
		}
	}
	printf("%d", sums);

	/*char ch[2][5] = { "6937","8254" }, *p[2];
	int s = 0;
	for (int i = 0; i < 2; i++)
	{
		p[i] = ch[i];
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; p[i][j] > '\0'; j += 2)
		{
			s = 10 * s + p[i][j] - '0';
		}
	}

	printf("%d", s);*/

	int *p;
	p = sjs();//随机数
	for (int i = 0; i < 6; i++)
	{
		printf("*(p + %d)：%d\n", i, *(p + i));
	}

	std::string kk = "abxdefg";

	char ss[] = "abcdefghjyryhghfdaewvtvgscxzcschj5yb kbujydfvgte";
	int len = (int)sizeof(ss) / sizeof(*ss);
	char ss2[300] = "";
	for (int i = 0; i < len; i++)
	{
		ss2[i] = ss[len - 1 - i];
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", ss2[i]);
	}

	char lk = 65;
	if (lk < 96)
	{
		
	}
}





