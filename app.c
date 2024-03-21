#include <stdio.h>

// int main() {
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);
//     printf("You entered: %d\n", a);
//     return 0;
// }

// int main() {
//     int a = 10, b = 20;
//     printf("%d\n", a + b);  // Addition
//     printf("%d\n", a - b);  // Subtraction
//     printf("%d\n", a / b);  // Division
//     printf("%d\n", a % b);  // Modulus
//     return 0;
// }

// int main() {
//     char operator;
//     int num1, num2;

//     printf("Enter operator (+, -, *, /): ");
//     scanf(" %c", &operator);

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     switch(operator) {
//         case '+':
//             printf("Result: %d\n", num1 + num2);
//             break;
//         case '-':
//             printf("Result: %d\n", num1 - num2);
//             break;
//         case '*':
//             printf("Result: %d\n", num1 * num2);
//             break;
//         case '/':
//             if(num2 != 0)
//                 printf("Result: %d\n", num1 / num2);
//             else
//                 printf("Error: Division by zero\n");
//             break;
//         default:
//             printf("Error: Invalid operator\n");
//     }

//     return 0;
// }

// int main (){
// int a=10,b;
// b=a++;

// printf("%d", a);

// }

int main()
{
    int math, physics, english, fop, islamiat;
    int total, perc;

    printf("Enter physics number: ");
    scanf("%d", &physics);

    printf("Enter math number: ");
    scanf("%d", &math);

    printf("Enter english number: ");
    scanf("%d", &english);

    printf("Enter islamiat number: ");
    scanf("%d", &islamiat);

    printf("Enter fop number: ");
    scanf("%d", &fop);

    total = math + physics + fop + islamiat + english;
    perc = (total * 100) / 500;

    printf("Percentage: %d%%\n", perc);

    if (perc > 100)
        printf("enter correct value");
    else if ((perc >= 80) && (perc <= 100))
        printf("Your grade is A+\n");
    else if (perc >= 70 && (perc < 80))
        printf("Your grade is A\n");
    else if (perc >= 60 && (perc < 70))
        printf("Your grade is B\n");
    else if (perc >= 50 && (perc < 60))
        printf("Your grade is C\n");
    else if (perc >= 40 && (perc < 50))
        printf("Your grade is D\n");
    else
        printf("Your grade is F\n");

    return 0;
}

//  int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     printf("ASCII code of '%c' is %d\n", ch, ch);

//     return 0;
// }