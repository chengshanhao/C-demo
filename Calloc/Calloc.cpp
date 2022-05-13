
#include <iostream>

int main()
{
	//当动态分配内存时，您有完全控制权，可以传递任何大小的值
	//calloc()/malloc():动态分配内存 使用malloc 那就不能使用strcat追加字符显示
	//realloc():来增加或减少已分配的内存块的大小
	//free():来释放内存

	char *dd;
	dd = (char *)calloc(10,40 * sizeof(char));
	strcat(dd, "There are a long time for learn Enlish");
	printf("%s\n", dd);
	dd = (char *)realloc(dd, 40 * sizeof(char));
	strcpy(dd,"235689874512000");
	printf("%s\n", dd);
	free(dd);
}

