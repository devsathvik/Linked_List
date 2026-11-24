#include<stdio.h>
#include<stdlib.h>

//===== Declare Imports here if required =====


struct Node{
    int data;
    struct Node* next;
};

//===== Declare Global Variables / Functions here if required =====


void solve(int N){

    //===== Declare Local Variables / Functions here if required =====


    struct Node* head = NULL;
    struct Node* tail = NULL;

    for(int i=0;i<N;i++){
        int x;
        scanf("%d",&x);

        //===== Write Your Logic Here =====
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

    //===== Write Your Logic Here =====
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = X;
    if(head == NULL){
        node -> next = node;
        head = node;
        tail = node;
    }
    else{
    tail -> next = node;
    tail = node;
    node -> next = head;
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

    //===== Declare Local Variables / Functions here if required =====


    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}