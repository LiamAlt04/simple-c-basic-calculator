#include <stdio.h>

int main(){
    int x, y, a, b, m, n;

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

    printf("please give me your first number: ");
    scanf("%d", &m);

    printf("please give me your second number: ");
    scanf("%d", &n);

    int mult = m * n;
    printf("the sum is: %d\n", mult);



    return 0;
}