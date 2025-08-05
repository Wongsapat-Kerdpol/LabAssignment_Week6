#include<stdio.h>
int main() {
    int num,i,u,avg;
    num =10;
    int even = 0;
    int odd = 0;
    int mark[num];

    // Loop from 'a' to 'z'
    for (i =0; i <num; i++) {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d",&mark[i]);
    }
    for (u =0; u <num; u++) {
        
        avg = avg + mark[u];
        if(mark[u]%2 == 0){
            even += 1;
        }
        else if(mark[u]%2 != 0){
            odd +=1;

        }
        
    }
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
    
    return 0;
}