
#include<stdio.h>
#include<stdlib.h>
#include<time.h>




typedef struct Linknode{
	int data;
	Linknode *next;

}*Linklist;
typedef struct LinkOps{
	int(*ListInit)(Linklist *L, int length);/*����ͷ���뷨��ʼ��100�������*/
	int(*ListCreateTail)(Linklist *L, int length);/*����β���뷨��ʼ��length��100���������*/
	int(*ListInsert)(Linklist *L, int data, int position);/*���������λ��֮ǰ*/
	int(*ListDelete)(Linklist *L, int poistion);/*ɾ�����λ�õĽ��*/
	int(*ListClear)(Linklist *L);/*�������*/
	int(*ListPrint)(Linklist *L);/*��ӡ���������*/

};







extern int LinkList_Init(Linklist *L, int length);
extern int LinkList_Print(Linklist *L);
extern int ListCreateTail(Linklist *L, int length);
extern int LinkList_Clear(Linklist *L);
extern int LinkList_Insert(Linklist *L, int data, int position);
extern int LinkList_Delete(Linklist *L, int position);