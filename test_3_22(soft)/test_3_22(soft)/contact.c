#define   _CRT_SECURE_NO_WARNINGS

#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//�ڴ�����
	//                       1000�������������������������Ĵ�С

}


void AddContact(Contact* pc)
{
	//������
	if (pc->sz == MAX_Peo)
	{
		printf("ͨѶ¼������\n");
		return;
	}

		//¼����Ϣ

	printf("���������֣�_>");//����ͨѶ¼�±�Ϊsz��λ����
	scanf("%s", pc->data[pc->sz].name);
	printf("���������䣺_>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�_>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰��_>");
	scanf("%s", pc->data[pc->sz].tele_number);
	printf("�������ַ��_>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");

}



void PrintContact(const Contact* pc)
{
	int i = 0;
	//����
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//   ��ӡ���ݶ���
// 	   ���ֱ�ʾ��ӡԪ����ռ�ֽڣ�ǰ����Ӹ��ű�ʾ������룬\t��ʾʣ�ಿ���ÿո���


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
			return i;//�ҵ������±�
		}
	}
	return -1;//�Ҳ�������-1

}

void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼����գ�\n");
	}

	//ɾ����һ��Ӧ���ǲ�����ϵ��
	//����У�����ɾ��
	//���û�У�������ʾ
	char name[MAX_NAME];
	printf("��������Ҫɾ������ϵ��������_>");
	scanf("%s", name);
	int pos = Find_by_name(pc,name);

	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}

	//��ʼɾ��

	int i = 0;
	for (i = 0; i < pc->sz-1; i++)
	{
		i = pos;
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}




void SearchContact(Contact* pc)
{
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:_>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("�ҵ���!��ϵ�� %s �ڵ� %d ��\n", name, pos);
		printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	//�޸ĵ�һ��Ҳ���Ȳ�����ϵ�ˣ����޸�
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ������:_>");
	scanf("%s", name);
	int pos = Find_by_name(pc, name);

	if (pos == -1)
	{
		printf("���޴���\n");
	}

	//�޸�
	else
	{
		printf("�������޸ĺ�����֣�_>");
		scanf("%s", pc->data[pos].name);
		printf("�������޸ĺ�����䣺_>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������޸ĺ���Ա�_>");
		scanf("%s", pc->data[pos].sex);
		printf("�������޸ĺ�ĵ绰��_>");
		scanf("%s", pc->data[pos].tele_number);
		printf("�������޸ĺ�ĵ�ַ��_>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}




int cmp_int_name(const void* p1, const void* p2)
{
	return (((PeoInfo*)p1)->name - ((PeoInfo*)p2)->name );
}

void SortContact(Contact* pc)
{
	printf("������ϵ����������ĸ����\n");
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_int_name);
	int i = 0;
	//����
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//   ��ӡ���ݶ���
	// 	   ���ֱ�ʾ��ӡԪ����ռ�ֽڣ�ǰ����Ӹ��ű�ʾ������룬\t��ʾʣ�ಿ���ÿո���


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

