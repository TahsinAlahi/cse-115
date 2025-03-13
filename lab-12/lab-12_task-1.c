#include<stdio.h>

void inputFunction(int r,int c,int arr[r][c]){

    for(int i=0; i<r; i++ ){
        for(int j=0; j<c; j++){
            printf("Enter number for %d row and %d column: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

}

void main(){
    int r,c;
    printf("Enter the number of columns and rows: ");
    scanf("%d%d", &r, &c);

    int A[r][c], B[r][c];
    int result[r][c];

    printf("Enter the value of A matrix: \n");
    inputFunction(r,c,A);
    printf("Enter the value of B matrix: \n");
    inputFunction(r,c,B);

    for(int i=0;i<r; i++){
        for(int j=0; j<c;j++){
            result[i][j] = (5*A[i][j])+(7*B[i][j])+9;
        }
    }

    printf("The result matrix is: \n");
    for(int i=0;i<r; i++){
        for(int j=0; j<c;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    return;
}
