#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int findLength(struct Node* head) {
    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int count = 0;
    struct Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }

    return count;

}

int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    struct Node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

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
    printf("%d",findLength(head));

}