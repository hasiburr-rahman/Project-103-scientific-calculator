#include <stdio.h>
#include <math.h>

void menu();
void calculation(int choice);

int main() {
    int choice = 0;

    while (choice != 9) { 
        menu(); 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 9) {
            printf("End!! Goodbye!\n");
            break;
        }

        calculation(choice); 
        printf("\n");
    }

    return 0;
}

void menu() {
    printf("Welcome to the Scientific Calculator!!\n");
    printf("Please select an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Square Root (√x)\n");
    printf("7. Trigonometric Functions (sin, cos, tan)\n");
    printf("8. Logarithmic Value (log(x))\n");
    printf("9. Exit\n");
}

void calculation(int choice) {
    double num1, num2, result;

    switch (choice) {
        case 1: 
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("The sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 2: 
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("The difference between %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 3:
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("The product of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
            break;
        case 4:
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            if (num2 != 0) { 
                result = num1 / num2;
                printf("The division of %.2lf by %.2lf is: %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5: 
            printf("Enter the first integer: ");
            int int1, int2;
            scanf("%d", &int1);
            printf("Enter the second integer: ");
            scanf("%d", &int2);
            if (int2 != 0) { 
                printf("The modulus of %d by %d is: %d\n", int1, int2, int1 % int2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        case 6: 
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) { 
                result = sqrt(num1);
                printf("The square root of %.2lf is: %.2lf\n", num1, result);
            } else {
                printf("Error: Square root of negative numbers is not defined.\n");
            }
            break;
        case 7: 
            printf("Enter an angle in radians: ");
            scanf("%lf", &num1);
            printf("sin(%.2lf) = %.2lf\n", num1, sin(num1));
            printf("cos(%.2lf) = %.2lf\n", num1, cos(num1));
            printf("tan(%.2lf) = %.2lf\n", num1, tan(num1));
            break;
        case 8:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 > 0) { 
                result = log(num1);
                printf("The natural logarithm of %.2lf is: %.2lf\n", num1, result);
            } else {
                printf("Error: Logarithm of non-positive numbers is not defined.\n");
            }
            break;
        case 9: 
            printf("Exiting the calculator. Goodbye!\n");
            break;
        default: 
            printf("Invalid choice. Please select a valid option.\n");
    }
}