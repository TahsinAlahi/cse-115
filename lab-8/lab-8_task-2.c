#include<stdio.h>
void main(){
    int row = 0;

    printf("Enter a number: ");
    scanf("%d", &row);

    int nsp = row*2-1;
    int nst=1;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=nsp;j++){
            printf(" ");
        }
        for(int j=1; j<=nst; j++){
            printf("*");
        }
        nsp-=2;
        nst+=2;
        printf("\n");
    }
}

