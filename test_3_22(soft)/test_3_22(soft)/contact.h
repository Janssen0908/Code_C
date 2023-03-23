#pragma once
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <time.h>
#include <errno.h>	
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12

#define MAX_Peo 1000

#define DEFAULT_SZ 3
#define INC_SZ 2//增量
//类型的定义

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele_number[MAX_TELE];
	char addr[20];
}PeoInfo;


//静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX_Peo];
//	int sz;
//}Contact;


//动态版本

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;

//函数的声明
void InitContact(Contact* pc);

void AddContact(Contact* pc);

void PrintContact(const Contact* pc);

void DelContact(Contact* pc);

void SearchContact(Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void DestoryContact(Contact* pc);



