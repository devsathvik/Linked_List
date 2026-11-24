#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int min = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("%d",min);

}