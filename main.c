#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "calc.h"

enum CodeOperation
{
    ERROR_CODE = 0,
    SUM,
    DIFFERENCE,
    PRODUCT,
    FRACTION,
    FACTORIAL,
    SQUARE,
    EXIT,
    ASK_USER
};

unsigned char ask_usr_choice(void)
{
    printf("------------------------------CALC--------------------------------\n");
    printf("Choose Math operation to perform:\n");
    printf("1. Sum (a+b) \t \n");
    printf("2. Difference (a-b)\t\n");
    printf("3. Product (a*b) \t\n");
    printf("4. Fraction (a/b)\t\n");
    printf("5. Factorial !n\t\n");
    printf("6. Square sqrt(x)\t\n");
    printf("7.EXIT\n");
    printf("Enter code of operation: ");
    unsigned int code_operation = 0;
    scanf("%u", &code_operation);
    if(code_operation < 1 || code_operation > 7)
    {
        printf("Error: Code of %d not correct\n", code_operation);
        code_operation = 0;
    }
    return (unsigned char)code_operation;
}

bool ask_enter_values(enum CodeOperation code, int* a, int* b)
{
    if(a == NULL || b == NULL)
    {
        return false;
    }

    switch(code)
    {
            case SUM:
            case DIFFERENCE:
            case PRODUCT:
            case FRACTION:
                printf("Enter a: ");
                scanf("%d", a);
                printf("Enter b: ");
                scanf("%d", b);
            break;
            case FACTORIAL:
            case SQUARE:
                printf("Enter a: ");
                scanf("%d", a);
            break;
            case EXIT:
            case ASK_USER:
            case ERROR_CODE:
                return false;
            break;
    }

    return true;
}

int main(void)
{


    unsigned char state = ASK_USER;
    int a = 0;
    int b = 0;

    while (1)
    {
        a = 0;
        b = 0;

        switch (state)
        {
            case ERROR_CODE:
                state = ASK_USER;
            break;
            case SUM:
                ask_enter_values(state, &a, &b);
                printf("\n1. RESULT SUM: %d + %d = %ld\n", a, b, sum(a,b));
                state = ASK_USER;
            break;
            case DIFFERENCE:
                ask_enter_values(state, &a, &b);
                printf("\n2. RESULT DIFFERENCE: %d - %d = %ld\n", a, b, difference(a,b));
                state = ASK_USER;
            break;
            case PRODUCT:
                ask_enter_values(state, &a, &b);
                printf("\n3. RESULT PRODUCT: %d * %d = %ld\n", a, b, product(a,b));
                state = ASK_USER;
            break;
            case FRACTION:
                ask_enter_values(state, &a, &b);
                printf("\n4. RESULT FRACTION: %d / %d = %lf\n", a, b, fraction(a,b));
                state = ASK_USER;
            break;
            case FACTORIAL:
                ask_enter_values(state, &a, &b);
                printf("\n4. RESULT FACTORIAL: %d!= %u\n", a, factorial(a));
                state = ASK_USER;
            break;
            case SQUARE:
                ask_enter_values(state, &a, &b);
                printf("\n4. RESULT SQUARE: %d!= %lf\n", a, square_root(a));
                state = ASK_USER;
            break;
            case EXIT:
                exit(0);
            break;
            case ASK_USER:
                state = ask_usr_choice();
            break;
        }
    }


    return 0;
}
