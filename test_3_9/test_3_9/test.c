#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//���������������ڴ��еĴ�ȡ��ͬ
//{
//	int  n = 9;
//	float* pFloat = &n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("pFloat��ֵΪ��%f\n", *pFloat);//�Ը��������ӽǿ�
//
//	*pFloat = 9.0;//���������ӽ� �洢9.0
//
//	printf("num��ֵΪ��%d\n", n);//�����ε��ӽ�ȡ��
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}


//64bit: 1+11+52
//32bit: 1+8+23
//int main()
//{
//
//	float f = 5.5;//101.1    1.011   ���룺2+127
//	//s:0    e(����):10000001    m:01100000000000000000000
//	// //40 b0 00 00
//	//���� = ƫ���� + ��ֵ
//	//       0111 1111    2��10
//	return 0;
//}

//int main()
//{
//	//char sh = 'w';
//	//char* ch = &sh;
//	//*ch = 'z';
//	//printf("%c\n", sh);
//
//	//char* ps = "hello sadni";//�洢�����ַ��������ַ���s���ĵ�ַ������ps��
//
//	//printf("%c\n", *ps);
//
//	//char arr[] = "hello bit";
//	char ch[] = "hello bsudo";
//	char* pc = ch;
//
//	*pc = 'e';
//	printf("%c", *pc);
//
//
//
//	return 0;
//}
//int main()
//{
//	//int* arr[3];//����ָ������
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);//ģ��һ����ά����
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'e';
//	char* pc = &ch;
//
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr) [10] = &arr;//����ĵ�ַ
//	//����ָ��
//	arr;//������Ԫ�صĵ�ַ
//
//	double* d[5];
//	double *(*pd)[5] = &d;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p = arr;//����ָ��
//	int (*p2) [10] = &arr;//����ָ��
//
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}

//int main()
//{
//	//��������
//	//sizeof(������)����ʾ�������飬����������������С����λ�ֽ�
//	//&��������ȡ��������������ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//
//		//(*pa)�õ�arr����ĵ�ַ
//		//(*pa)+i�õ�arr����ÿ��Ԫ�صĵ�ַ
//		//((*pa)+i),�����ò����õ�Ԫ��ֵ
//
//	}
//
//	return 0;
//}

print(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);//��ӡһ��
		}
		printf("\n");//����
	}
}


//void print2(int (*p)[5],int r,int c)//p:����ָ��
//{
//	int i, j = 0;
//	for (i = 0; i < r;i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i) ��ָ��ĳһ��
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	//print(arr, 3, 5);
//	print2(arr, 3, 5);//arr��ʾ��һ�У���Ԫ�ص�ַ��
//	return 0;
//}

