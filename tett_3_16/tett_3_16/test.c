#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//void qsort(void* base, 
//    size_t num, 
//    size_t size,//һ��Ԫ���ж��
//    int (*compar)(const void*, const void*)
//);


//�Լ�ʵ����Ԫ�صĵıȽϣ�ͨ������ֵ��>0,<0,=0��,qsort�ж��Ƿ��������
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, 10, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//
//}






//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",22},{"lisi",19},{"wangwu",74} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), sort_age);
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//
//  };
//
//
//int main()
//{
//	test2();
//	//qsort(s, 2, sizeof(s), cmp_int);
//	return 0;
//}





//ģ��qsortʵ��һ��bubble_sort�㷨


//
//void Swap(char* buf1, char* buf2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base,
//	int sz,
//	int size,
//	int (*cmp)(const void* e1, const void* e2))//�ȽϺ������û����ã�
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ( cmp( (char*)base + j * size,(char*)base + (j + 1) * size )<0 )
//			{
//				//����
//				Swap( (char*)base + j * size, (char*)base + (j + 1) * size,size );
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
////void print(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//void test3()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), &cmp_int);
//	//print(arr, sz);
//}




//int main()
//{
//	test3();
//	return 0;
//
//}





////int main()
//{
//	int a[] = 
//	return 0; 
//}