#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

int findMax(Node* head) {
    //===== Write Your Logic Here =====
    if(head == NULL){
        return 0;
    }

    int max = head -> data;
    Node *temp = head -> next;

    while(temp != NULL){
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp -> next;
    }

    return max;

}

int main() {
    int numNodes;
    scanf("%d", &numNodes);

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < numNodes; i++) {
        int value;
        scanf("%d", &value);

        //===== Write Your Logic Here =====
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
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

    //===== Write Your Logic Here =====
    int result = findMax(head);
    printf("%d",result);

}