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
            tail -> next = head;
        }

    }

    int searchValue;
    scanf("%d", &searchValue);

    //===== Write Your Logic Here =====
   struct Node* temp = head;
   int valid = 0;
   for(int i = 1 ; i <= numNodes ; i++ ){
    if(temp -> data == searchValue){
        valid = 1;
        break;
    }
    temp = temp -> next;
   }

   if(valid){
    printf("True");
   }
   else{
    printf("False");
   }
}