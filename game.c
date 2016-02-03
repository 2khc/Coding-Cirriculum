#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A basic calculator that takes 2 inputs, and adds numbers together.
// program terminates after operation complete.
int basicAddition1()
{
    // need to give a description of all primitive datatypes here to the student.
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

    // There is an alternative to using so many if-else statements in a row.
    // We call it switch-case statements.
    // Thomas --> explain about switch-case and ask them to rewrite this if statement in a switch
    // case format to achieve the same functionality.

    printf("%i %c %i = %i", numOne, operation, numTwo, result);
}

// how to demonstrate a for loop in a calculator setting?

// how about if we wanted to calculate the n-factorial of a number?
// we also introduce the concept of passing arguments into a function here.
int nFactorial(int num)
{
    // as per usual, we first initialise the variables we will use to store our values;
    // explain the mathematics of n!, ie n! = n * (n-1) * (n-2) * ...

    int sum = num;  // we first set sum = num, why?

    // To solve this problem we will use a for loop.
    int i; // this is the counter for our for loop

    for (i = 1; i < sizeof(num); i++) // explain what this does Thomas
    {
        sum = sum * (num - i); // parenthesis work just like they do in maths!
    }
    printf("%i\n", sum);

}

// Do it yourself exercise: It is possible to calculate the power of a number using for loops.
// how would you do this? try it now!


int main(void)
{


//    basicAddition1();
//    flexibleCalculator();
    nFactorial(5);
}
