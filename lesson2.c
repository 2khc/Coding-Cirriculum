#include <stdio.h> // explain this

// this is the first lesson, explain everything?

// A basic calculator that takes 2 inputs, and adds numbers together.
// program terminates after operation complete.

// explain the purpose of the main function and the
// meaning of void
int main(void)
{
    basicAddition();  //explain function call
}

int basicAddition()
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
