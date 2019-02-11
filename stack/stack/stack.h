#include "linklist.h"


typedef Linklist link_stack;

struct LinkStack_ops{
	int(*Push)(link_stack *S,int data);
	int(*Pop)(link_stack *S,int *data);
	int(*Print)(link_stack *S);
};


extern int StackPush(link_stack *S, int data);
extern int StackPop(link_stack *S, int *data);
int StackPrint(link_stack *S);