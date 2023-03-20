#define   _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include<assert.h>

//参数
//1.分隔符的字符集合

//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
// （注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容
//并且可修改。）
// 
// 
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串
//中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标
//记。
//如果字符串中不存在更多的标记，则返回 NULL 指针




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