#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    //      4  2 00 00 00
//    return 0;
//}

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ
//    //                 1       3       5
//    //   1 3
//    //   5 0 
//    //   0 0
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//p[0] == *(p+0)
//    return 0;
//}



//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //*(*(p+4)+2) == p[4][2];
//    //ָ��-ָ�� =  ��ָ��֮���Ԫ�ظ���
//    return 0;
//}



//
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));//*(aa+1) == �ڶ��е���������Ҳ����6�ĵ�ַ
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}




//int main()
//{
//	char* a[] = { "work","at","alibaba" };//{w�ĵ�ַ��a�ĵ�ַ��a�ĵ�ַ}
//	char** pa = a;//work��ַ�ĵ�ַ
//	pa++;
//	printf("%s\n", *pa);//
//	return 0;
//}



int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	//ע���������ȼ���+��
	return 0;
}