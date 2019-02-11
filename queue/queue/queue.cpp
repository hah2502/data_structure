#include "queue.h"



int QueueIn(link_queue *Q, int data)
{
	link_queue r=*Q;
	link_queue p;

	p = (link_queue)malloc(sizeof(Linknode));
	p->data = data;
	
	while (r!=NULL)
	{
		r = r->next;
	}                                                                                                                   
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	r->next= p;
	return 0;
}

int QueueOut(link_queue *Q, int *data)
{

	return 0;
}

int QueuePrint(link_queue *Q)
{
	link_queue p = *Q;
	int i =0;
	if (!p)
	{
		printf("Queue NULL,return error \r\n");
	}

	while (p)
	{
		printf("Queue data[%d]=%d\r\n", i, p->data);
		i++;
		p = p->next;
	}

	return 0;
}