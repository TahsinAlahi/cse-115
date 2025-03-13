#include<stdio.h>
int seriesSum1(int a){
    int sum =0;
    for(int i=0; i<a; i++){
        if(i % 2==0) sum += (a-i)*(a-i);
        else sum -= (a-i)*(a-i);
    }
    return sum;
}

int main(){
   int a;
   printf("Enter a number: ");
   scanf("%d", &a);
   printf("The sum of the series is %d", seriesSum1(a));
}
