#include<stdio.h>
int main() {
    int original[]= {1,2,3,4,5,6,7,8,9};
    int u,temp;
    int num = 8;
  
    for (u =0; u <num; u++) {
        temp = original[u];
        original[u] = original[num];
        original[num] = temp;
        num -=1;
    }
    printf("Reversed Array: ");
    for (u = 0; u < 9; u++)
    {
        printf("%d, ", original[u]);
    }
    return 0;
}