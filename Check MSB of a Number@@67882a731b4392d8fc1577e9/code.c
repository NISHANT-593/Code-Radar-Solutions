#include<stdio.h>
int main()
 void checkMSB (int num){
    int mask =1  <<31;
    if (num & mask){
        printf("Set\n");
    }else{
        printf("Not Set");
        
    }
}