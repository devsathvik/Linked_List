#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


void printList(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

//===== Declare Local Variables / Functions here if required =====


void solve(int N){

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
    Node* del = head;
    head = head -> next;
    tail -> next = head;
    free(del);
    del = NULL;

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