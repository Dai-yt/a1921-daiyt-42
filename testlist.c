#include "listg.h"


int main(int argc, char **argv) {
        LinkList * List = CreateList();
        Insert(List, 1, 40);
        Insert(List, 1, 20);
        Delete(List, 2);
        Insert(List, 1, 30);
        Insert(List, 1, 50);
        printf("链表的元素个数为: %d\n", Size(List));
        Print(List);
        printf("链表的第二个元素为:%d\n", GetData(List, 2));
        system("pause");
	



	CreatList();
	Delect();
    	printf("\n");
        
    	return 0;
}



