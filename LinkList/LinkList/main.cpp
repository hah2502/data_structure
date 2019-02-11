#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "linklist.h"






int main()
{
	Linklist L;
	LinkOps ops;
	//定义1个带头结点的空链表！！！，头结点中的数据域保存链表的长度
	L = (Linklist)malloc(sizeof(Linknode));/*生成头结点*/
	L->next = NULL;
	L->data = 0;

	ops.ListInit = LinkList_Init;
	ops.ListPrint = LinkList_Print;
	ops.ListCreateTail = ListCreateTail;
	ops.ListClear = LinkList_Clear;
	ops.ListInsert = LinkList_Insert;
	ops.ListDelete = LinkList_Delete;

	ops.ListCreateTail(&L, 101);
	ops.ListPrint(&L);

	printf("链表的长度：%d\r\n", L->data);
	ops.ListInsert(&L, 77, 80);
	ops.ListPrint(&L);

	printf("链表的长度：%d\r\n", L->data);
	ops.ListDelete(&L, 80);
	ops.ListPrint(&L);

	printf("链表的长度：%d\r\n", L->data);
	ops.ListClear(&L);
	ops.ListPrint(&L);

	printf("链表的长度：%d\r\n", L->data);

	/**------------------------*/

	system("pause");/*暂停在这里，一直显示输出结果*/


	return 0;
}