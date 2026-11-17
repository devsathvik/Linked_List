#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int numNodes;
    scanf("%d", &numNodes);

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < numNodes; i++) {
        int value;
        scanf("%d", &value);

        //===== Write Your Logic Here =====
        Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode -> data = value;
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

    int newValue;
    scanf("%d", &newValue);

    //===== Write Your Logic Here =====
    Node* lastnode = (struct Node*)malloc(sizeof(struct Node));
    lastnode -> data = newValue;
    tail -> next = lastnode;
    tail = lastnode;

    Node* temp = head;
    int first = 1;
    while(temp != NULL){
        if(!first){
            printf(" ");
        }
        printf("%d",temp -> data);
        temp = temp -> next;
        first = 0;
    }

}