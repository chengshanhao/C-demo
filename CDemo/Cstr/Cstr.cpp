// Cstr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	char s1[20] = "bafdacosdad";
	char *s2;
	s2 = strchr(s1, 's');//返回一个指针，从前往后找‘s',截取s之后的字符，包含s
	printf("strchr函数:%s\n", s2);

	s2 = strrchr(s1, 's');//返回一个指针，从后往前找‘s',截取s之后的字符，包含s
	printf("strrchr函数:%s\n", s2);

	s2 = strpbrk(s1, "soa");//返回一个指针，在字符串中查找是否存在's' 'o' 'a',若存在则从最开始出现的字符开始截取该字符之后的字符，否则返回null
	printf("strpbrk函数：%s\n", s2);

	s2 = strstr(s1, "ac");//返回一个指针，在字符串中查找是否存在'ac'，存在则截取该字符之后的字符，不存在返回null
	printf("strpbrk函数：%s\n", s2);

	printf("strspn函数：%d\n", strspn(s1, "bafdacvsdad"));//比较两个字符串，若出现不一致字符，返回该字符在字符串中的索引
	printf("strcspn函数：%d\n", strcspn(s1, "c"));//比较两个字符串，判断字符串中从左往右不是字符‘5’的字符总个数

	char n1[22] = "5656", n2[20] = "3210";
	strcpy(n1, n2);//将s2指针的内容复制给s1
	printf("strcpy函数：%s\n", n1);

	char n3[12] = "454645";
	strncpy(n1, n3, 4);//将n3字符串按指定的数量复制给n1,n2长度要大于n1长度
	printf("strncpy函数：%s\n", n1);

	strcat(n1, n3);//连接字符串n3到字符串 n1 的末尾。
	printf("strcat函数：%s\n", n1);

	strncat(n1, n3, 2);//按照指定数量连接字符串 n3 到字符串 n1 的末尾。
	printf("strncat函数：%s\n", n1);

	printf("strlen函数：%d\n", strlen(n2));//获取字符串的长度
	printf("strnlen函数：%d\n", strnlen(n2, 16));//获取字符串的长度,但加了获取长度n限制,长度n小于0或者大于字符串的长度则返回n2最大长度

	printf("%s/%s\n", n1, n2);
	//字符串比较函数, 两个字符串, 从第一个字符开始比, 如果相同, 继续向下比, 如果不同, 看这两个字符的ASCII码, 如果第一个字符串的比较大, 则返回1, 否则返回 - 1;
	printf("strcmp函数：%d\n", strcmp(n1, n2));//如果 n1 和 n2 是相同的，则返回0；如果 n1<n2 则返回-1；如果 n1>n2 则返回1。
	printf("strcmp函数：%d\n", strncmp(n1, n2, 3));//把 n1 和 n2 进行比较，最多比较前 n 个字节

	char c[] = "6";
	s2 = strtok(n1, c);//strtok分解字符串 n1 为一组字符串，c 为分隔符
	while (s2 != NULL)
	{
		printf("%s\n", s2);
		s2 = strtok(NULL, c);
	}
}
