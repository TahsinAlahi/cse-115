#include<stdio.h>

int sountSearchKey(int arr[], int size, int key){
    int count=0;
    for(int i =0; i< size; i++){
        if(arr[i]==key) count++;
    }
    return count;
}

int main(){
    int size, key;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++){
        printf("Enter array element no %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Search key: ");
    scanf("%d", &key);

    int count = sountSearchKey(arr, size, key);
    printf("Search key appears %d times.", count);
    return 0;
}
