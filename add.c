#include <stdio.h>

int main() {
    int num3, num9, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num3);
    
    printf("Enter the second number: ");
    scanf("%d", &num9);
    
    sum = num3 + num9; //for sum
    
    printf("The sum of %d and %d is %d.", num3, num9, sum);
    
    return 0;
}
