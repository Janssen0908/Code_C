#define   _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include  <string.h>


//int main()///һά����
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);		
//		for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//



//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}







//int main()   //��ά����
//{
//     //����
//
//	/*int arr[3][4] = {0};
//	int i, j = 0;
//	for (i = 0;i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	//��ʼ�� 1
//
//	//int arr[3][4] = { 1,2,4,5,7,8,9,10,11,12 };
//	//һ����һ�����룬���к��С�
//
//	//��ʼ�� 2 
//
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//���к���
//
//	//�п�ʡ���в���ʡ
//	int arr1[][3] = { {1,2},{3,4} };
//
//
//
//
//
//	return 0;
//}



//��ά����Ĵ�ӡ

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)//�к�
//	{
//		for (j = 0; j < 4; j++)//�к�
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}





//
//int main()
//{
//		int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)//�к�
//	{
//		for (j = 0; j < 4; j++)//�к�
//		{
//			printf("&arr[%d][%d] = %p ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}





//������Ϊ��������

//void bubble_sort(int* str,int n)
////�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//
//{
//	for (str = 0; str < n -1; str++)
//	{
//		int j = 0;````					
//		for (j = 0; j < n - 1; j++)
//		{
//			if (*str < *(str + 1))
//			{
//				int tmp = *str;
//				*str = *(str + 1);
//				*(str + 1) = tmp;
//				str++;
//			}
//		}
//	
//	}
//}//����д��


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}//��ȷ����

//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	//����Ϊ����
//	//ð������
//
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//��������ʲô

//int main()
//{
//	int arr[10] = { 0 };		
//	return 0;
//}




//void bubble_sort(int* str, int sz)
//{
//	*(str + 4) = 22;
//	*(str + 3) = 33;
//	*(str + 2) = 44;
//
//}




//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz - 1; i++)//��������
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)//���ڴ���
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//ð������
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include "��ͷ.h"

int main()
{
	char board[ROW][COL];
	return 0;
}