#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//
//
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//**������������������ǵ�ַ�����Բ���ȡ��ַ&
//	printf("��ȷ������(Y/N):>");
//	int clean = 0;
//	while ((clean=getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if ('Y'==ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//
//	return 0;
//}

//
//int main()//������д��ʽ
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//ѭ����Σ���Ϊ���ʽk=0����ζ�ű��ʽΪ�٣���ִ��
//	{
//		k++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	do {
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do {
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 1;
//	int add = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (sum = 1,j = 1; j <= i; j++)//����n�Ľ׳�֮ǰ��sum��ֵ��Ϊ1��
//		{
//			
//			sum *= j;
//		}
//		add += sum;
// 
// 
// //��2  
//	
//	printf("%d\n", add);
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	int left = 0;
	int right = 9;
	int mid = 0;
	//int i = 0;
	//for (i = 0;i < right;i++)
	//{
	//	mid = (left + right) / 2;
	//	if (arr[mid] == k)
	//	{
	//		printf("���ҵ����±�Ϊ��%d\n", mid);

	//		break;
	//	}
	//	else if (k > arr[mid])
	//	{
	//		left = mid + 1;
	//	}
	//	else
	//	{
	//		right = mid - 1;
	//	}

	//}
	while (left != right)
	{
		mid = (right + left) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		}
	}
	return 0;
}