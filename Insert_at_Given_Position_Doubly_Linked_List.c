#include<stdio.h>
#include<stdlib.h>

//===== Declare Imports here if required =====


struct Node{
    int data;
    struct Node* prev;
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

    int position;
    scanf("%d",&position);

    //===== Write Your Logic Here =====
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p -> data = X;
    p -> next = NULL;
    p -> prev = NULL;

    if(position == 1){
        p -> next = head;
        if(head != NULL){
            head -> prev = p;
        }
        head = p;
    }
    else{
    struct Node* curr = head;
    for(int i = 1 ; i < position - 1 ; i++ ){
        curr = curr -> next;
    }
    p -> next = curr -> next;
    p -> prev = curr;
    if(curr -> next != NULL){
        curr -> next -> prev = p;
    }
    curr -> next = p;
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

    //===== Declare Local Variables / Functions here if required =====


    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}