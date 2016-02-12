#include <stdio.h>

double basicAddition();

int main(void)
{
    basicAddition();
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
