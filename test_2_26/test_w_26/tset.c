#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strerror
//perror
//
//int main()
//{
//	//���ļ�ʧ�ܵ�ʱ�򣬻᷵��NULL
//	FILE* pf = fopen("test.txt", "r");
//	//0   "no error"
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	// 
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <ctype.h>
//
//int main()
//{
//	char ch = 'a';
//	//isdigit  ����������ַ����ط�0��ֵ��������������ַ�������0
//
//	if (ch >= 'A' && ch <= 'Z')
//	{
//
//	}
//
//	//int ret = isdigit(ch);
//	//int ret = islower(ch);
//	//printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//