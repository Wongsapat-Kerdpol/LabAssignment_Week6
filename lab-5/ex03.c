#include<stdio.h>
int main() {
    int num,i,u;
    int avg =0;
    num =5;
    int temp;
    int mark[num];

    // Loop from 'a' to 'z'
    for (i =0; i <num; i++) {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d",&mark[i]);
    }
    for (u =0; u <num; u++) {
        
        avg = avg + mark[u];
        if(mark[u] > mark[u+1]){
            temp = mark[u+1];
            mark[u+1] = mark[u];
            mark[u] = temp;

        }
        
    }
    printf("Total Marks : %d\n",avg);
    printf("Highest Marks: %d\n",mark[5]);
    
    return 0;
}