#include <stdio.h>

// What about a calculator with which we can choose an operation we want?


int main(void)
{
    flexibleCalculator();
}


int flexibleCalculator()
{
    //First, we declare the variables for values that we can expect to store.
    char operation;
    int numOne;
    int numTwo;
    int result;

    // First we get input from the console.
    printf("Input desired operation: (*, +, -, /)");
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

    // There is an alternative to using so many if-else statements in a row.
    // We call it switch-case statements.
    // Thomas --> explain about switch-case and ask them to rewrite this if statement in a switch
    // case format to achieve the same functionality.

    printf("%i %c %i = %i", numOne, operation, numTwo, result);
}
