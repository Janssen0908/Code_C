#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		while ((left<right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//
//		while ((left<right) && arr[right] == 0)
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//
//	}
//
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	move(arr, sz);
//	// print(arr, sz);
//	return 0;
//}

//int main()
//{
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d %d", a + b, c);
//
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	 
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == 0 ||i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{

	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("Ð×ÊÖÊÇ£º%c\n", killer);
		}
	}

	return 0;
}