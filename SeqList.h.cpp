#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

void SeqListInit(SL* ps)//���ٿռ䲢��size��ֵΪ0
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);//������a����4��SLDataType��С�Ŀռ�
	if (ps->a == NULL)
	{
		printf("�ڴ�����ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}
void SeqListPrint(SL* ps)//��ӡ˳���
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
	//������˾�����
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * ps->capacity);
		if (ps->a == NULL)
		{
			printf("����ʧ��\n");
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
	//ע���ʱɾ�����Ԫ�����ڣ���size��С�ˣ����޷�������
	//��1 2 3 4 5ɾ��������1 2 3 4 5����5�޷�������
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
	//ע���ʱ����ɾ���˵�һ��Ԫ�أ����ǽ���һ��Ԫ�ظ��ǵ��ˣ���ԭ�������һ��Ԫ��û�ж���������Ϊsize--�ˣ������޷�����
	//��1 2 3 4 5ͷɾ����2 3 4 5 5
}