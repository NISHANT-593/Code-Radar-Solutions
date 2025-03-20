#include<stdio.h>
int main(){
    int num1 , num2 ,x;
    scanf("%d %d %d",&num1 ,&num2,&x);
    if (num1 >= x && num2 >= x){
        printf("True\n");
    }else{
        printf("False");
    }
    return 0;
}