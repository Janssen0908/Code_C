#define   _CRT_SECURE_NO_WARNINGS
#include "memy.h"


//strerror:�Ѵ�����ת��Ϊ������Ϣ->��ӡ
//perror:ֱ�Ӵ�ӡ������Ϣ��
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	//int ret = isdigit(ch);//�������ַ����ط��㣬���򷵻���
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[20];
//	//char* str = gets();
//	//char* s1 = str;
//	scanf("%s", arr);
//
//
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
//	//printf("%s\n", s1);
//	return 0;
//}




//memcpy��ֱ�ӿ����ڴ�飬���迼����ֵ����


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 20);
//
//	//int i = 0;
//	//int size = sizeof(arr1);
//	/*for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", arr2[i]);
//
//	}*/
//	return 0;
//}

//
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	while (n)
//	{
//		*((char*)dest) = *((char*)src);
//
//		//����
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		n--;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}



//memmove

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	memmove(arr1+2, arr1, 20);//���Դ����ڴ��ص������
//	return 0;
//}

// 
//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)//��ǰ��󿽱�
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = *(char*)dest;
//			src = *(char*)src;
//		}
//	}
//	else//�Ӻ���ǰ
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	my_memmove(arr1+2, arr1, 20);//���Դ����ڴ��ص������
//	return 0;
//}


//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}//ѭ��20��
//	}
//	else
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);
//		}
//	}
//
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}





//memcmp

//int main()
//{
//
//	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2,8);
//	printf("%d\n", ret);
//	return 0;
//}






//memset(void*ptr,int x,size_t n):��ptr��ָ��ռ��n���ֽڵ�������Ϊx 

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//20�ֽ�->���Ԫ��

	return 0;
}