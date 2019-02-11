#include "linklist.h"


typedef Linklist link_queue;

struct queue_ops{
	int(*in)(link_queue *Q, int data);
	int(*out)(link_queue *Q, int *data);
	int(*print)(link_queue *Q);
	
};

extern int QueueIn(link_queue *Q, int data);
extern int QueueOut(link_queue *Q, int *data);
extern int QueuePrint(link_queue *Q);