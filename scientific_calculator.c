#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n------ Scientific Calculator ------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Power (x^y)\n");
        printf("7. Natural Log (ln)\n");
        printf("8. Log base 10\n");
        printf("9. Sin\n");
        printf("10. Cos\n");
        printf("11. Tan\n");
        printf("12. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 12) {
            printf("Exiting calculator...\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not allowed\n");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%f", &a);
                if (a >= 0)
                    printf("Result = %.2f\n", sqrt(a));
                else
                    printf("Invalid input for square root\n");
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &a, &b);
                printf("Result = %.2f\n", pow(a, b));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%f", &a);
                if (a > 0)
                    printf("Result = %.2f\n", log(a));
                else
                    printf("Invalid input for ln\n");
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%f", &a);
                if (a > 0)
                    printf("Result = %.2f\n", log10(a));
                else
                    printf("Invalid input for log10\n");
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%f", &a);
                printf("Result = %.2f\n", sin(a * M_PI / 180));
                break;

            case 10:
                printf("Enter angle in degrees: ");
                scanf("%f", &a);
                printf("Result = %.2f\n", cos(a * M_PI / 180));
                break;

            case 11:
                printf("Enter angle in degrees: ");
                scanf("%f", &a);
                if (fmod(a, 180) == 90 || fmod(a, 180) == -90) {
                    printf("Result = Undefined (Infinity)\n");
                } 
                else {
                    printf("Result = %.2f\n", tan(a * M_PI / 180));
                }
            
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}







