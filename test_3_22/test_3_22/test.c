#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"

//int main()
//{
//	//��������̬�ڴ濪��
//	// 
//	//malloc free realloc calloc
//	// 
//	//void* malloc(size_t size);
//
//	//���ٳɹ��ͻ᷵������ռ����ʼ��ַ�����򷵻�NULL
//
//	//int arr[10];//ջ��
//
//	int* p = (int*)malloc(10000000000*sizeof(int));//����
//
//	//Ĭ����void* ������Ҫǿ������ת��
//
//	if (p == NULL)
//	{
//		perror("p");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	free(p);//free�����Ὣp��Ϊ��ָ��
//	p = NULL;//����Ұָ��
//	return 0;
//}


int main()
{
	//void* calloc (size_t num, size_t size)
	//����num����СΪsize�Ŀռ䣬���ҳ�ʼ��Ϊ0
	//int* pm = (int*)malloc(40);
	//if (pm == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", pm[i]);//���ֵ
	//}
	//int* pc = (int*)calloc(10, 4);

	int* pc = (int*)calloc(10, 4);
	if (pc == NULL)
	{
		perror("pc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//printf("%d\n", *(pc + i));
		pc[i] = 5;
	}

	//�ټ�10��int
	//ʹ��realloc�����ռ�
	//����ָ��ָ�����¿��ٵĿռ���ʼ��ַ

	int* ptr =(int*)realloc(pc, 20*sizeof(int));
	
	//�п��ܷ��ؾɵ�ַ��β���ڴ��㹻����
	//Ҳ�п��ܷ����µ�ַ��β���ڴ治���������¿ռ䣬free�ɿռ䣩
	//
	// 
	//�����þ�ָ�����realloc����ֵ����Ϊrealloc�Ҳ������ʵĿռ�᷵��NULL��
	//�����Ҳ���ԭ�ռ�λ��
	
	if (ptr != NULL)
	{
		pc = ptr;//���ز�Ϊ��ָ��
	}



	int* pr = (int*)realloc(NULL, 20);//��ʱ��malloc��ͬ

	return 0;

}