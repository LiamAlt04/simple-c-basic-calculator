#include <stdio.h>

int main(){
    int x, y;

    printf("please give me your first number: ");
    scanf("%d", &x);

    printf("please give me your second number: ");
    scanf("%d", &y);

    int sum = x + y;
    printf("the sum is: %d\n", sum);

    return 0;
}