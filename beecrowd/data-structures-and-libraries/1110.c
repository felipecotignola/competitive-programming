#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int* remainingCards;
    int* discardedCards;
    int top,bottom,quantity,capacity,discartedIndex;
}Deck;

void fill(Deck* deck){
    for(int i=1;i<=(*deck).capacity;i++){
        (*deck).remainingCards[++(*deck).bottom]=i;
    }
}

void set(Deck* deck,int n){
    (*deck).remainingCards=malloc(n*sizeof(int));
    (*deck).discardedCards=malloc((n-1)*sizeof(int));
    (*deck).top=0;
    (*deck).bottom=-1;
    (*deck).quantity=n;
    (*deck).capacity=n;
    (*deck).discartedIndex=0;
    fill(deck);
}

int remov(Deck* deck){
    int resp=(*deck).remainingCards[(*deck).top];
    (*deck).top=((*deck).top+1)%(*deck).capacity;
    (*deck).quantity--;
    (*deck).bottom=((*deck).bottom+1)%(*deck).capacity;
    (*deck).remainingCards[(*deck).bottom]=(*deck).remainingCards[(*deck).top];
    (*deck).top=((*deck).top+1)%(*deck).capacity;
    return resp;
}

void loop(Deck* deck){
    while((*deck).quantity>=2){
        (*deck).discardedCards[(*deck).discartedIndex]=remov(deck);
        (*deck).discartedIndex++;
    }
}

void print(Deck* deck){
    printf("Discarded cards: ");
    for(int i=0;i<(*deck).discartedIndex;i++){
        if(i!=(*deck).discartedIndex-1){
            printf("%d, ",(*deck).discardedCards[i]);
        }
        else{
            printf("%d\n",(*deck).discardedCards[i]);
        }
    }
    printf("Remaining card: %d\n",(*deck).remainingCards[(*deck).top]);
}

int main() {
    int n;
    scanf("%d",&n);

    while(n!=0){
        Deck deck;
        set(&deck,n);
        loop(&deck);
        print(&deck);
        scanf("%d",&n);
    }

    return 0;
}
