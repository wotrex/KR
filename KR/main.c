#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a = 0.76f;
    double b = 3.36f;
    double x = 5.78f;
    double res;
    double h;
    h = x*log(pow((6-x),0.3));
    res = pow(x,a) - pow(b,h);
    printf("Result is %f\n", res);
    return 0;
}
