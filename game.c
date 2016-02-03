#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A basic calculator that takes 2 inputs, and adds numbers together.
// program terminates after operation complete.
int basicAddition1()
{
    int numOne;
    int numTwo;

    printf("Enter the first number: ");
    scanf("%i", &numOne);
    printf("Enter the second number: ");
    scanf("%i", &numTwo);

    int result = numOne + numTwo;

    printf("%i + %i = %i", numOne, numTwo, result);

    return result;

}

// A basic calculator that takes a single input continuously and adds it onto the previous number.
// uses a while loop.
double basicAddition()
{
    // Basic Addition
    double sum = 0;
    double input;
    while (scanf("%lf", &input))
    {
        sum += input;
        printf("Sum + input = %f\n", sum);
    }
    return sum;
}

// What about a calculator with which we can choose an operation we want?

int flexibleCalculator()
{
    //First, we declare the variables for values that we can expect to store.
    char operation;
    int numOne;
    int numTwo;
    int result;

    // First we get input from the console.
    printf("Input desired operation: ");
    scanf("%c", &operation);
    printf("Input first number: ");
    scanf("%i", &numOne);
    printf("Input second number: ");
    scanf("%i", &numTwo);

    // Now we decide how to use the operation that has been input.
    // We will do this using an "if - else" statement.
    if (operation == 'x' | operation == '*')
    {
        result = numOne * numTwo;
    }
    else if (operation == '+')
    {
        result = numOne + numTwo;
    }
    else if (operation == '-')
    {
        result = numOne - numTwo;
    }
    else if (operation == '/')
    {
        result = numOne / numTwo;
    }
    printf("%i %c %i = %i", numOne, operation, numTwo, result);
}


int main(void)
{


//    basicAddition1();
    flexibleCalculator();
}
