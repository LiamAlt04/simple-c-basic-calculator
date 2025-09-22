#include <stdio.h>

int main(){
    int x, y, a, b;

    printf("please give me your first number: ");
    scanf("%d", &x);

    printf("please give me your second number: ");
    scanf("%d", &y);

    int sum = x + y;
    printf("the sum is: %d\n", sum);

    printf("please give me your first number: ");
    scanf("%d", &a);

    printf("please give me your second number: ");
    scanf("%d", &b);

    int sub = x - y;
    printf("the sum is: %d\n", sub);



    return 0;
}