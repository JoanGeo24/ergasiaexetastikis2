#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum=0, num, limit, inserts=1;
    
    printf("Enter a number to be the limit\n");
    scanf("%d", &limit);
    printf("Enter a number\n");
    scanf("%d", &num);
    sum +=num;
    
    while(1) {
    if (sum<limit) {
        printf("Enter another number\n");
        scanf("%d", &num);
        sum +=num;
        inserts++;
    } else {
        break;
    }}
    
    printf("The sum is %d and the number of times that you entered a number until you reach the limit are: %d\n", sum, inserts);
    return 0;
}
