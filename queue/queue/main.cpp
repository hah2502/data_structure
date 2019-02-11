#include "queue.h"







void main()
{
	link_queue Q=NULL;
	queue_ops ops;

	ops.in = QueueIn;
	ops.out = QueueOut;
	ops.print = QueuePrint;

	ops.in(&Q, 10);
	ops.print(&Q);
}