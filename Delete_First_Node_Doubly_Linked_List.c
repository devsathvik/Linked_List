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

    //===== Write Your Logic Here =====
    if(head == NULL) return;

    struct Node* del = head;
    head = head -> next;
    if(head != NULL){
        head -> prev = NULL;
    }
    free(del);

    struct Node* temp = head;
    int first = 1;
    while(temp != NULL){
        if(!first){
            printf(" ");
        }
        first = 0;
        printf("%d",temp -> data);
        temp = temp -> next;
    }

}

int main(){

    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}