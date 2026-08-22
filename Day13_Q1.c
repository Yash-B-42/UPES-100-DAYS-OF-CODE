// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main () {
    int a, b;
    char op;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    switch (op) {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    case '%':
        printf("%d", a%b);
        break;
    default:
        printf("Invalid");
    return 0;
    }
}
