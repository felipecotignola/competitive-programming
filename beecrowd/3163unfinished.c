#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int a;
    struct Node* next;
}Node;
Node* newNode(int a){
    Node* node=malloc(sizeof(Node));
    node->a=a;
    node->next=null;
}
typedef struct Queue{
    Node* h;
    Node* t;
    int q;
}
Queue* newQueue(){
    Node* node=newNode(-1);
    Queue* q=malloc(sizeof(Queue));
    q->h=node;
    q->t=node;
    q->q=0;
    return q;
}
void enqueue(Queue* q,int a){
    Node* node=newNode(a);
    q->t->next=node;
    q->t=node;
    q->q++;
}
int dequeue(Queue* q){
    if(q->q>0){
     Node* tmp=q->h->next;
     int answ=tmp->a;
     q->h->next=tmp->next;
     tmp->next=NULL;
     if(q->t==tmp){
         q->t=q->h;
     }
     free(tmp);
     q->q--;
     return answ;
    }
}
int main() {
    Queue* array[4];
    for(int i=0;i<4;i++){
        array[i]=newQueue(-1);
    }
    return 0;
}
