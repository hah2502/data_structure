
#include "linklist.h"





int LinkList_Init(Linklist *L,int length)
{
	Linklist p;
	printf("LinkList_Init\r\n");
	
	srand(time(0)); /*�������������*/
	for (int i = 0; i < length; i++)
	{
		p = (Linklist)malloc(sizeof(Linknode));
		p->data = rand() % 100+1;/*����100�������������*/
		printf("data[%d]=%d\r\n", i, p->data);
		p->next = (*L)->next;
		(*L)->next = p;
		
	}
	(*L)->data = length;/*����ĳ���*/

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
	p = p->next;/*ָ���һ�����*/
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

	srand(time(0)); /*�������������*/

	q = *L;/*qһֱָ������β�����*/
	for (int i = 0; i < length; i++)
	{
		
		p = (Linklist)malloc(sizeof(Linknode));
		p->data = rand() % 100 + 1;/*����100�������������*/
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
	Linklist p = (*L)->next;/*ָ���һ�����*/
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
	(*L)->next = NULL;/*ͷ���ָ����Ϊ�գ�������Ҫ��ǰ����Ȼ�ռ��ͷ��ˣ�����ָ���ֵ��û�б�*/
	(*L)->data = 0;/*������Ϊ0*/
	return 0;
}

int LinkList_Insert(Linklist *L,int data, int position)
{
	Linklist p; 
	Linklist r, q;
	
	p = (*L);/*ָ��ͷ���*/

	for (int i = 1; i < position; i++)
	{
		p = p->next;/*p�ƶ���position֮ǰһ��λ��*/
	}
	q = (Linklist)malloc(sizeof(Linknode));
	q->data = data;

	r = p->next;
	p->next = q;
	q->next= r->next;

	((*L)->data)++;/*����+1*/

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
	p = (*L);/*ָ��ͷ���*/

	for (int i = 1; i < position; i++)
	{
		p = p->next;/*p�ƶ���position֮ǰһ��λ��*/
	}

	q = p->next;
	p->next = q->next;
	free(q);

	((*L)->data)--;/*����-1*/
	return 0;
}
