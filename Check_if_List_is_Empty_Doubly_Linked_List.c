#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    Node* head = NULL;

    //===== Write Your Logic Here =====
    if(n == 0){
        printf("True");
    }

}