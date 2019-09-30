# include <stdio.h>
# include <stdlib.h>

struct stor{
    int value;
    struct stor *next;
};

struct linkedList
{
    struct stor head;
    struct stor tail;
};

int add(struct linkedList *l,int data){
    
}

int main(){

    struct linkedList l;

    printf("%d\n%d\n",l.head.next->next,sizeof(l.head.next->value));
    

    return 0;
}