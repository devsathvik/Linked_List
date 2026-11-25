#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void solve(int N){

    struct Node* head = NULL;
    struct Node* tail = NULL;

    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode -> data = x;
        newNode -> next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
            tail -> next = head;
        }
    }

    int X;
    scanf("%d",&X);

    int position;
    scanf("%d",&position);

    struct Node* prev = head;
    for(int i = 1 ; i < position - 1 ; i++ ){
        prev = prev -> next;
    }

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = X;
    if(N == 0){
        head = node;
        tail = node;
        node -> next =  head;
    }
    else if(position == 1){
        node -> next = head;
        tail -> next = node;
        head = node;
    }
    else{
    node -> next = prev -> next;
    prev -> next = node;
    }

    struct Node* temp = head;
    int first = 1;
    do{
        if(!first){
            printf(" ");
        }
        printf("%d",temp -> data);
        first = 0;
        temp = temp -> next;
    }while(temp != head);
}

int main(){

    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}