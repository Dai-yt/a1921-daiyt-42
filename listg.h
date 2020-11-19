#ifndef listg_h
#define listg_h
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<malloc.h>
#define n 11
#define m 3



typedef int dataType;
typedef struct node{
        dataType data;
	int no;
        struct node *next;
}LinkList;



LinkList* CreateList();
int Size(LinkList *list);
void Insert(LinkList *l,int k, dataType x);
void Delete(LinkList *list, int k);
int Empty(LinkList *list);
dataType GetData(LinkList *list, int k);
LinkList* Find(LinkList *list, dataType x);
void Print(LinkList *l);
void ClearList(LinkList *l);



void CreatList();
void Delect();
void Print();



#endif
