#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <iostream>

int basicAddition1()
{
    int numOne;
    int numTwo;

    printf("Enter the first number: ");
    scanf("%i", &numOne);
    printf("Enter the second number: ");
    scanf("%i", &numTwo);

    int result = numOne + numTwo;

    printf("%i + %i = %i",numOne,numTwo,result);

}

double basicAddition()
{
    // Basic Addition
    double sum = 0;
    double input;
    while (scanf("%lf", &input))
    {
//        printf("input is: %lf\n", input);
//        printf("Sum = %lf\n", sum);
        sum += input;
        printf("Sum + input = %f\n", sum);
    }

}

int main(void)
{
    // 1 to 3 levels in the game
    // first level times tables
    // learn prediodic table?



    printf("Hi, welcome to a text-based game designed to help you with some interesting\nmathematical tasks");
    printf("\nDo you want to convert numbers into different bases? I know you do.\n");
//    printf("Here are the instructions:\n");

    basicAddition1();

}
