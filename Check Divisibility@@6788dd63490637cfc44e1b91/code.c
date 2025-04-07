#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num % 5 == 0){
        printf("Divisible\n");
    }
    else if(num % 11 == 0){
        printf("Divisible\n");
    }else{
        printf("Not Divisible");
    }
    return 0;
}