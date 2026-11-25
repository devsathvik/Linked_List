#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


void solve(int N){

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;
    Node* tail = NULL;

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

    //===== Write Your Logic Here =====
    Node* prev = head;
    for(int i = 0 ; i < N - 2 ; i++ ){
        prev = prev -> next;
    }
    Node* del = prev -> next;
    prev -> next = head;
    free(del);
    tail = prev;

    Node* temp = head;
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