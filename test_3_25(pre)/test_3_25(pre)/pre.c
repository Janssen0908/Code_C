#define   _CRT_SECURE_NO_WARNINGS

#include "pre.h"

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//
//
//
//	int i = 0;
//		FILE* pf = fopen("log.txt", "w");
//		if (pf == NULL)
//		{
//			return 1;
//		}
//
//		//记录日志
//		for (i = 0; i < 10; i++)
//		{
//			fprintf(pf, "%s %d %s %s %s\n",__FILE__,__LINE__,__DATE__,__TIME__,__FUNCTION__);
//		}
//
//		fclose(pf);
//		pf = NULL;
//	
//	return 0;
//}


//
//#define M 100
//
//#define SQUARE(X) ((X)*(X))//写宏的时候括号比较重要
//
//#define DOUBLE(X) 
//int main()
//{
//	int m = M;;//预处理的时候就已经替换成100了
//
//	printf("%d\n", SQUARE(3));//替换成3*3
//	printf("%d\n", SQUARE(3 + 1));//先替换，再计算（3+1*3+1） = 7
//	return 0;
//}

//#define M 100
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int max = MAX(101, 100);
//	return 0;
//}


//#define PRINT(X,FORMAT) printf("the value of "#X" is "FORMAT"\n",X)
//
//int main()
//{
//	int a = 10;
//	float f = 3.5f;
//
//
//	PRINT(a,"%d");
//	PRINT(f,"%f");
//
//	return 0;
//}
//
//#define CAT(X,Y,Z) X##Y##Z
//
//int main()
//{
//	int class10123 = 100;
//	printf("%d\n", CAT(class, 101,23));//##：拼接符号
//	return 0;
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("m = %d\n", m);
//	return 0;
//}



//
//#define MALLOC(NUM,TYPE) (TYPE*)malloc(NUM*sizeof(TYPE))
//
//int main()
//{
//	//malloc(10 * sizeof(int));
//
//	//malloc(10, int);
//
//	int* pc = MALLOC(10, int);
//
//	return 0;
//}


//#define M 1000
//
//
//int main()
//{
//
//	int m = M;
//#undef M
//
//	printf("%d\n", m);
//	return 0;
//}


//条件编译
//#define PRINT
//int main()
//{
//#ifdef PRINT//开关
//	printf("hehe\n");
//#endif
//	return 0;
//}

#if 0

#define PRINT
int main()
{
//#ifdef PRINT//开关
//	printf("hehe\n");
//#endif


#if PRINT// /0
	printf("hehe\n");
#endif
	return 0;
}


#endif
#if 0
int main()
{
#if 1==2
	printf("heh\n");
#elif 3==2
	printf("haha\n");
#else
	printf("heihie");
#endif

	return 0;
}

#endif



#if 0
int main()
{

	//如果TEST定义了，执行后续语句
#ifdef TEST
	printf("hhsd\n");
#endif


	//如果HEHE未定义，执行后续语句
#ifndef HEHE
	printf("heasd\n");
#endif


#if defined(TEST)//等于181行的写法
	printf("tseda\n");
#endif
	return 0;
}
#endif


int main()
{
	EOF;
	return 0;
}