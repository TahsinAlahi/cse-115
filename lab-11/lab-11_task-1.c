#include<stdio.h>

int main(){
    int r,c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the number for %dth row and %d column: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The even numbers are:\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] % 2==0) printf("%d\n", arr[i][j]);
        }
    }
}
