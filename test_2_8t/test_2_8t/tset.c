#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[4]);//[]���������±�Ϊ4��Ԫ�أ�����Ĭ�ϴ��㿪ʼ�����Ϊ5
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);//����� �����ž��Ǻ������ò�����
//	return 0;
//}

	//printf("������%s\n", shu1.name);
	//printf("��ţ�%s\n", shu1.id );
	//printf("���ۣ�%f\n", shu1.price );

struct Book
{
	char name[20];
	char id[20];
	float price;
};

int main()
{
	struct Book shu1 = { "c����","235446365",12.6};

	struct Book* pb = &shu1;
	printf("������%s\n", pb->name);
	printf("��ţ�%s\n", pb->id );
	printf("���ۣ�%f\n", pb->price);



	return 0;
}