#define   _CRT_SECURE_NO_WARNINGS

#include "test.h"


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
	//��̬�ڴ濪�ٵ��ʹ���

	//1.��NULL�Ľ����ò���
	// 
	//int* pc = (int*)malloc(100000000000000 * sizeof(int));
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	pc[i] = i;//�Ƿ������ڴ�
	//}
	//�ܽ᣺Ҫ��malloc�����ķ���ֵ���пմ���

	//2.�Զ�̬�����ڴ�ռ��Խ�����

	//int* p = (int*)malloc(10 * sizeof(int));//ֻ������10�����οռ�
	//if (p == NULL)
	//{
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 40; i++)//Ҫȥ����40��int�ռ䣬����Խ�����
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	//�ܽ᣺Ҫע�⿪�ٵĿռ䵥λ���ֽ�


	//3.�ԷǶ�̬�ڴ�ռ�ʹ��free

	//int arr[10] = { 10 };
	//int* p = arr;//ջ��

	//free(p);
	//p = NULL;
	//return 0;
	//�������ûᵼ�½��̿���


	//4.ʹ��free�ͷŶ�̬�ڴ濪�ٵ�һ����

	//int* pc = (int*)malloc(10 * sizeof(int));
	//if (pc == NULL)
	//{
	//	return 1;
	//}

	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*(pc + i) = i;
	//}
	//free(pc);//�ᵼ���ڴ�й©
	//pc = NULL;//


	//5.��ͬһ��̬�ڴ����ͷ�

	//int* p = (int*)malloc(100);
	////ʹ��
	//free(p);
	//p = NULL;//���ⷽ��
	//free(p);


	//6.��̬�ڴ濪�������ͷ�
	//test();

	//�ڴ��ͷŵ����ַ�ʽ��
	//1. free
	//2. �������
//	return 0;
//}






//void GetMemory(char* p)//p��str��һ����ʱ����p == NULL
//{
//	p = (char*)malloc(100);
//}//p���ص�ʱ���Ѿ�����ڴ�й©��
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//
//}



//char* GetMemory(char* p)//p��str��һ����ʱ����p == NULL
//{
//	p = (char*)malloc(100);
//	return p;
//}//p���ص�ʱ���Ѿ�����ڴ�й©��
//void Test(void)
//{
//	char* str = NULL;
//	char* str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//
//}

//
//void GetMemory(char** p)//p��str��һ����ʱ����p == NULL
//{
//	*p = (char*)malloc(100);
//}//p���ص�ʱ���Ѿ�����ڴ�й©��
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//
//}




//******************************************************************
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();//��ʱ��char p[]�Ѿ������˲���ϵͳ���Ҳ���hello world
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	//ע��Ҫfree
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}




void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free��һ��Ҫ��ΪNULL
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
