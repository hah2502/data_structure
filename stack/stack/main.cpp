#include "stack.h"

void main()
{
	link_stack stack=NULL;/*����1����ջ*/
	LinkStack_ops ops;
	int pop_data = 0;

	ops.Push = StackPush;
	ops.Pop = StackPop;
	ops.Print = StackPrint;

	ops.Push(&stack, 5);
	ops.Push(&stack, 6);
	ops.Push(&stack, 7);
	ops.Push(&stack, 8);
	ops.Print(&stack);

	ops.Pop(&stack, &pop_data);
	printf("-------pop_data=%d-------\r\n", pop_data);
	ops.Pop(&stack, &pop_data);
	printf("-------pop_data=%d-------\r\n", pop_data);
	ops.Print(&stack);

	system("pause");
}