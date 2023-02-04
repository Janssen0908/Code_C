#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	double i = 9.0 / 2;
//	//int i = 9 /2.0;
//	printf("%lf\n", i);
//
//	return 0;
//}

//int main()
//{
//	//int a = 2;
//	//a = a << 1;
//	//printf("%d\n", a);
//
//	//int i = 3;
//	//int j = 5;
//	//printf("%i\n", i & j);// i、j按位与
//	////0000 0011
//	////0000 0101
//	////0000 0001
//	////同为真“1”时为真“1”
//
//		//a = a + b;//a = 8
//	//b = a - b;//b = 3
//	//a = a - b;//a = 5
//
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;//0000 0110
//	b = a ^ b;//0000 0011
//	a = a ^ b;//0000 0101
//
//	return 0;
//}



int main()
{
	int a = 7;//0000 0111
	int count = 0;
	while (a)
	{
		if (a & 1 ==1)
		{
			count++;
		}
		a = a >> 1;
	}
	printf("%d\n", count);
	return 0;
}
//
//int main()
//{
//	int a = 7;
//	a = a & 8;
//	printf("%d\n", a);
//	return 0;
//}