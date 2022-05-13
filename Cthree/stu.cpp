#include<iostream>
#include<stdio.h>

//读取文件
void filer() {
	FILE *fp = NULL;//声明定义一个为null的类型file的对象
	fopen_s(&fp, "E:/test.txt", "r");//打开一个存在的/创建一个新的文件
	char ord[222];//输出内容存储
	fscanf(fp, "%s", ord);//fscanf：从文件中读取字符串，当出现空格与换行符，停止读取
	printf("1: %s\n", ord);//输出现在读取到文件的内容
	char buff[255];

	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);//读取文件内容，遇到换行符‘\n’或文件的末尾EOF，停止读取返回读取到的字符串
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
}

//写入文件
void filew() {
	FILE *fp = NULL;
	fopen_s(&fp, "E:/test.txt", "w");
	fprintf(fp, "This is testing for fprintf...\n");//写入字符串到fp指定的文件中
	fputs("This is testing for fputs...\n", fp);//把字符串写入到 fp 所指向的输出流中
	fclose(fp);//关闭文件，清空缓冲区的数据，释放用于该文件的所有内存
}

void hong() {
	printf("File :%s\n", __FILE__);//__FILE__：当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
	printf("Date :%s\n", __DATE__);//__DATE__：当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
	printf("Time :%s\n", __TIME__);//__TIME__：包含当前的文件名
	printf("Line :%d\n", __LINE__);//__LINE__：包含当前行号
	printf("ANSI :%d\n", __STDC_HOSTED__);//__STDC_HOSTED__：当编译器以 ANSI 标准编译时，则定义为 1。
}
void main() {
	filew();//写入
	filer();//读取
	hong();
}
