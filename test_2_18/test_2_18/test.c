#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;//
//		right--;//
//	}
//}
//
//
//void my_print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr, sz);
//	printf("\n");
//	reverse(arr, sz);
//	my_print(arr, sz);
//	return 0;
//}
//
//exchange(int arr1[], int arr2[], int arr3[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//
//}
//
//void arr_print(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int arr3[] = {0};
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("���鲻�Գ�\n");
//		return 0;
//	}
//	else
//	{
//		int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//		exchange(arr1, arr2, arr3, sz);
//		arr_print(arr1, arr2,sz);
//		return 0;
//	}
//
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 6;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//1��16����λ����4��2����λ
//	//int*pa = &a;
//
//	char* pc = &a;//�����ú�ֻ�ܷ���һ���ֽ�
//
//	*pc = 0;
//	return 0;
//}


//int main()
//{
//	//ָ��Ĳ���
//	int arr[10] = {0};
//	int* pa = arr;
//	char* pc = arr;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//Ұָ��
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//��Ϊ�±�Ϊi�ĵ�ַ
//	}
//	return 0;
//}
//
//int * test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int * p = test();
//	*p = 20;//���ﲢ����ʵ�֣���Ϊ����a������testʱ���Ѿ����٣����Է��ص�ָ���ǿ�ָ�룬���ǿ�з�����ΪԽ�����
//	return 0;
//}



//��α���Ұָ��/
//1.��ʼ������֪����ʼ����ֵ��2��Ĭ�ϳ�ʼ��ΪNULL��=0����
//2.С��ָ��Խ��
//3.�ռ��ͷ�ʱ����ʱ��ָ��ְλNULL
//4.ʹ��ָ��ǰ ��������( if(*p!=NULL) )


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* pa;
//
//	for (pa = &arr[0]; pa < &arr[5];)
//	{
//		*pa++ = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)//���ñȽϹ�ϵ����
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}




int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%d\n", &arr[9] - &arr[0]);//ָ���ȥָ��õ���������֮���Ԫ�ظ�����
    //ָ�����������������ָ��ͬһ�ռ�


	//strlen

	
	return 0;
}