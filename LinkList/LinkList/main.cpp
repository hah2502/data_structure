#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "linklist.h"






int main()
{
	Linklist L;
	LinkOps ops;
	//����1����ͷ���Ŀ�����������ͷ����е������򱣴�����ĳ���
	L = (Linklist)malloc(sizeof(Linknode));/*����ͷ���*/
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

	printf("����ĳ��ȣ�%d\r\n", L->data);
	ops.ListInsert(&L, 77, 80);
	ops.ListPrint(&L);

	printf("����ĳ��ȣ�%d\r\n", L->data);
	ops.ListDelete(&L, 80);
	ops.ListPrint(&L);

	printf("����ĳ��ȣ�%d\r\n", L->data);
	ops.ListClear(&L);
	ops.ListPrint(&L);

	printf("����ĳ��ȣ�%d\r\n", L->data);

	/**------------------------*/

	system("pause");/*��ͣ�����һֱ��ʾ������*/


	return 0;
}