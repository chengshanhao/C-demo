// Cexercise4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define Sorts(a,b){ printf("%d",a+b);}

struct list_node
{
	int data;
	struct list_node* next;
};

typedef struct list_node list_single;

//创建一个节点
list_single* create_node(int data) {
	list_single* node = NULL;
	node = (list_single*)malloc(sizeof(list_single));
	if (node == NULL)
	{
		printf("malloc fair!\n");
		return NULL;
	}

	memset(node, 0, sizeof(list_single)); //清节点数据(由于结构体变量在未初始化的时候，数据是脏的)

	node->data = data;//给节点初始化数据
	node->next = NULL;//将该节点的指针域设置为NULL
	return node;
}

//链表的头插 
void top_insert(list_node* pH, list_node* news)
{
	list_node* p = pH;
	news->next = p->next;
	p->next = news;
}

//链表的尾插 
void tail_insert(list_node* pH, list_node* news)
{
	//获取当前的位置 
	list_node* p = pH;
	//如果当前位置的下一个节点不为空 
	while (NULL != p->next)
	{
		//移动到下一个节点 
		p = p->next;
	}
	//如果跳出以上循环，所以已经到了NULL的这个位置
	//此时直接把新插入的节点赋值给NULL这个位置 
	p->next = news;
}

//链表的遍历 
void Print_node(list_node* pH)
{
	//获取当前的位置 
	list_node* p = pH;
	//获取第一个节点的位置 
	p = p->next;
	//如果当前位置的下一个节点不为空 
	while (NULL != p->next)
	{
		//(1)打印节点的数据 
		printf("data:%d\n", p->data);
		//(2)移动到下一个节点,如果条件仍为真，则重复(1)，再(2) 
		p = p->next;
	}
	//如果当前位置的下一个节点为空，则打印数据
	//说明只有一个节点 
	printf("data:%d\n", p->data);
}

int main()
{
	Sorts(1,5);
	int i;
	list_single* node_ptr = create_node(0);
	for (i = 1; i < 10; i++)
	{
		top_insert(node_ptr, create_node(i));
	}
	Print_node(node_ptr);
	free(node_ptr);

	int s = (1, 2, 3, 4, 5);
	s---s;
	int f = s % 2;
	

	int y = 0ll;
	printf("y=%d\n",y);

}
