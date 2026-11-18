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
        }

    }

    int X;
    scanf("%d",&X);

    //===== Write Your Logic Here =====
    int found = 0;
    struct Node* temp = head;
    while(temp != NULL){
        if(temp -> data == X){
            found = 1;
            break;
        }
        temp = temp -> next;
    }

    if(found){
        printf("True");
    }
    else{
        printf("False");
    }

}

int main(){

    //===== Declare Local Variables / Functions here if required =====


    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}