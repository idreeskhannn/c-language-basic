// #include<stdio.h>

// int main() {
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);
//     printf("You entered: %d\n", a);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int a = 10, b = 20;
//     printf("%d\n", a + b);  // Addition
//     printf("%d\n", a - b);  // Subtraction
//     printf("%d\n", a / b);  // Division
//     printf("%d\n", a % b);  // Modulus
//     return 0;
// }

// #include<stdio.h>

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

#include<stdio.h>

int main (){
int a=10,b;
b=a++;

printf("%d", a);

}
