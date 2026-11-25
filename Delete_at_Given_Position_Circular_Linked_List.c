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

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = NULL;

        //===== Write Your Logic Here =====
        if(head == NULL){
            head = newNode;
            tail = newNode;
            tail -> next = head;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
            tail -> next = head;
        }

    }

    int position;
    scanf("%d",&position);

    //===== Write Your Logic Here =====
    if(position == 1){
        if(head == tail){
            free(head);
            head = tail = NULL;
        }
        else{
            struct Node* temp = head;
            head = head -> next;
            tail -> next = head;
            free(temp);
        }
    }
    else{
        struct Node* prev = head;
        for(int i = 1 ; i < position - 1 ;  i++ ){
            prev = prev -> next;
        }
        struct Node* del = prev -> next;
        prev -> next = del -> next;
        if(del == tail){
            tail = prev;
        }
        free(del);
    }

    struct Node* cur = head;
    int first = 1;
    do{
        if(!first){
            printf(" ");
        }
        printf("%d",cur -> data);
        first = 0;
        cur = cur -> next;
    }while(cur != head);

}

int main(){

    //===== Declare Local Variables / Functions here if required =====


    int N;
    scanf("%d",&N);

    solve(N);

    return 0;
}