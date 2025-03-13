#include<stdio.h>
void main(){
    int limit = 200;

    for(int i = 1; i <= limit; i++){
        int stored_num = i;
        long int sum = 0;

        while(stored_num !=0){
            int curr_num = stored_num % 10, fact=1;
            for(int j = 1; j<=curr_num; j++){
                fact *= j;
            }
        sum += fact;
        stored_num /=10;
        }

        if(sum == i){
            printf("%d is a strong number.\n",i);
        }
    }
    return 0;
}
