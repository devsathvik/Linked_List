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

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        } else {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }

        //===== Write Your Logic Here =====


    }

    int x;
    scanf("%d", &x);

    //===== Write Your Logic Here =====
    int count = 0;
    Node* temp = head;
    do{
        if(temp -> data == x){
            count++;
        }
        temp = temp -> next;
    }while(temp != head);

    printf("%d",count);

}