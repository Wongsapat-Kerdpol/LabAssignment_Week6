
#include <stdio.h>
int main() {
    int num = 8;
    int number[num], i;
    int max, min;


    for (i = 0; i < num; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    max = number[0];
    min = number[0];
    for (i = 1; i < num; i++) {
        if (number[i] > max)
            max = number[i];
        if (number[i] < min)
            min = number[i];
    }
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
    return 0;
}
