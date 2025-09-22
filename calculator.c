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

void divide() {
    float c, d, div;
    int check;

    printf("Please give me your first number: ");
    check = scanf("%f", &c);
    if (check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }

    printf("Please give me your second number: ");
    check = scanf("%f", &d);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }

    if (d == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        div = c / d;
        printf("the sum is: %f\n", div);
    }
}

void multiply(){
    float n, m, mult;
    int check;
    printf("please give me your first number: ");
    check = scanf("%f", &m);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }
    printf("please give me your second number: ");
    check = scanf("%f", &n);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }
    mult = m * n;
    printf("the sum is: %f\n", mult);
}

void subtract(){
    
    float a, b, sub;
    int check;
    printf("please give me your first number: ");
    check = scanf("%f", &a);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }
    
    printf("please give me your second number: ");
   check = scanf("%f", &b);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }
    sub = a - b;    
    printf("the sum is: %f\n", sub);
}

void add(){
    float x, y, sum;
    int check;
     printf("please give me your first number: ");
    check = scanf("%f", &x);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }

    printf("please give me your second number: ");
    check = scanf("%f", &y);
    if(check != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return;
    }

    sum = x + y;
    printf("the sum is: %f\n", sum);
}