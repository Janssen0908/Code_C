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
//	//sprintf:把一个格式化的数据转换为一个字符串
//	char buffer[100] = { 0 };
//
//	sprintf(buffer, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buffer);
//
//
//	//sscanf:把一个字符串还原成一个格式化的数据
//
//	struct S tmp = { 0 };
//	sscanf(buffer, "%s %d %f", tmp.arr, &tmp.age, &tmp.f);
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}



//文件的随机读取

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
//	//顺序读
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	//fseek：随机读
//
//	//fseek(pf, -1, SEEK_CUR);
//	fseek(pf, 2, SEEK_CUR);//单位字节
//	fseek(pf, -2, SEEK_END);
//
//
//
//	//ftell: 计算文件当前指针位置离初始位置的偏移量
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
//	//rewind:让文件指针回溯到起始位置
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
//	//将test.dat 拷贝一份 到test2.dat
//
//	FILE* pfread = fopen("test.dat", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//拷贝
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
//	//文件打开成功
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


//文件缓冲区

#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);//ms
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
