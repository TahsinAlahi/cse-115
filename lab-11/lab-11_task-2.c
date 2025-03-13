#include<stdio.h>
int main(){
    int r,c,sum=0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("Enter the number for %dth row and %d column: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
            printf("(%d %d)\n", i, j);
            if(i==0 || j==c-1 || i==r-1|| j==0){
                sum+=arr[i][j];
            }
        }
    }

    printf("The sum is : %d", sum);
}
