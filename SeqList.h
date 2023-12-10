#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
#define N 10
//顺序表的静态开辟（固定大小）
//typedef struct SeqList
//{
//	SLDataType a[N];//创建的数组中可以存放N个元素
//	int size;//size表示数组中实际的元素个数
//};
//顺序表的动态开辟（大小可变）
typedef struct SeqList
{
	SLDataType* a;//指向动态开辟的数组
	int size;//有效数据个数
	int capacity;//容量空间的大小（即动态开辟出来的空间的大小）
}SL;
void SeqListInit(SL* ps);//初始化顺序表
void SeqListPrint(SL* ps);//打印线性表
void SeqListCheckCapacity(SL* ps);//在顺序表的插入中，都需要检查是否已经满了
void SeqListPushBack(SL* ps, SLDataType x);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPushFront(SL* ps, SLDataType x);//头插
void SeqListPopFront(SL* ps);//头删#pragma once
