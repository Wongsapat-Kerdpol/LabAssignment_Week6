#include<stdio.h>
int main() {
    int num,i,u, answer;
    num =10;
    int value[num];
    
    // Loop from 'a' to 'z'
    for (i =0; i <num; i++) {
        printf("Enter the value %d here: ", i+1);
        scanf("%d",&value[i]);
        answer = value[i];
    }  
    printf("Values in arry are: ");
    for (u = 0; u < 10; u++)
    {
       
        
        printf("%d, ", value[u]);
    }

    return 0;
}