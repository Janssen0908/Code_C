#define   _CRT_SECURE_NO_WARNINGS

#include "contact.h"



//静态版本
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));//内存设置
//	//                       1000的数组名，计算的是整个数组的大小
//
//}




//动态版本

void Check_capacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ret = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ret != NULL)
		{
			pc->data = ret;
			pc->capacity = pc->capacity + INC_SZ;//容量也增加
			printf("增容成功\n");
		}
		else
		{
			perror("AddContact");
			perror("增容失败\n");
			return;
		}

	}
}

void LoadContact(Contact* pc)
{
	FILE* pf = fopen("Contact.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}

	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//复制信息到Contact中首先应当考虑增容的问题
		Check_capacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	fclose(pf);
	pf = NULL;
}

void InitContact(Contact* pc)
{
	pc->data =(PeoInfo*) malloc(DEFAULT_SZ * (sizeof(PeoInfo)));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	//加载文件

	LoadContact(pc);
}




//静态版本Add
//void AddContact(Contact* pc)
//{
//	//先判满
//	if (pc->sz == MAX_Peo)
//	{
//		printf("通讯录已满！\n");
//		return;
//	}
//
//		//录入信息
//
//	printf("请输入名字：_>");//放在通讯录下标为sz的位置上
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入年龄：_>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("请输入性别：_>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入电话：_>");
//	scanf("%s", pc->data[pc->sz].tele_number);
//	printf("请输入地址：_>");
//	scanf("%s", pc->data[pc->sz].addr);
//	pc->sz++;
//	printf("增加成功\n");
//
//}




//动态版本Add
void AddContact(Contact* pc)
{
	//满了增容
	Check_capacity(pc);

	//录入信息

	printf("请输入名字：_>");//放在通讯录下标为sz的位置上
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：_>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别：_>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话：_>");
	scanf("%s", pc->data[pc->sz].tele_number);
	printf("请输入地址：_>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功\n");

}


void PrintContact(const Contact* pc)
{
	int i = 0;
	//标题
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
//   打印数据对齐
// 	   数字表示打印元素所占字节，前面添加负号表示向左对齐，\t表示剩余部分用空格补齐


	for (i = 0; i < (pc->sz); i++)
	{
		printf("%-20s\t %-5d\t %-5s\t %-12s\t %-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex, 
			pc->data[i].tele_number, 
			pc->data[i].addr);
	}
}
static int Find_by_name(Contact* pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;//找到返回下标
		}
	}
	return -1;//找不到返回-1

}

void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录已清空！\n");
	}

	//删除第一步应当是查找联系人
	//如果有，进行删除
	//如果没有，返回提示
	char name[MAX_NAME];
	printf("请输入想要删除的联系人姓名：_>");
	scanf("%s", name);
	int pos = Find_by_name(pc,name);

	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}

	//开始删除

	int i = 0;
	for (i = 0; i < pc->sz-1; i++)
	{
		i = pos;
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}




void SearchContact(Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找联系人的名字:_>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("找到了!联系人 %s 在第 %d 个\n", name, pos);
		printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t %-5d\t %-5s\t %-12s\t %-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele_number,
			pc->data[pos].addr);
	}
}


 


void ModifyContact(Contact* pc)
{
	//修改第一步也是先查找联系人，在修改
	char name[MAX_NAME];
	printf("请输入要查找的联系人姓名:_>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1)
	{
		printf("查无此人\n");
	}

	//修改
	else
	{
		printf("请输入修改后的名字：_>");
		scanf("%s", pc->data[pos].name);
		printf("请输入修改后的年龄：_>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入修改后的性别：_>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入修改后的电话：_>");
		scanf("%s", pc->data[pos].tele_number);
		printf("请输入修改后的地址：_>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}
}




int cmp_int_name(const void* p1, const void* p2)
{
	return (((PeoInfo*)p1)->name - ((PeoInfo*)p2)->name );
}

void SortContact(Contact* pc)
{
	printf("按照联系人名字首字母排序：\n");
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_int_name);
	int i = 0;
	//标题
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//   打印数据对齐
	// 	   数字表示打印元素所占字节，前面添加负号表示向左对齐，\t表示剩余部分用空格补齐


	for (i = 0; i < (pc->sz); i++)
	{
		printf("%-20s\t %-5d\t %-5s\t %-12s\t %-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele_number,
			pc->data[i].addr);
	}
}



void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}


void SaveContact(Contact* pc)
{
	FILE* pf = fopen("Contact.dat", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}

	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}
