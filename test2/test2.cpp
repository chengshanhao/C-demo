#include <iostream>
#define N 5
#define N2 10

struct listnode {
	int id;
	listnode* next;
}*p, * q, * r;
void list() {
	listnode* node = NULL;
	node = (listnode*)malloc(sizeof(listnode));
	memset(node, 0, 0);
	node->id = 0;
	node->next = NULL;
	int n = 6;
	for (int i = 1; i <= n; i++)
	{
		listnode* newnode = NULL;
		newnode = (listnode*)malloc(sizeof(listnode));
		memset(newnode, 0, 0);
		newnode->id = i;
		newnode->next = NULL;

		listnode* kk = node;
		while (NULL != kk->next)
		{
			kk = kk->next;
		}

		kk->next = newnode;
	}

	//reverse(node);
	listnode* p = node->next;
	listnode* q = p->next;
	listnode* r;
	p->next = NULL;
	while (q)
	{
		r = p;
		p = q;
		q = q->next;
		p->next = r;
	}
	node = p;

	while (node)
	{
		printf("%d\n", node->id);
		node = node->next;
	}

	free(node);
}

// 逆置链表 
listnode* reverse(listnode* L)
{
	listnode* prep;
	listnode* p;
	listnode* q;
	p = L->next;
	q = p->next;
	p->next = NULL;
	while (q) {
		prep = p;
		p = q;
		q = q->next;
		p->next = prep;
	}
	L->next = p;
	return L;
}

//共同体
union Data {
	int g;
	double f;
	Data* ne;
};

struct HeroInfo {
	char heroname[20];
	int level;
	double experience;
	char herowuqi[40];
	float attackvalue;
	int money;
}heros[N];

struct EquipInfo {
	char equipname[40];
	float attackvalue;
}equips[N2];

void InitialInfo();
void EquipmentInfo();
void ShowHeroList();
void ShowEquipList();
void ShowCurrentHero(int index);
int main() {
	//union Data* da;//需要赋予初始内存
	//da = (Data*)calloc(10, sizeof(Data));
	//da->g = 1;

	/*FILE* fp;
	fopen_s(&fp, "C:\\Users\\Administrator\\Desktop\\test.txt", "r");
	if (fp == NULL)
	{
		printf("行号：%d\n打开文件错误：%s", errno, strerror(errno));
		return 0;
	}*/

	/*fprintf(fp, "%s", "这是一个奇迹");
	fseek(fp, 20, SEEK_SET);
	fseek(fp, -20, SEEK_SET);
	fputs("一个跳转", fp);*/

	////读取数据
	//char buff[1500];
	//fgets(buff, 1500, (FILE*)fp);
	//printf("%s", buff);
	//fscanf(fp, "%ss", buff);
	//puts(buff);
	//fclose(fp);


	InitialInfo();
	EquipmentInfo();
	bool re = false;
	bool re2 = false;
	ShowHeroList();
	int index;
	int index2;
	printf("请输入编号选择你的专属英雄：");
	do
	{
		int r = scanf("%d", &index);
		if (r > 0 && index > 0 && index <= N)
		{
			index--;
			printf("您的专属英雄是：%s\n", heros[index].heroname);
			re = true;
			printf("\n\n");
			ShowEquipList();
			printf("请输入编号为你的英雄选择装备：");
			do
			{
				int r2 = scanf("%d", &index2);
				if (r2 > 0 && index2 > 0 && index2 <= N2)
				{
					index2--;
					strcpy(heros[index].herowuqi, equips[index2].equipname);
					heros[index].attackvalue += equips[index2].attackvalue;
					printf("您的专属英雄%s将带上%s，与您并肩作战！\n", heros[index].heroname, equips[index2].equipname);
					ShowCurrentHero(index);
					re2 = true;
				}
				else
				{
					printf("输入错误！");
					printf("\n\n");
					ShowEquipList();
					printf("请重新输入编号为你的英雄选择装备：");
					re = false;
				}
			} while (!re2);
		}
		else
		{
			printf("输入错误！");
			printf("\n\n");
			ShowHeroList();
			printf("请重新输入编号选择你的专属英雄：");
			re = false;
		}
	} while (!re);
}

//英雄信息
void InitialInfo() {
	strcpy(heros[0].heroname, "雅典拉拉");
	heros[0].money = 600;
	heros[0].experience = 0;
	heros[0].level = 1;
	heros[0].attackvalue = heros[0].level * 1.5;

	strcpy(heros[1].heroname, "妲己");
	heros[1].money = 900;
	heros[1].experience = 0;
	heros[1].level = 1;
	heros[1].attackvalue = heros[1].level * 1.8;

	strcpy(heros[2].heroname, "貂蝉");
	heros[2].money = 999;
	heros[2].experience = 0;
	heros[2].level = 1;
	heros[2].attackvalue = heros[2].level * 2.1;

	strcpy(heros[3].heroname, "母孙离");
	heros[3].money = 700;
	heros[3].experience = 0;
	heros[3].level = 1;
	heros[3].attackvalue = heros[3].level * 1.7;

	strcpy(heros[4].heroname, "东施");
	heros[4].money = 1100;
	heros[4].experience = 0;
	heros[4].level = 1;
	heros[4].attackvalue = heros[4].level * 1.55;
}

//装备信息
void EquipmentInfo() {
	strcpy(equips[0].equipname, "串疯刺矛枪");
	equips[0].attackvalue = 110;

	strcpy(equips[1].equipname, "邪恶小陀螺");
	equips[1].attackvalue = 120;

	strcpy(equips[2].equipname, "金刚砖");
	equips[2].attackvalue = 140;

	strcpy(equips[3].equipname, "毛驴鞭");
	equips[3].attackvalue = 150;

	strcpy(equips[4].equipname, "5毛特效玩具枪");
	equips[4].attackvalue = 250;

	strcpy(equips[5].equipname, "搅屎棍");
	equips[5].attackvalue = 200;

	strcpy(equips[6].equipname, "破刀残碧");
	equips[6].attackvalue = 221;

	strcpy(equips[7].equipname, "真剑");
	equips[7].attackvalue = 210;

	strcpy(equips[8].equipname, "七成破塔");
	equips[8].attackvalue = 220;

	strcpy(equips[9].equipname, "胶水链条");
	equips[9].attackvalue = 313;
}

//展示英雄信息
void ShowHeroList() {
	printf("-------------英雄列表-------------\n");
	printf("编号\t\t\t名称\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d\t\t%12s\n", i + 1, heros[i].heroname);
	}
	printf("----------------------------------\n");
}

//展示装备信息
void ShowEquipList() {
	printf("-------------武器列表-------------\n");
	printf("编号\t\t\t名称\n");
	for (int i = 0; i < N2; i++)
	{
		printf("%d\t\t%12s\n", i + 1, equips[i].equipname);
	}
	printf("----------------------------------\n");
}

//展示当前英雄状态
void ShowCurrentHero(int index) {
	printf("英雄当前状态：\n");
	printf("名称：%s\n", heros[index].heroname);
	printf("等级：%d\n", heros[index].level);
	printf("武器：%s\n", heros[index].herowuqi);
	printf("力量：%.1f\n", heros[index].attackvalue);
	printf("拥有的金币：%d\n", heros[index].money);
}
