#include <iostream>
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#define fool(s,b)\
for(int i = (s); i <= b; i++)\
if (i>5)\
printf("you are a fool\n");

#define Consloe(s)\
if(typeid(s)==typeid(int))printf("%d\n",s);\
else if(typeid(s)==typeid(double)||typeid(s)==typeid(float))printf("%0.1f\n",s);\
else printf("%s\n",s);


typedef struct ff {
	int da;
	int(*ii)(int m, ff *f);
};

int ii(int i, ff *f) {
	f->da = 12;
	return f->da;
}

int christmas() {
	printf("  __________________________________________________ \n");
	printf(" |                    _                             |\n");
	printf(" | /|,/ _   _ _      / ` /_  _ .  _ _/_ _ _   _    _|\n");
	printf(" |/  / /_' / / /_/  /_, / / / / _\  /  / / / /_| _\ |\n");
	printf(" |             _/                                   |\n");
	printf(" |               ~~** dokimaster **~~               |\n");
	printf(" |__________________________________________________|\n");
	printf("                                                     \n");
	printf("                                                     \n");
	printf("            *             ,                          \n");
	printf("                        _/^\_                        \n");
	printf("                       <     >\n");
	printf("               *        `/&\`                   *    \n");
	printf("                       ,@.*;@,                       \n");
	printf("                      /_o.I %_\    *                 \n");
	printf("         *           (`'--:o(_@;                     \n");
	printf("                    /`;--.,__ `')             *      \n");
	printf("                   ;@`o % O,*`'`&\                   \n");
	printf("             *    (`'--)_@ ;o %'()\      *           \n");
	printf("                  /`;--._`''--._O'@;                 \n");
	printf("                 /&*,()~o`;-.,_ `""`)                \n");
	printf("      *          /`,@ ;+& () o*`;-';\                \n");
	printf("                (`""--.,_0 +% @' &()\                \n");
	printf("                /-.,_    ``''--....-'`)  *           \n");
	printf("           *    /@%;o`:;'--,.__   __.'\              \n");
	printf("               ;*,&(); @ % &^;~`‘`o;@();        *    \n");
	printf("               /(); o^~; & ().o@*&`;&%O\             \n");
	printf("               `  = .==~~==,,,.,=~= ~===`            \n");
	printf("       _____.----.0--''---------...___...-----._     \n");
	printf("      '`          (\    *  \*/  ___\\0//___          \n");
	printf("         =,        \)_       %  |\\ | | \\|  ~       \n");
	printf("                .--' ')   @     | \\| |\ \|          \n");
	printf("       _0     o(  )_-\  .  .,   |\\_|_|_\\|    `     \n");
	printf("               `~~~` `         `- == -- == = -`      \n");
	printf("\n");
	printf(".:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:.:*~*: \n");
	return 0;
}

int main()
{
	//文件的读取与输入
	//文件的读取与输入
	//文件的读取与输入
	//FILE *fp;
	//char buff[222]="请不要试试";
	//fp = fopen("E:/扩展方法/1.txt", "r");
	////读取
	//fscanf(fp,"%s",buff);
	//fgets(buff, 200, fp);
	////写入
	//fprintf(fp, "挑挑剔剔吞吞吐吐团体");
	//fputs("开开眼一抬头谷歌\n",fp);
	//printf("%s\n",buff);
	//fclose(fp)

	////知识点一
	////知识点一
	////知识点一
	//typedef char string[];//自定义类型名
	//string dd = "4545454545454545454545";

	//知识点二
	//知识点二
	//知识点二	
	//char ss[] = "A89654 5a";
	//char *f = ss;//char类型指针指向ss
	//bool re = isalpha(*ss);//isalpha判断字母
	//bool re2 = isspace(*ss);//isspace判断为空
	//bool re3 = isalnum(*ss);//isalnum判断字母或数字
	//bool re4 = islower(*f);//islower判断字母小写
	//if (re)
	//{
	//	putchar(tolower(*ss));//tolower转换小写字母
	//	printf("\n");
	//}
	//if (re2)
	//{
	//	putchar(toupper(*ss));//toupper转换大写字母
	//	printf("\n");
	//}
	//if (re3)
	//{
	//	char t[100];
	//	strcpy(t, f);//将指针f的指向数据赋值给t
	//	strcat(t, dd);//将dd追加给t
	//	printf("%s\n", t);
	//}

	//知识点三
	//知识点三
	//知识点三
	//char *str[1];
	//*str = strpbrk(ss, "4");//将ss从'4'开始截取
	//int c = getchar();//getchar输入一个字符，并非字符串
	//putchar(*ss);//putchar输出一个字符
	//puts(*str);//puts输出字符串
	//fool(1, 7);//自定义宏，并使用

	//知识点四
	//知识点四
	//知识点四
	//puts("请输入一个整数:");
	//int num = 0;
	//scanf("%d", &num);
	//assert(num < 10);//可用于判断，false则会报错哦
	//puts("ture");

	//知识点五
	//知识点五
	//知识点五
	//rename("E:/扩展方法/112.txt", "E:/扩展方法/12.txt");//更改文件名
	//perror("Error:");//显示错误

	//char kk[] = { '7','8','4','4' };
	//char cc[] = "4545";
	//int len = strlen(cc);//判断字符串长度
	//int len2 = (int)sizeof(cc) / sizeof(*cc);//获取数组长度但判断字符串长度需减一
	//printf("%d\n", len2);

	////例题一
	////例题一
	////例题一
	//int a = 1, b = 2, c = 6, d = 9;
	//int nn[4] = {a,b,c,d};
	//int sum = 0;
	////相邻的数
	//for (int i = 1; i <= 4; i++)
	//{
	//	for (int o = 1; o <= 4; o++)
	//	{
	//		for (int p = 1; p <= 4; p++)
	//		{
	//			if (i != o && o != p && i != p)
	//			{
	//				printf("%d%d%d\n", i, o, p);
	//				sum++;
	//			}
	//		}
	//	}
	//}
	////不相邻
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int o = 0; o < 4; o++)
	//	{
	//		for (int p = 0; p < 4; p++)
	//		{
	//			if (i != o && o != p && i != p)
	//			{
	//				printf("%d%d%d\n", nn[i], nn[o], nn[p]);
	//				sum++;
	//			}
	//		}
	//	}
	//}
	//printf("总数：%d",sum);

	////例题二
	////例题二
	////例题二
	//double total = 0.00;
	//int lr;
	//puts("请输入当月利润：");
	//scanf("%d", &lr);
	//if (lr <= 10 * 10000)
	//{
	//	total = lr * 0.1;
	//}
	//else if (lr > 100000 && lr <= 200000)
	//{
	//	total = (100000 * 0.1 + (lr - 100000) * 0.075);
	//}
	//else if (lr > 200000 && lr <= 400000)
	//{
	//	total = 100000 * 0.1 + ((20 - 10) * 10000) * 0.075 + (lr - 200000) * 0.05;
	//}
	//else if (lr > 400000 && lr <= 600000)
	//{
	//	total = 100000 * 0.1 + ((20 - 10) * 10000) * 0.075 + ((40 - 20) * 10000) * 0.05 + (lr - 400000) * 0.03;
	//}
	//else if (lr > 600000 && lr <= 1000000)
	//{
	//	total = 100000 * 0.1 + ((20 - 10) * 10000) * 0.075 + ((40 - 20) * 10000) * 0.05 + ((60 - 40) * 10000) * 0.03 + (lr - 600000) * 0.015;
	//}
	//else
	//{
	//	total = 100000 * 0.1 + ((20 - 10) * 10000) * 0.075 + ((40 - 20) * 10000) * 0.05 + ((60 - 40) * 10000) * 0.03 + ((100 - 60) * 10000) * 0.015 + (lr - 1000000) * 0.01;
	//}
	//printf("将收获奖金：%0.1f元\n", total);

	////例题三
	////例题三
	////例题三
	//int b = 0, num = 0;
	//bool re = false;
	//do
	//{
	//	num = b + 100;
	//	for (int i = 0; i < (num / 2); i++)
	//	{
	//		if (num == i * i)
	//		{
	//			num += 168;
	//			for (int x = 0; x < (num / 2); x++)
	//			{
	//				if (num == x * x)
	//				{
	//					printf("%d", b);
	//					re = true;
	//					break;
	//				}
	//			}
	//		}
	//		if (re)
	//		{
	//			break;
	//		}
	//	}
	//	b++;
	//} while (!re);

	//int s = 102, q[3] = { 10,20,30 }, e[2][5] = { {1,2,3,4,5},{1,6} };
	//int *v;
	////v = &s;//指针指向int
	////v = q;//指针指向一维数组
	////int (*v)[5];
	////v = e;//指针指向二维数组

	/*typedef char StringBulider[100][10000];
	StringBulider sb = { "中国","1213" };
	Consloe(sb[0]);

	ff f;
	f.ii = ii;
	int a = f.ii(10,&f);
	Consloe("中华民族");
	Consloe("中华民族伟大复习");
	float l = 45.6;
	Consloe(l);*/

	//圣诞树
	//圣诞树
	//圣诞树
	//christmas();

	char num = 'a', num2 = 'A', lower;
	lower = toupper(num);
	int a = 1, b = 4, c = 5;
	int *p1 = &a, *p2 = &b, *p = &c;
	*p = *p1*(*p2);
	printf("%d\n", *p);

	int ss[3][4] = { {1,2,3,4},{5,111,7,8},{9,10,11,12} };
	int f[8] = { 1,2,3,4,5,6,7,8 };

	//==优先于!= !=优先于=
	(a = 3) != b;
	//a = 1 == b;
	(a != 1) == b;
	a = a == 1;
	a != b;
	*p++;
	(*p)++;

	a = *(p2)+1;

	a = ss[2][2] + 3;

	a = *(f + 1);

	a = a << b;//左除右乘2的b次方

	a = sizeof(a++);
	float nn = 10;
	int d = nn;
	scanf("%.f",nn);
}
