#include<stdio.h>
void main(){
    int num, fac=1;
    printf("Enter you factorial number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++) {
            fac = fac * i;
    }
    printf("%d factorial is: %d",num, fac);
    return 0;
}

