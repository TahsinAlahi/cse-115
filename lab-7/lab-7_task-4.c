#include<stdio.h>
void main(){
    int num,sum=0;
    printf("Enter a number to check if it's pure: ");
    scanf("%d", &num);


    for(int i= 1; i<=num/2;i++){
        if(num%i==0) sum+=i;
    }
    if(num==sum) printf("%d is a pure number", num);
    else printf("%d is not a pure number", num);

    return 0;
}
