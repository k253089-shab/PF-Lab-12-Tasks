#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size of integer array: ");
    scanf("%d", &n);

    int* arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d integers:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}
