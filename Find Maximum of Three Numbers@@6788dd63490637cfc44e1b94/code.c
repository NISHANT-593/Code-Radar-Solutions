#include<stdio.h>
int main(){
    int  num1,num2,num3;
    scanf("%d %d %d %d",&num1,&num2,&num3);
    int max;
    if(num1>=num2 && num1>=num3){
        max=num1;
    }else if(num2>=num1 && num2>=num3){
        max=num2;
    }else{
        max = num3;
    }
    printf("%d",max);
   return 0;
    
}