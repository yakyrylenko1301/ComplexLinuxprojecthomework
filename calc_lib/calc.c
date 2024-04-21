#include "calc.h"
#include <math.h>

long int sum(long int a, long int b)
{
    return a + b;
}

long int difference(long int a, long int b)
{
    return a - b;
}

long int product(long int a, long int b)
{
    return a * b;
}

double fraction(double a, double b)
{
    return a / b;
}

unsigned int factorial(unsigned int n)
{
    if (n == 1) {
      return 1;
    }
   
    return n * factorial(n - 1);    
}

double square_root(unsigned int x)
{
    return sqrt(x);
}