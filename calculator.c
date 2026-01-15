#include <stdio.h>
int main()
{
    int choice;
    float num1 , num2;

    while (1)
    {
        printf("---Simple Calculator--- \n");
        printf("1. Addition \n");
        printf("2. Substraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Exit \n");
        
        printf("Enter a choice (1-5): ");
        scanf("%d", &choice);
        
        if (choice == 5)
        {
            printf("Exiting Calculator \n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f%f", &num1 , &num2);

        switch (choice)
        {
            case 1:
            printf("Result: %.2f \n", num1 + num2);
            printf("\n");
            break;

            case 2:
            printf("Result: %.2f \n", num1 - num2);
            printf("\n");
            break;

            case 3:
            printf("Result: %.2f \n", num1 * num2);
            printf("\n");
            break;

            case 4:
            if (num2 != 0)
            {
                printf("Result: %.2f \n", num1 / num2);
                printf("\n");
            }
            else
            {
                printf("Unindentified number \n");
                printf("\n");
            }
            break;

            default:
            printf("Enter a valid choice");
            printf("\n");
        }
    }
    printf("Thanks!! \n");
    printf("\n");
    return 0;
}
