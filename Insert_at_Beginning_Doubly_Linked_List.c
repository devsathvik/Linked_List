#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
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
        newNode -> prev = NULL;
        newNode -> next = NULL;

        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    int X;
    scanf("%d",&X);

    if(N == 0){
        printf("0");
    }
    else{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p -> data = X;
    p -> next = head;
    head -> prev = p;
    head = p;
    }

    struct Node* temp = head;
    int first = 1;
    while(temp != NULL){
        if(!first){
            printf(" ");
        }
        printf("%d",temp -> data);
        first = 0;
        temp = temp -> next;
    }
}

int main(){

    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}