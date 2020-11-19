#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include "listg.h"

LinkList* CreateList(){
        LinkList *head;
        head = (LinkList*)malloc(sizeof(LinkList));
        head->next = NULL;
        return head;
}

int Size(LinkList *list){
        LinkList *p = list->next;
        int k = 0;
        while  (p) {
             k++;
             p = p->next;
        }
        return k;
}

void Insert(LinkList *l,int k, dataType x){
            if (k<1) exit(1);
            LinkList *p = l;
            int i = 0;
            while (p && i<k-1){
                        p = p->next;
                         i++;
            }
            if (!p) exit (1);
            LinkList *s =(LinkList*)malloc(sizeof(LinkList));
            s->data=x;
            s->next = p->next;
            p->next = s;
}

void Delete(LinkList *list, int k){
        if (k<1) exit (1);
        LinkList *p = list;
        int i = 0;
        while (p->next && i<k-1){
                    p = p->next;
                     i++;
        }
        if (p->next==NULL) exit(1);
        LinkList *q = p->next;
        p->next = q->next;
        free(q);
}

int Empty(LinkList *list) {
        return list->next == NULL;
}

dataType GetData(LinkList *list, int k) {
        if (k<1) exit (1);
        LinkList *p = list;
        int i = 0;
        while (p && i<k){
                p = p->next;
                 i++;
        }
        if (!p) exit(1);
        return p->data;
}

LinkList* Find(LinkList *list, dataType x) {
        LinkList *p = list->next;
        while (p && p->data!=x)
                    p = p->next;
        return p;
}

void Print(LinkList *l) {
            LinkList *p = l->next;
            while (p) {
                        printf("%d",p->data);
                        p = p->next;
            }
            printf("\n");
}

void ClearList(LinkList *l) {
             LinkList *p, *q;
             p = l->next;
             while (p) {
                        q = p;
                        p = p->next;
                        free (q);
             }
             l->next = NULL;
}

                                                                                                                                     

void CreatList(){
	
	LinkList *p, *q, *r;
	p = q = (LinkList*)malloc(sizeof(LinkList));
	p->no = 1;
	for (int i=2; i<=n; i++){
		r = (LinkList*)malloc(sizeof(LinkList));
		r->no = i;
		q->next = r;
		q = r;
	}
	q->next = p;
	q = p;
	return ;

}

void Delect()
{   
	LinkList *p, *q;
	int k = 0;
	while (q->next !=q){
		k++;
		if (k == m){
			p->next = q->next;
                	free(q);
                	q = p->next;
                	k = 0;
		}
		else{
			p = q;
        		q = q->next;
		}
	}

        printf("最后一个获胜者编号是: %d\n", q->no+1);
}




