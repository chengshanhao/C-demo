#include<iostream>
#include<stdio.h>

//��ȡ�ļ�
void filer() {
	FILE *fp = NULL;//��������һ��Ϊnull������file�Ķ���
	fopen_s(&fp, "E:/test.txt", "r");//��һ�����ڵ�/����һ���µ��ļ�
	char ord[222];//������ݴ洢
	fscanf(fp, "%s", ord);//fscanf�����ļ��ж�ȡ�ַ����������ֿո��뻻�з���ֹͣ��ȡ
	printf("1: %s\n", ord);//������ڶ�ȡ���ļ�������
	char buff[255];

	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);//��ȡ�ļ����ݣ��������з���\n�����ļ���ĩβEOF��ֹͣ��ȡ���ض�ȡ�����ַ���
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
}

//д���ļ�
void filew() {
	FILE *fp = NULL;
	fopen_s(&fp, "E:/test.txt", "w");
	fprintf(fp, "This is testing for fprintf...\n");//д���ַ�����fpָ�����ļ���
	fputs("This is testing for fputs...\n", fp);//���ַ���д�뵽 fp ��ָ����������
	fclose(fp);//�ر��ļ�����ջ����������ݣ��ͷ����ڸ��ļ��������ڴ�
}

void hong() {
	printf("File :%s\n", __FILE__);//__FILE__����ǰ���ڣ�һ���� "MMM DD YYYY" ��ʽ��ʾ���ַ�������
	printf("Date :%s\n", __DATE__);//__DATE__����ǰʱ�䣬һ���� "HH:MM:SS" ��ʽ��ʾ���ַ�������
	printf("Time :%s\n", __TIME__);//__TIME__��������ǰ���ļ���
	printf("Line :%d\n", __LINE__);//__LINE__��������ǰ�к�
	printf("ANSI :%d\n", __STDC_HOSTED__);//__STDC_HOSTED__������������ ANSI ��׼����ʱ������Ϊ 1��
}
void main() {
	filew();//д��
	filer();//��ȡ
	hong();
}
