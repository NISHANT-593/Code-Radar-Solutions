#include<stdio.h>
int main() {
    int num ;
    int lsb =num &1;
    if (lsb ==1){
        printf("Set\n");
    }else{
        printf("Not Set");
    }
    return 0;
}