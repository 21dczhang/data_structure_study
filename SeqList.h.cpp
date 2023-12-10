#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SeqListInit(SL* ps)//开辟空间并把size赋值为0
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//给数组a开辟4个SLDataType大小的空间
	if (ps->a == NULL)
	{
		printf("内存申请失败\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SeqListPrint(SL* ps)//打印顺序表
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
}
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);
	//如果满了就扩容
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("扩容失败\n");
			exit(-1);
		}
	}
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
	//注意此时删除后的元素仍在，但size变小了，故无法访问了
	//如1 2 3 4 5删除后仍是1 2 3 4 5，但5无法被访问
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1)
	{
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;
	//注意此时不是删除了第一个元素，而是将第一个元素覆盖掉了，且原本的最后一个元素没有动，但是因为size--了，所以无法访问
	//如1 2 3 4 5头删后变成2 3 4 5 5
}