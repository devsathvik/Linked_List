#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

//===== Declare Local Variables / Functions here if required =====


void solve(int N){

    struct Node* head = NULL;
    struct Node* tail = NULL;

    for(int i=0; i<N; i++){
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

    int position;
    scanf("%d",&position);

    //===== Write Your Logic Here =====
    struct Node* temp = head;

    for(int i = 1 ; i < position ; i++ ){
        temp = temp -> next;
    }

    if(temp -> prev == NULL){
        head = temp -> next;
    }
    else{
        temp -> prev -> next = temp -> next;
    }

    if(temp -> next == NULL){
        tail = temp -> prev;
    }
    else{
        temp -> next -> prev = temp -> prev;
    }

    free(temp);

    temp = head;
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