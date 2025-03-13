#include<stdio.h>
void main(){
    int num1,num2;
    char op;
    float result;
    printf("Enter your operator (+,-,*,/): ");
    scanf("%c", &op);
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(op){
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
        default:
            printf("Enter a valid operator.");
            return 0;
    }

   printf("%d %c %d = %.2f", num1,op, num2, result);
    return 0;
}
