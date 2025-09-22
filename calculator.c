#include <stdio.h>

void divide();
void multiply();
void subtract();
void add();

float main(){
   int choice;

    printf("==== Simple Calculator ====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an operation (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: add(); break;
        case 2: subtract(); break;
        case 3: multiply(); break;
        case 4: divide(); break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}

void divide(){
    float c, d, div;
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
}

void multiply(){
    float n, m, mult;
    printf("please give me your first number: ");
    scanf("%f", &m);

    printf("please give me your second number: ");
    scanf("%f", &n);

    mult = m * n;
    printf("the sum is: %f\n", mult);
}

void subtract(){
    
    float a, b, sub;
    printf("please give me your first number: ");
    scanf("%f", &a);

    printf("please give me your second number: ");
    scanf("%f", &b);

    sub = a - b;    
    printf("the sum is: %f\n", sub);
}

void add(){
    float x, y, sum;
     printf("please give me your first number: ");
    scanf("%f", &x);

    printf("please give me your second number: ");
    scanf("%f", &y);

    sum = x + y;
    printf("the sum is: %f\n", sum);
}