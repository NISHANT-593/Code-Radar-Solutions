#include<stdio.h>
int main(){
    int num , n;
    scanf("% d %d",&num ,&n);
    if( num & (~(1<<n))){
    printf("6\n");
    }else{
        printf("5");
    }
    }

