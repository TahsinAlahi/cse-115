#include<stdio.h>

int search(int arr[], int size, int key){
    int is_found = 0;
    for(int i =0; i< size; i++){
        if(arr[i] == key){
            is_found = 1;
            break;
        }
    }
    return is_found;
}

void main(){
    int size, key;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the array element no %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Search key: ");
    scanf("%d", &key);

    int result = search(arr,size,key);

    if(result) printf("Found");
    else printf("Not found");

    return 0;
}
