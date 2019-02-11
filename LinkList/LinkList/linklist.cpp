
#include "linklist.h"





int LinkList_Init(Linklist *L,int length)
{
	Linklist p;
	printf("LinkList_Init\r\n");
	
	srand(time(0)); /*生成随机数种子*/
	for (int i = 0; i < length; i++)
	{
		p = (Linklist)malloc(sizeof(Linknode));
		p->data = rand() % 100+1;/*生成100以内随机数种子*/
		printf("data[%d]=%d\r\n", i, p->data);
		p->next = (*L)->next;
		(*L)->next = p;
		
	}
	(*L)->data = length;/*链表的长度*/

	return 0;
}
int LinkList_Print(Linklist *L)
{
	Linklist p;
	int i=0;

	printf("LinkList_Print\r\n");
	if ((*L) == NULL)
	{
		printf("LinkList_Print error, no list\r\n");
		return -1;
	}
		

	p = *L;
	p = p->next;/*指向第一个结点*/
	while (p!=NULL)
	{
		printf("LinkList_Print data[%d]=%d \r\n", i, p->data);
		i++;
		p = p->next;
		
	}

	return 0;
}

int ListCreateTail(Linklist *L,int length)
{
	Linklist p;
	Linklist q;

	srand(time(0)); /*生成随机数种子*/

	q = *L;/*q一直指向链表尾部结点*/
	for (int i = 0; i < length; i++)
	{
		
		p = (Linklist)malloc(sizeof(Linknode));
		p->data = rand() % 100 + 1;/*生成100以内随机数种子*/
		printf("ListCreateTail data[%d]=%d\r\n", i, p->data);

		q->next= p;
		q = q->next;

		

	}
	q->next = NULL;

	(*L)->data = length;

	return 0;
}


int LinkList_Clear(Linklist *L)
{
	Linklist p = (*L)->next;/*指向第一个结点*/
	Linklist q;
	int i = 0;

	while (p != NULL)
	{
		q = p;
		p = p->next;
		printf("LinkList_Clear data[%d]=%d\r\n", i, q->data);
		i++;
		free(q);
	
	}
	(*L)->next = NULL;/*头结点指针域为空，这句很重要，前面虽然空间释放了，但是指针的值并没有变*/
	(*L)->data = 0;/*链表长度为0*/
	return 0;
}

int LinkList_Insert(Linklist *L,int data, int position)
{
	Linklist p; 
	Linklist r, q;
	
	p = (*L);/*指向头结点*/

	for (int i = 1; i < position; i++)
	{
		p = p->next;/*p移动到position之前一个位置*/
	}
	q = (Linklist)malloc(sizeof(Linknode));
	q->data = data;

	r = p->next;
	p->next = q;
	q->next= r->next;

	((*L)->data)++;/*长度+1*/

	return 0;
}

int LinkList_Delete(Linklist *L, int position)
{
	Linklist p;
	Linklist q;
	if ((*L) == NULL)
	{
		printf("LinkList_Print error, no list\r\n");
		return -1;
	}
	p = (*L);/*指向头结点*/

	for (int i = 1; i < position; i++)
	{
		p = p->next;/*p移动到position之前一个位置*/
	}

	q = p->next;
	p->next = q->next;
	free(q);

	((*L)->data)--;/*长度-1*/
	return 0;
}
