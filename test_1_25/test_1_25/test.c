#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int input = 0;
//	printf("jiarubite:>");
//	printf("Ҫ�ú�ѧϰ��1/0����:>");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("%d:д����\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//
//}

//ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	//A = num1 + num2;���Ǻ�����ʽ��
//	//int sum = ADD(num1, num2);
//    printf("��Ϊ��%d",ADD(num1, num2));
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ch[5] = { 'a','b','c' };
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	//int b = a << 1;
//	a = a + 5;
//	a += 5;
//
//	if (a)
//	{
//		//���aΪ�棬����
//	}
//	if (!a)
//	{
//		//aΪ�٣�����
//	}
//
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//sizeof�ǲ����������Ǻ�����
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	int c = a++;
//	printf("%d\n", b);
//	printf("%d\n", c);//��ʱa�Ѿ���Ϊ11
//
//	return 0;
//}
//int main()
//{
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//	//return 0;
//	int a = 3;
//	int b = 0;
//	int c = a || b;
//	int d = a && b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, d = c + 2);
	printf("%d\n", d);
	return 0;
}