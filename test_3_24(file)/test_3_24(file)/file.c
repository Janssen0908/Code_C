#define   _CRT_SECURE_NO_WARNINGS
#include "file.h"

//int main()
//{
//	//printf("jhehe\n");
//
//	FILE* pf = fopen("F:\\vs\\gitee_c\\test_3_24(file)\\test.dat", "r");//双斜杠为绝对路径
//	//单斜杠会误认为转义字符
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件顺序读写


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fputc('c', pf);
//	fputc('s', stdout);
//	fputc('f', stdout);
//	fputc('h', stdout);
//	fputc('w', stdout);
//	fputc('q', stdout);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//文件随机读写




//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fputc('c', pf);
//	//fputc('s', stdout);
//	//fputc('f', stdout);
//	//fputc('h', stdout);
//	//fputc('w', stdout);
//	//fputc('q', stdout);
//
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fputc('c', pf);
//	//fputc('s', stdout);
//	//fputc('f', stdout);
//	//fputc('h', stdout);
//	//fputc('w', stdout);
//	//fputc('q', stdout);
//
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//
//	if (pf == NULL)
//		return 1;
//
//	fputs("hell sd\n", pf);
//	fputs("sadasfgdfg", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//
//	if (pf == NULL)
//		return 1;
//	char s[10] = { 0 };
//	fgets(s,3,pf);
//	printf("%s\n", s);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;

//}


//struct S
//{
//	char arr[10];
//	int num;
//	float sz;
//};
//
//
//int main()
//{
//	struct S s = { "asdddf",10,3.5f };
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sz);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//
//struct S
//{
//	char arr[10];
//	int num;
//	float sz;
//};
//
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.arr, &s.num, &s.sz);
//	fprintf(stdout,"%s %d %f", s.arr, s.num, s.sz);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct S
//{
//	char arr[10];
//	int num;
//	float sz;
//};
//
//int main()
//{
//	struct S s = { "abcdf",10,3.4f };
//
//	//二进制写入
//
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



struct S
{
	char arr[10];
	int num;
	float sz;
};

int main()
{
	struct S s = { 0 };

	//二进制写入

	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}


	fread(&s, sizeof(struct S), 2, pf);
	printf("%s %d %f", s.arr, s.num, s.sz);

	fclose(pf);
	pf = NULL;
	return 0;
}