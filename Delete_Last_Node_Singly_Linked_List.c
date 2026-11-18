#include<stdio.h>
#include<stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


struct Node{
    int data;
    struct Node* next;
};

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

    //===== Write Your Logic Here =====
    if(head -> next == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct Node* prev = head;
        while(prev -> next -> next != NULL){
            prev = prev -> next;
        }

        free(prev -> next);
        prev -> next = NULL;

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

}

int main(){

    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}