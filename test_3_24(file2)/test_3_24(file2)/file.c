#define   _CRT_SECURE_NO_WARNINGS

#include "file.h"


//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//int main()
//{
//	struct S s = { "hello",20,34.5f };
//
//
//	//sprintf:��һ����ʽ��������ת��Ϊһ���ַ���
//	char buffer[100] = { 0 };
//
//	sprintf(buffer, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buffer);
//
//
//	//sscanf:��һ���ַ�����ԭ��һ����ʽ��������
//
//	struct S tmp = { 0 };
//	sscanf(buffer, "%s %d %f", tmp.arr, &tmp.age, &tmp.f);
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}



//�ļ��������ȡ

//
//int main()
//{
//
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	//˳���
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	//fseek�������
//
//	//fseek(pf, -1, SEEK_CUR);
//	fseek(pf, 2, SEEK_CUR);//��λ�ֽ�
//	fseek(pf, -2, SEEK_END);
//
//
//
//	//ftell: �����ļ���ǰָ��λ�����ʼλ�õ�ƫ����
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	// ch = fgetc(pf);
//	//printf("%c", ch);
//	// ch = fgetc(pf);
//	//printf("%c", ch);
//
//
//
//	//rewind:���ļ�ָ����ݵ���ʼλ��
//	rewind(pf);
//	 ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	//��test.dat ����һ�� ��test2.dat
//
//	FILE* pfread = fopen("test.dat", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//����
//
//
//	FILE* pfwrite = fopen("test2.dat", "w");
//	if (pfread == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//
//	//�ļ��򿪳ɹ�
//	char ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch,pfwrite);
//	}
//
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//		return 0;
//}


//�ļ�������

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);//ms
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
