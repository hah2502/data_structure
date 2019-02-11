
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




typedef struct Linknode{
	int data;
	Linknode *next;

}*Linklist;
typedef struct LinkOps{
	int(*ListInit)(Linklist *L, int length);/*链表头插入法初始化100个随机数*/
	int(*ListCreateTail)(Linklist *L, int length);/*链表尾插入法初始化length个100以内随机数*/
	int(*ListInsert)(Linklist *L, int data, int position);/*插入在这个位置之前*/
	int(*ListDelete)(Linklist *L, int poistion);/*删除这个位置的结点*/
	int(*ListClear)(Linklist *L);/*清空链表*/
	int(*ListPrint)(Linklist *L);/*打印链表的数据*/

};







extern int LinkList_Init(Linklist *L, int length);
extern int LinkList_Print(Linklist *L);
extern int ListCreateTail(Linklist *L, int length);
extern int LinkList_Clear(Linklist *L);
extern int LinkList_Insert(Linklist *L, int data, int position);
extern int LinkList_Delete(Linklist *L, int position);