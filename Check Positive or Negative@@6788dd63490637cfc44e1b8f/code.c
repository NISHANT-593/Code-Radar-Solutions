#include<stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if(num1 > 0){
        printf("Positive\n");
        }
    else if(num1 < 0){
      printf("Negative\n");
    }
       
    else{
        printf("Zero");
    }
    return 0;
}