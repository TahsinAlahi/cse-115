#include<stdio.h>
void main(){
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);


    for(int i=0; i<num; i++){
        int start=1;
        if(i%2==0) start=2;

        for(int j=start; j<=i; j+=2){
                printf("%d ",j);
            }
        printf("\n");
    }
}
