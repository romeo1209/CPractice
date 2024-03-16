#include <stdio.h>
int main() {
    char choice;
    double first ,second;




    printf("press 1 : ADD\n");
    printf("press 2:SUBTRACT\n");
    printf("press 3:MULTIPLICATION\n");
    printf("press 4:DIVISION\n");
    printf("enter your choice:");
    scanf("%d",&choice);




   switch (choice)
   {
    case 1:
    printf("enter two numbers :\n");
    scanf("%lf %lf",&first ,&second);
    printf("%.1lf + %.1lf = %.1lf",first ,second,first + second );
    break;

    case 2: 
    printf("enter two numbers :\n");
    scanf("%lf %lf",&first ,&second);
    printf("%.1lf - %.1lf = %.1lf",first ,second,first - second );
    break;

    case 3:
    printf("enter two numbers :\n");
    scanf("%lf %lf",&first ,&second);
    printf("%.1lf * %.1lf = %.1lf",first ,second,first * second );
    break;

    case 4:
    printf("enter two numbers :\n");
    scanf("%lf %lf",&first ,&second);
    printf("%.1lf / %.1lf = %.1lf",first ,second,first / second );
    break;


   }
    return 0;
}
