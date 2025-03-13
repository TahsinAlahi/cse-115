#include<stdio.h>
#include<math.h>

void main(){
    int a=1,b=4,c=3;
    printf("Enter the values of a b c: ");
    scanf("%d %d %d", &a,&b,&c);
    int dependent_val = pow(b,2) - (4*a*c);

    if(dependent_val<0){
        printf("No real root exist");
        return 0;
    }

    int root1 = (-b+sqrt(dependent_val))/(2*a);
    int root2 = (-b-sqrt(dependent_val))/(2*a);
    printf("root1 = %d\nroot2 = %d", root1, root2);
}
