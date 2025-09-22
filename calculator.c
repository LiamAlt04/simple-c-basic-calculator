#include <stdio.h>

float main(){
    float x, y, a, b, m, n, c,d;
    float div;

    printf("please give me your first number: ");
    scanf("%f", &x);

    printf("please give me your second number: ");
    scanf("%f", &y);

    float sum = x + y;
    printf("the sum is: %f\n", sum);

    printf("please give me your first number: ");
    scanf("%f", &a);

    printf("please give me your second number: ");
    scanf("%f", &b);

    float sub = a - b;    
    printf("the sum is: %f\n", sub);

    printf("please give me your first number: ");
    scanf("%f", &m);

    printf("please give me your second number: ");
    scanf("%f", &n);

    float mult = m * n;
    printf("the sum is: %f\n", mult);

    printf("Please give me your first number: ");
    scanf("%f", &c);

    printf("Please give me your second number: ");
    scanf("%f", &d);

    if (d == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        div = c / d;
        printf("the sum is: %f\n", div);
    }
    



    return 0;
}