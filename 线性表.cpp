#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
//TestSeqList1()ר���������Ը����ӿ�




void TestSeqLis1()
{
	SL s;//�����ṹ�����s��s��Ϊ˳���
	SeqListInit(&s);//��������˳����ʼ��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);
	printf("\n");
	SeqListPushFront(&s, 6);
	SeqListPrint(&s);
}
int main()
{
	TestSeqLis1();
	return 0;
}