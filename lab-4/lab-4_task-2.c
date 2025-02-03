#include<stdio.h>
void main(){
    int num;
    printf("Enter a number to check if it's odd or even: ");
    scanf("%d", &num);

    if(num%2==0) printf("%d is a even number", num);
    else printf("%d is an odd number",num);

    return 0;
}
