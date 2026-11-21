#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {

    //===== Declare Local Variables / Functions here if required =====


    int n;
    scanf("%d", &n);

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = x;
        newNode->next = NULL;

        //===== Write Your Logic Here =====


    }

    //===== Write Your Logic Here =====
    printf("%d",n);

    return 0;
}