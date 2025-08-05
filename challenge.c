#include<stdio.h>
int main() {
    int num,i,u;
    printf("Enter number of elements: ");
    scanf("%d",&num);
    int integers[num];
    int find;
    int  count =0;
    // Loop from 'a' to 'z'
    printf("Enter %d integers\n", num);
    for (i =0; i <num; i++) {
        printf("Enter %d: ", i+1);
        scanf("%d",&integers[i]);
    }
    printf("Asks the user which number to search for: ");
    scanf("%d",&find);

    for (u =0; u <num; u++) {
        if(integers[u] == find){
            count += 1;
        }
        
    }
    printf("Total : %d\n", count);
    return 0;
}