#include<stdio.h>

int main(){

//    test 1

//    int num1 , num2;
//    scanf("%d %d" , &num1 , &num2);
//
//    int addition = num1 + num2;
//    printf(" Addition = %d + %d = %d\n" , num1, num2 , addition);
//
//    int subtraction = num1 - num2;
//    printf("Subtraction = %d - %d = %d\n" , num1, num2 , subtraction);
//
//    int multiplication = num1 * num2;
//    printf("Multiplication = %d * %d = %d\n" , num1, num2 , multiplication);
//
//    int divison = num1 / num2;
//    printf("Divison = %d / %d = %d\n" , num1, num2 , divison);
//
//    int remainders = num1 % num2;
//    printf("Remainders = %d %% %d = %d\n" , num1, num2 , remainders);


//    test 2

    double num1 , num2;
    scanf("%lf %lf" , &num1 , &num2);

    double addition = num1 + num2;
    printf(" Addition = %lf + %lf = %lf\n" , num1, num2 , addition);

    double subtraction = num1 - num2;
    printf("Subtraction = %lf - %lf = %lf\n" , num1, num2 , subtraction);

    double multiplication = num1 * num2;
    printf("Multiplication = %.2lf * %.2lf = %.2lf\n" , num1, num2 , multiplication);

    double divison = num1 / num2;
    printf("Divison = %lf / %lf = %lf\n" , num1, num2 , divison);


    /*
    -   float,double er remainders hoi na.
    -   double er divison er kaj pora ta kore.
    -   double count korar joono .2lf ai rokom kore likhte hobe.
    */

    return 0;
}
