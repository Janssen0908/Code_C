#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include<assert.h>

//����
//1.�ָ������ַ�����

//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
// ��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ����������
//���ҿ��޸ġ���
// 
// 
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ���
//�е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����
//�ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ��




int main()
{
	char arr[] = "janssen0908@163.com";
	char* p = "@.";
	char arr2[20] = { 0 };
	strcpy(arr2, arr);

	//janssen0908@163.com
	//janssen0908 \0 163 \0 com
	//strtok(arr, p);
	//strtok(NULL, p);
	//strtok(NULL, p);



	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))
	{
		printf("%s\n", ret);
	}


	return 0;
}