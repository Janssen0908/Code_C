#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	strcpy(arr1, arr2);//��arr2�����ݿ�����arr1��
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = { "hello bit" };
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int get_max(int x, int y)//ע������int�ͣ�����ֵҪдint��
////��Ϊ�����a��b��int�ͣ�����Ҫ��int�����ܣ�x��y�൱�������µ�{����}
//{
//	int max = 0;
//	max = x > y ? x : y;
//	return max;
//}//max��Ϊ���ս�����أ�
//
//
//int main()
//{
//	int a, b = 0;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	max = get_max( a, b);//��a��b���뺯����
//	printf("MAX = %d\n", max);
//	return 0;
//}
//
//void Swap(int x, int y)//�����������͵ĵط�д����void�����������������Ҫ�����κ�ֵ��Ҳ����Ҫ����
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��%d %d\n", a, b);
//	Swap(a, b);
//	printf("������%d %d\n", a, b);
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("������%d %d\n", a, b);
//	return 0;
//}

#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	//for (j = 2; j < n; j++)
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()//////////��ӡ100-200֮�������
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if ((is_prime(i) == 1))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}


//int is_leap(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}
//return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);

//
//int binary_search(int arr1[],int k,int s)
//{
//	int left = 0;
//	int right = s-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr1[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k< arr1[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	///-----------0 1 2 3 4 5 6 7 8 9
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz);
//	//�ҵ��˾ͷ����ҵ�Ԫ�ص��±꣬
//	//û�ҵ��ͷ���-1
//
//	int ret = binary_search(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("�ҵ���,�±�Ϊ��%d\n",ret);
//	return 0;
//} 


//Add(int* n)
//{
//	(* n) += 1;
//}
//
//int main()///////ÿ�ε���Add����ʱ��num+1.
//{
//	int num = 0;
//	Add(&num);//���⣬Add�����ĵ��û�ı�num������Ҫ��num�ĵ�ַ����ȥ
//	printf("%d\n", num);
//
//	Add(&num);//���⣬Add�����ĵ��û�ı�num������Ҫ��num�ĵ�ַ����ȥ
//	printf("%d\n", num);
//
//	Add(&num);//���⣬Add�����ĵ��û�ı�num������Ҫ��num�ĵ�ַ����ȥ
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	//��ʽ���ʣ�����strlen�ķ�������ʱint�ͣ����Կ���дΪ��
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//	printf("%s\n",strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
