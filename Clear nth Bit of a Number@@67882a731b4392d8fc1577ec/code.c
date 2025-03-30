#include <stdio.h>

void clearNthBit(int *num, int n) {
    
    int mask = ~(1 << n);
    
   
    *num = *num & mask;
}

int main() {
    int num = ;  
    int n = ;     

    printf("Before clearing the %dth bit: %d\n", n, num);
    
    clearNthBit(&num, n);  
    
    printf("After clearing the %dth bit: %d\n", n, num);
    
    return 0;
}