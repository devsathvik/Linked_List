#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;
    Node* tail = NULL;
    int max = -1;

    for (int i = 0; i < n; ++i) {
        int val;
        scanf("%d", &val);

        //===== Write Your Logic Here =====
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode -> data = val;
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
    max = head -> data;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp -> next;
    }

    printf("%d",max);

}