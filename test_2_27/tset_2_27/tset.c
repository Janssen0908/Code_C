#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>

//���ص���Ŀ��ռ����ʼ��ַ
//char*  my_strcpy(char* dest, const char* src)
//{
//	//���ԣ���ϣ�������е����鷢��
//	assert(src!=NULL);//��
//	assert(dest != NULL);
//	//src���ܵ��ڿ�ָ�룬���ʽΪ�����ִ�У����ʽΪ�٣�����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//ģ��ʵ��strcpy����
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char arr1[20] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	//��һ��λ�ã�Ŀ�ĵؿռ���ʼ��ַ
//	//�ڶ���λ�ã�Դ�ռ����ʼ��ַ
//
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}


//int main()
//{
//
//	//const���α�������������ͱ���˳����������ɱ��޸�
//	const int num = 10;
//	num = 20;
//
//	const int* p = &num;
//	int const * const p = &num;	
//	int n = 100;
//	//const ����ָ�����ʱ�����ε���*p����ʾָ��ָ������ݲ��ܱ��ı�
//	//ָ�����p�ǿ����޸ĵ�
//
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


//size_t my_strlen(const char* str)//�޷�������
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}
//
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)& 1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////
//
//int main()
//{
//	int n = -1;
//
//	int ret = NumberOf1(n);//������n���ж��ٸ�1��
//
//	printf("%d\n", ret);
//	return 0;
//}
// 
// 
// 
// 
// 
// //int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)& 1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
// 
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &m, &n);
//	int num = m ^ n;
//	printf("%d\n", NumberOf1(num));
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 32; i >= 1; i--)
//	{
//		if (i / 2 == 0)//ż��
//		{
//			printf("%d ", ((n>>i) & 1));
//		}
//		else if(i%2==1)
//		{
//			printf("%d ", ((n>>i) & 1));
//		}
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d,b = %d\n", a, b);

	return 0;
}


