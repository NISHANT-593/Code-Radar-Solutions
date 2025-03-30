# include<stdio.h>
int main{
    int num , n;
    scanf("%d %d",&num ,&n);
    if ((num >> n)&1){
        printf("1\n")
    }else{
        printf("0")
    }
}