#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


struct Node {
    int data;
    struct Node* next;
};

//===== Declare Global Variables / Functions here if required =====


int findMax(struct Node* head) {

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int max = head -> data;
    struct Node* temp = head;
    do{
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp -> next;
    }while(temp != head);

    return max;

    
}

int main() {

    //===== Declare Local Variables / Functions here if required =====


    int n;
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL;

    for (int i = 0; i < n; ++i) {

        int x;
        scanf("%d", &x);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = NULL;

        //===== Write Your Logic Here =====


        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    if (temp != NULL) {
        temp->next = head;
    }

    //===== Write Your Logic Here =====


    printf("%d\n", findMax(head));

    return 0;
}