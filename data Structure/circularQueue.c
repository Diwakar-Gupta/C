# include <stdio.h>
# include <stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int items;
    int* Q;
};

int init(struct queue *q, int size){
    q->size = size;
    q->Q = (int*)malloc(sizeof(int)*size);
    q->front = -1;
    q->rear = -1;
    q->items=0;
    printf("size: %d\n",q->size);
    return 1;
} ;

int insert(struct queue *q,int item){
    if((q->front==0&&q->rear==(q->size-1))||(q->front==(q->rear+1)))
        return -1;
    if(q->rear==-1&&q->front==-1){
        q->front = 0;
        q->rear = 0;
    }
    else if(q->rear==(q->size-1))q->rear=0;
    else q->rear++;

    q->Q[q->rear] = item;
    q->items++;
    return 1;
};

int get(struct queue *q){
    if(q->rear==-1&&q->front==-1)
        return -1;
    int item = q->Q[q->front];

    q->front++;
    if(q->front == (q->rear+1)){q->front=-1;q->rear=-1;}
    if(q->front==q->size)q->front = 0;
    q->items--;
    return item;
};

void printAll(struct queue *q){
    int i =q->front,prnt=0;
    printf("[");
    for(;prnt!=q->items;prnt++){
        printf("%d",q->Q[i]);
        if((prnt+1)!=q->items)printf(",");
        i++;
        if(i>=q->size)
            i=0;
    }
    printf("]\n");
};

int main(){
    struct queue q;
    struct queue *cq=&q;

    int size=0;
    printf("enter size of queue: ");
    scanf("%d",&size);
    if(!init(cq,size))printf("cant init queue\n");
    
    printf("\ni: to insert\nf: to fetch\na: see All\ns: see meta data\nh: help");
    while(1){
        printf("\n>>> ");
        char ch='x';
        scanf("%c",&ch);
        int item=0,res=0;
        
        switch(ch){
            case 'i':
                item = 0;
                printf("enter item: ");
                scanf("%d",&item);
                res = insert(cq,item);
                if(res == 1)
                    printf("item inserted\n");
                else printf("cant inserted\n");
                break;
            case 'f':
                item = get(cq);
                if(item == -1)printf("cant fetch\n");
                else printf("item fetched is: %d\n",item);
                break;
            case 's':
                printf("size: %d\nfront: %d\nrear: %d\n",q.items,q.front,q.rear);
                break;
            case 'a':
                printAll(cq);
                break;
            case 'h':
		printf("\ni: to insert\nf: to fetch\na: see All\ns: see meta data\n");
            default : break;
        }
       
    }

    return 0;
};
