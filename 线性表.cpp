#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
//TestSeqList1()专门用来测试各个接口




void TestSeqLis1()
{
	SL s;//创建结构体变量s，s即为顺序表
	SeqListInit(&s);//将创建的顺序表初始化
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