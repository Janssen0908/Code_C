#define   _CRT_SECURE_NO_WARNINGS
#include "test.h"


//��������

//struct S
//{
//	int n;
//	int arr[];//��Сδ֪
//};
//int main()
//{
//	//c99�У��ṹ�����һ��Ԫ��������λ�ô�С�����飬��Ϊ��������
//	//struct S s = { 0 };
//	//printf("%d", sizeof(s));//����������
//
//	//�������arr�Ĵ�С��10��int
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	//                               n�Ŀռ�           ���ٵ�����ռ�
//
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//
//	//�����Ļ� ���ӿռ�
//
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->arr = (struct S*)malloc(10 * sizeof(int));
	if (p == NULL)
		return 1;
	int i = 0;
	p->n = 10;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}

	//����
	struct S* ptr = (struct S*)realloc(p->arr, 20 * sizeof(int));

	if (ptr != NULL)
	{
		p->arr = ptr;
	}

	free(p->arr);
	p->arr = NULL;

	free(p);
	p = NULL;
	return 0;
}//mallocԽ�࣬�ڴ���ƬҲԽ�࣬���Բ�����������
//���ھֲ���ԭ���������鴦���ٶ�Ҳ������ͨ��������һ���̶�����������ٶ�