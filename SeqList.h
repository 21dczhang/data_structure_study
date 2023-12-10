#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
#define N 10
//˳���ľ�̬���٣��̶���С��
//typedef struct SeqList
//{
//	SLDataType a[N];//�����������п��Դ��N��Ԫ��
//	int size;//size��ʾ������ʵ�ʵ�Ԫ�ظ���
//};
//˳���Ķ�̬���٣���С�ɱ䣩
typedef struct SeqList
{
	SLDataType* a;//ָ��̬���ٵ�����
	int size;//��Ч���ݸ���
	int capacity;//�����ռ�Ĵ�С������̬���ٳ����Ŀռ�Ĵ�С��
}SL;
void SeqListInit(SL* ps);//��ʼ��˳���
void SeqListPrint(SL* ps);//��ӡ���Ա�
void SeqListCheckCapacity(SL* ps);//��˳���Ĳ����У�����Ҫ����Ƿ��Ѿ�����
void SeqListPushBack(SL* ps, SLDataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
void SeqListPopFront(SL* ps);//ͷɾ#pragma once
