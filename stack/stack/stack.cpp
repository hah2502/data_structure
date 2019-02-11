#include "stack.h"


int StackPush(link_stack *S, int data)
{
	link_stack p;
	link_stack q = *S;
	p = (link_stack)malloc(sizeof(Linknode));
	p->data = data;
	printf("StackPush data=%d\r\n",p->data);

	p->next = q;
	(*S) = p;


	return 0;
}

int StackPop(link_stack *S, int *data)
{
	link_stack p = *S;

	if (!p)
	{
		printf("NULL stack ,return\r\n");

		return -1;
	}
	*data = p->data;
	*S = p->next;
	free(p);
	return 0;
}

int StackPrint(link_stack *S)
{
	link_stack p=*S;
	int i=0;
	if (!p)
	{
		printf("NULL stack ,return\r\n");

		return -1;
	}

	while (p)
	{
		printf("stack[%d]=%d\r\n", i, p->data);
			i++;
		p = p->next;
	}

	return 0;
}